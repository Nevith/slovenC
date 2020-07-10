//
// Created by andraz on 28/05/2020.
//

#include <interpreter/exits/Exit.h>
#include <interpreter/exits/BreakExit.h>
#include <interpreter/exits/ContinueExit.h>
#include <interpreter/exits/ReturnExit.h>
#include <interpreter/runtimevalues/ClassInstance.h>
#include "Interpreter.h"
#include "SlovenCRuntimeException.h"


Interpreter::Interpreter(const std::shared_ptr<Project> &project) : project(project) {
}

bool Interpreter::interpret() {
    // Find Program.zagon()
    try {
        std::shared_ptr<MethodSymbol> main;
        for (auto[key, value] : project->getRelativePathMap()) {
            auto fileSymbol = TypeUtils::cast<FileSymbol>(value);
            if (fileSymbol) {
                for (auto clazz : fileSymbol->getDeclaredClasses()) {
                    if (clazz->getName() == constants::PROGRAM) {
                        for (auto method : clazz->getDeclaredMethods()) {
                            if (method->getName() == constants::MAIN && method->getParameters().empty()) {
                                if (!main) {
                                    main = method;
                                } else {
                                    throw SlovenCRuntimeException("Najdenih več instanc 'Program.zagon()'");
                                }
                            }
                        }
                    }
                }
            }
        }
        if (!main) {
            throw SlovenCRuntimeException("Program.zagon ni bil najden");
        }

        // Start interpretation
        interpreterState.enterMethod(main, MethodState(Value(), main));
        visit(main);
        interpreterState.exitMethod();
        return true;

    } catch (Exit e) {
        std::cout << "----------------" << std::endl << " Neujet izhodni stavek: '" << e.what() << "'" << std::endl
                  << "----------------" << std::endl;
        return false;
    } catch (SlovenCRuntimeException e) {
        std::cout << "----------------" << std::endl << e.what() << std::endl << "----------------" << std::endl;
        return false;
    } catch (std::exception e) {
        // todo - log... ?
        std::cout << "----------------" << std::endl << "Nepricakovana napaka:" << std::endl << "----------------"
                  << std::endl;
        std::cout << e.what() << std::endl;
        return false;
    }
}

void Interpreter::visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) {
    auto expr = visitable->getExpression();
    auto ident = visitable->getIdentifier();
    auto identifier = TypeUtils::cast<IdentifierExpression>(ident);
    if (identifier) {
        visit(expr);
        setValue(identifier, getLastResult());
    } else {
        throw SlovenCRuntimeException("Vrednost lahko nastavimo le spremenljivkam");
    }
}

void Interpreter::visitCompareExpression(std::shared_ptr<CompareExpression> visitable) {
    visit(visitable->getRightExpression());
    auto right = getLastResult();
    visit(visitable->getLeftExpression());
    auto left = getLastResult();
    if (visitable->getOperator().compare("==") == 0) {
        setLastResult(left == right);
    } else if (visitable->getOperator().compare("!=") == 0) {
        setLastResult(left != right);
    } else if (visitable->getOperator().compare("<") == 0) {
        setLastResult(left < right);
    } else if (visitable->getOperator().compare(">") == 0) {
        setLastResult(left > right);
    } else if (visitable->getOperator().compare(">=") == 0) {
        setLastResult(left >= right);
    } else if (visitable->getOperator().compare("<=") == 0) {
        setLastResult(left <= right);
    } else if (visitable->getOperator().compare("&&") == 0) {
        setLastResult(left && right);
    } else {
        setLastResult(left || right);
    }
}

void Interpreter::visitNotExpression(std::shared_ptr<NotExpression> visitable) {
    visit(visitable->getExpression());
    auto result = getLastResult();
    if (result.getType() != PredefinedSymbol::BOOLEAN) {
        throw SlovenCRuntimeException("Zanikanje podprto le za tip " + PredefinedSymbol::BOOLEAN->getName());
    }
    bool boolValue = *((bool *) result.getValue().get());
    setLastResult(!boolValue);
}

void Interpreter::visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {
    auto resolve = visitable->getResolve();
    if (TypeUtils::cast<TypeSymbol>(resolve)) {
        auto object = visitable->getObject();
        if (object) {
            visit(object);
        }
        setLastResult(Value());
    } else {
        getValue(visitable);
    }
}

void Interpreter::visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    setLastResult(Value());
}

void Interpreter::visitThisExpression(std::shared_ptr<ThisExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        throw SlovenCRuntimeException("Gnezdenje '" + visitable->getName() + "' ni podprto.");
    }
    setLastResult(interpreterState.getThisReference());
}

void Interpreter::visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    setLastResult(Value());
}

void Interpreter::visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    auto method = TypeUtils::cast<MethodSymbol>(visitable->getResolve());

    if (!method) {
        throw SlovenCRuntimeException("Neveljaven klic metode '" + visitable->getContext().getText() + "'");
    }

    auto parameters = method->getParameters();
    auto arguments = visitable->getArguments();
    auto state = MethodState(Value(), method);
    for (int i = 0; i < parameters.size(); ++i) {
        visit(arguments[i]);
        auto argumentValue = getLastResult();
        state.setValue(parameters[i], argumentValue);
    }

    interpreterState.enterMethod(method, state);
    visit(method);
    interpreterState.exitMethod();
}

void Interpreter::visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {
    auto object = visitable->getObject();
    Value thisReference;
    if (object) {
        visit(visitable->getObject());
        thisReference = getLastResult();
    } else {
        thisReference = interpreterState.getThisReference();
    }

    auto method = TypeUtils::cast<MethodSymbol>(visitable->getResolve());

    if (!method) {
        throw SlovenCRuntimeException("Neveljaven klic metode '" + visitable->getContext().getText() + "'");
    }

    if (method->isStatic()) {
        thisReference = Value();
    }

    auto parameters = method->getParameters();
    auto arguments = visitable->getArguments();
    auto state = MethodState(thisReference, method);
    for (int i = 0; i < parameters.size(); ++i) {
        visit(arguments[i]);
        auto argumentValue = getLastResult();
        state.setValue(parameters[i], argumentValue);
    }

    interpreterState.enterMethod(method, state);
    visit(method);
    interpreterState.exitMethod();
}

void Interpreter::visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {
    throw SlovenCRuntimeException("Klic '" + visitable->getContext().getText() + "' še ni podprt.");
}

void Interpreter::visitBooleanLiteral(std::shared_ptr<BooleanLiteral> visitable) {
    setLastResult(Value(visitable->getValue()));
}

void Interpreter::visitDoubleLiteral(std::shared_ptr<DoubleLiteral> visitable) {
    setLastResult(Value(visitable->getValue()));
}

void Interpreter::visitIntegerLiteral(std::shared_ptr<IntegerLiteral> visitable) {
    setLastResult(Value(visitable->getValue()));
}

void Interpreter::visitNullLiteral(std::shared_ptr<NullLiteral> visitable) {
    setLastResult(Value());
}

void Interpreter::visitStringLiteral(std::shared_ptr<StringLiteral> visitable) {
    setLastResult(Value(visitable->getValue()));
}

void Interpreter::visitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) {
    visit(visitable->getRightExpression());
    auto right = getLastResult();
    visit(visitable->getLeftExpression());
    auto left = getLastResult();
    if (visitable->getOperator() == "-") {
        setLastResult(left - right);
    } else {
        setLastResult(left + right);
    }
}

void Interpreter::visitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) {
    visit(visitable->getRightExpression());
    auto right = getLastResult();
    visit(visitable->getLeftExpression());
    auto left = getLastResult();
    if (visitable->getOperator().compare("*") == 0) {
        setLastResult(left * right);
    } else if (visitable->getOperator().compare("/") == 0) {
        setLastResult(left / right);
    } else {
        setLastResult(left % right);
    }
}

void Interpreter::visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) {
    auto expr = visitable->getExpression();
    auto identifier = TypeUtils::cast<IdentifierExpression>(expr);
    if (identifier) {
        getValue(identifier);
        auto value = getLastResult();
        if (visitable->getOperator().compare("++") == 0) {
            setLastResult(value + 1);
        } else {
            setLastResult(value - 1);
        }

        setValue(identifier, getLastResult());
    } else {
        throw SlovenCRuntimeException("Vrednost lahko nastavimo le spremenljivkam");
    }
}

void Interpreter::visitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) {
    visit(visitable->getExpression());
}

void Interpreter::visitBreakStatement(std::shared_ptr<BreakStatement> visitable) {
    throw BreakExit();
}

void Interpreter::visitContinueStatement(std::shared_ptr<ContinueStatement> visitable) {
    throw ContinueExit();
}

void Interpreter::visitReturnStatement(std::shared_ptr<ReturnStatement> visitable) {
    visit(visitable->getExpression());
    throw ReturnExit();
}

void Interpreter::visitBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    for (auto statement : visitable->getStatements()) {
        visit(statement);
    }
}

void Interpreter::visitElseStatement(std::shared_ptr<ElseStatement> visitable) {
    visit(visitable->getNestedStatement());
}

void Interpreter::visitEmptyStatement(std::shared_ptr<EmptyStatement> visitable) {
    // empty...
}

void Interpreter::visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) {
    visit(visitable->getExpression());
}

void Interpreter::visitForStatement(std::shared_ptr<ForStatement> visitable) {
    // Initialize values for all variables declared in the for statement
    auto variables = visitable->getVariables();
    for (auto var : variables) {
        auto initialValue = var->getInitialValue();
        if (initialValue) {
            visit(var->getInitialValue());
        } else {
            setLastResult(Value());
        }
        interpreterState.setValue(var, getLastResult());
    }

    // Loop until condition evaluates to false or a break statement is reached
    while (true) {
        visit(visitable->getCondition());
        auto conditionResult = getLastResult();
        if (conditionResult.getType() == PredefinedSymbol::BOOLEAN) {
            if (*(bool *) conditionResult.getValue().get()) {
                try {
                    visit(visitable->getNestedStatement());
                } catch (BreakExit e) {
                    break;
                } catch (ContinueExit e) {
                    // do nothing
                }
                for (auto expr : visitable->getUpdateExpressions()) {
                    visit(expr);
                }
            } else {
                break;  // Condition is false => BREAK
            }
        } else {
            // Throw runtime error
            throw SlovenCRuntimeException("Tip pogoja mora biti '" + PredefinedSymbol::BOOLEAN->getName() + "'");
        }
    }
}

void Interpreter::visitIfStatement(std::shared_ptr<IfStatement> visitable) {
    visit(visitable->getCondition());
    auto conditionResult = getLastResult();
    if (conditionResult.getType() == PredefinedSymbol::BOOLEAN) {
        if (*(bool *) conditionResult.getValue().get()) {
            visit(visitable->getNestedStatement());
        } else {
            if (visitable->getElseStatement()) {
                visit(visitable->getElseStatement());
            }
        }
    } else {
        throw SlovenCRuntimeException("Tip pogoja mora biti '" + PredefinedSymbol::BOOLEAN->getName() + "'");
    }
}


void Interpreter::visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) {
    auto var = visitable->getVariableSymbol();
    if (var->getInitialValue()) {
        visit(var->getInitialValue());
        interpreterState.setValue(var, getLastResult());
    }
}

void Interpreter::visitWhileStatement(std::shared_ptr<WhileStatement> visitable) {
    while (true) {
        visit(visitable->getCondition());
        auto conditionResult = getLastResult();
        if (conditionResult.getType() == PredefinedSymbol::BOOLEAN) {
            if (*(bool *) conditionResult.getValue().get()) {
                try {
                    visit(visitable->getNestedStatement());
                } catch (BreakExit e) {
                    break;
                } catch (ContinueExit e) {
                    // do nothing
                }
            } else {
                break;
            }
        } else {
            throw SlovenCRuntimeException("Tip pogoja mora biti '" + PredefinedSymbol::BOOLEAN->getName() + "'");
        }
    }
}

void Interpreter::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    if (visitable->getIsConstructor()) {
        auto thisReference = interpreterState.getThisReference();
        auto classType = TypeUtils::cast<ClassSymbol>(visitable->getParentSymbol());
        if (classType == PredefinedSymbol::BOOLEAN) {
            thisReference.setValue(std::make_shared<bool>(false), PredefinedSymbol::BOOLEAN);

        } else if (classType == PredefinedSymbol::INT) {
            thisReference.setValue(std::make_shared<int>(0), PredefinedSymbol::INT);

        } else if (classType == PredefinedSymbol::DOUBLE) {
            thisReference.setValue(std::make_shared<double>(0.0), PredefinedSymbol::DOUBLE);

        } else if (classType == PredefinedSymbol::STRING) {
            thisReference.setValue(std::make_shared<std::string>(""), PredefinedSymbol::STRING);

        } else if (classType == PredefinedSymbol::LIST) {
            thisReference.setValue(std::make_shared<std::vector<Value>>(), PredefinedSymbol::LIST);
        } else {
            thisReference.setValue(std::make_shared<ClassInstance>(TypeUtils::cast<ClassSymbol>(classType)), classType);
        }

        setLastResult(thisReference);
    } else if (visitable->getIsSynthetic()) {
        runPredefinedMethod(visitable);
        return;
    }
    try {
        visit(visitable->getScope());
    } catch (ReturnExit e) {
        // do nothing
    }
    if (!visitable->getIsConstructor()) {
        if (visitable->getResult()->getResolve() == PredefinedSymbol::VOID) {
            setLastResult(Value());
        }
    }
}

void Interpreter::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    ModelVisitor::visitClassSymbol(visitable);
}

void Interpreter::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    ModelVisitor::visitFileSymbol(visitable);
}

void Interpreter::visitInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) {
    ModelVisitor::visitInvalidTypeSymbol(visitable);
}

void Interpreter::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    ModelVisitor::visitPackageSymbol(visitable);
}

void Interpreter::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    ModelVisitor::visitPredefinedSymbol(visitable);
}

void Interpreter::visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    ModelVisitor::visitFieldSymbol(visitable);
}

void Interpreter::visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    ModelVisitor::visitLocalVariableSymbol(visitable);
}

void Interpreter::visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    ModelVisitor::visitParameterSymbol(visitable);
}


