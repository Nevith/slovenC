//
// Created by andraz on 28/05/2020.
//

#include <interpreter/exits/Exit.h>
#include <interpreter/exits/BreakExit.h>
#include <interpreter/exits/ContinueExit.h>
#include <interpreter/exits/ReturnExit.h>
#include "Interpreter.h"


Interpreter::Interpreter(const std::shared_ptr<Project> &project) : project(project) {
}

void Interpreter::interpret() {
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
                                    throw RuntimeException("Najden drug Program.zagon()");
                                }
                            }
                        }
                    }
                }
            }
        }
        if (!main) {
            throw RuntimeException("Program.zagon ni bil najden");
        }

        // Start interpretation
        interpreterState.enterMethod(main, MethodState(Value(), main));
        visit(main);

    } catch (Exit e) {
        std::cout << "----------------" << std::endl << " neujet izhodni stavek: '" << e.what() << "'" << std::endl
                  << "----------------" << std::endl;
        return;
    } catch (RuntimeException e) {
        std::cout << "----------------" << std::endl << e.what() << std::endl << "----------------" << std::endl;
        return;
    } catch (std::exception e) {
        // todo - log... ?
        std::cout << "----------------" << std::endl << "Nepricakovana napaka:" << std::endl << "----------------"
                  << std::endl;
        std::cout << "----------------" << e.what() << "----------------" << std::endl;
        return;
    }
}

void Interpreter::visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) {
    ModelVisitor::visitAssignmentExpression(visitable);
}

void Interpreter::visitCompareExpression(std::shared_ptr<CompareExpression> visitable) {
    visit(visitable->getRightExpression());
    auto right = getLastResult();
    visit(visitable->getLeftExpression());
    auto left = getLastResult();
    if (visitable->getOperator() == "==") {
        setLastResult(left == right);
    } else if (visitable->getOperator() == "!=") {
        setLastResult(left != right);
    } else if (visitable->getOperator() == "<") {
        setLastResult(left < right);
    } else if (visitable->getOperator() == ">") {
        setLastResult(left > right);
    } else if (visitable->getOperator() == ">=") {
        setLastResult(left >= right);
    } else {
        setLastResult(left <= right);
    }
}

void Interpreter::visitNotExpression(std::shared_ptr<NotExpression> visitable) {
    visit(visitable->getExpression());
    auto result = getLastResult();
    if (result.getType() != PredefinedSymbol::BOOLEAN) {
        throw RuntimeException("Zanikanje podprto le za tip " + PredefinedSymbol::BOOLEAN->getName());
    }
    bool boolValue = *((bool *) result.getValue().get());
    setLastResult(!boolValue);
}

void Interpreter::visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    setLastResult(interpreterState.getValue(visitable->getResolve()));
}

void Interpreter::visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    setLastResult(interpreterState.getValue(visitable->getResolve()));
}

void Interpreter::visitThisExpression(std::shared_ptr<ThisExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    setLastResult(interpreterState.getValue(visitable->getResolve()));
}

void Interpreter::visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    setLastResult(Value(PredefinedSymbol::OBJECT, TypeUtils::cast<TypeSymbol>(visitable->getResolve())));
}

void Interpreter::visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    auto method = TypeUtils::cast<MethodSymbol>(visitable->getResolve());
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
}

void Interpreter::visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {
    auto object = visitable->getObject();
    if (object) {
        visit(visitable->getObject());
    }
    auto method = TypeUtils::cast<MethodSymbol>(visitable->getResolve());
    auto parameters = method->getParameters();
    auto arguments = visitable->getArguments();
    auto state = MethodState(getLastResult(), method);
    for (int i = 0; i < parameters.size(); ++i) {
        visit(arguments[i]);
        auto argumentValue = getLastResult();
        state.setValue(parameters[i], argumentValue);
    }
    interpreterState.enterMethod(method, state);
    visit(method);
}

void Interpreter::visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {
    throw RuntimeException("Klic '" + visitable->getContext().getText() + "' še ni podprt.");
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
    if (visitable->getOperator() == "*") {
        setLastResult(left * right);
    } else {
        setLastResult(left / right);
    }
}

void Interpreter::visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) {
    auto expr = visitable->getExpression();
    visit(expr);
    auto value = getLastResult();
    if (visitable->getOperator() == "++") {
        setLastResult(value + 1);
    } else {
        setLastResult(value - 1);
    }
    auto identifier = TypeUtils::cast<IdentifierExpression>(expr);
    if (identifier) {
        interpreterState.setValue(identifier->getResolve(), getLastResult());
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
    for(auto statement : visitable->getStatements()) {
        visit(statement);
    }
}

void Interpreter::visitElseStatement(std::shared_ptr<ElseStatement> visitable) {
    ModelVisitor::visitElseStatement(visitable);
}

void Interpreter::visitEmptyStatement(std::shared_ptr<EmptyStatement> visitable) {
    ModelVisitor::visitEmptyStatement(visitable);
}

void Interpreter::visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) {
    ModelVisitor::visitExpressionStatement(visitable);
}

void Interpreter::visitForStatement(std::shared_ptr<ForStatement> visitable) {
    ModelVisitor::visitForStatement(visitable);
}

void Interpreter::visitIfStatement(std::shared_ptr<IfStatement> visitable) {
    ModelVisitor::visitIfStatement(visitable);
}

void Interpreter::visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) {
    ModelVisitor::visitVariableDeclarationStatement(visitable);
}

void Interpreter::visitWhileStatement(std::shared_ptr<WhileStatement> visitable) {
    ModelVisitor::visitWhileStatement(visitable);
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

void Interpreter::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    ModelVisitor::visitMethodSymbol(visitable);
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
