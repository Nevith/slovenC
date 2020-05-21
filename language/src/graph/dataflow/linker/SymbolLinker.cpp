//
// Created by andraz on 25/04/2020.
//


#include "SymbolLinker.h"

SymbolLinker::SymbolLinker(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol, std::shared_ptr<DataFlowGraph> graph) : project(project),
                                                                                                       fileSymbol(
                                                                                                               fileSymbol),
                                                                                                       graph(graph) {
}

std::shared_ptr<Symbol> SymbolLinker::resolveMethods(std::vector<std::shared_ptr<MethodSymbol>> possibleMethods,
                                                     std::shared_ptr<CallExpression> expression) {
    auto arguments = expression->getArguments();
    for (auto possibleMethod : possibleMethods) {
        auto parameters = possibleMethod->getParameters();
        bool incorrect = false;
        if (arguments.size() == parameters.size()) {
            for (int i = 0; i < arguments.size(); ++i) {
                auto argumentType = TypeResolveUtil::getType(arguments[i]);
                auto parameterType = TypeResolveUtil::getType(parameters[i]);;
                if (!InheritanceUtil::isInstanceOf(argumentType, parameterType)) {
                    incorrect = true;
                    break;
                }
            }
            if (incorrect) {
                continue;
            } else {
                return possibleMethod;
            }
        }
    }
    return InvalidSymbol::INVALID;
}

std::vector<std::shared_ptr<MethodSymbol>>
SymbolLinker::findPossibleMethods(std::shared_ptr<CallExpression> callExpression) {
    auto parent = callExpression->getObject();
    auto parentSymbolReference = TypeUtils::cast<IdentifierExpression>(parent);
    std::vector<std::shared_ptr<MethodSymbol>> result;
    if (parentSymbolReference) {
        auto resolve = parentSymbolReference->getResolve();
        if (resolve) {
            result = searcher.findMethods(callExpression, resolve);
        }
    } else {
        result = frameStack.getMethods(callExpression->getName());
    }
    return result;
}


std::shared_ptr<Symbol> SymbolLinker::findSymbol(std::shared_ptr<IdentifierExpression> identifierExpression) {
    auto parent = identifierExpression->getObject();
    auto parentSymbolReference = TypeUtils::cast<IdentifierExpression>(parent);
    std::shared_ptr<Symbol> result;
    if (parentSymbolReference) {
        auto resolve = parentSymbolReference->getResolve();
        if (resolve) {
            result = searcher.findSymbol(identifierExpression, resolve);
        }
    } else {
        result = frameStack.getSymbol(identifierExpression->getName());
    }
    return result;
}

void SymbolLinker::enterSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass) {
    for (auto super : aClass->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                enterSuperClassSymbol(superClass);
            }
        }
    }
    frameStack.createFrame();
    for (auto clazz: aClass->getDeclaredClasses()) {
        frameStack.pushSymbol(clazz, clazz->getName());
    }
    for (auto field: aClass->getDeclaredFields()) {
        frameStack.pushSymbol(field, field->getName());
    }
    for (auto method: aClass->getDeclaredMethods()) {
        frameStack.pushSymbol(method, method->getName());
    }
}

void SymbolLinker::exitSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass) {
    for (auto super : aClass->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                exitSuperClassSymbol(superClass);
            }
        }
    }
    frameStack.popFrame();
}

void SymbolLinker::enterFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    frameStack.createFrame();
}

void SymbolLinker::exitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    frameStack.popFrame();
}

void SymbolLinker::enterClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    for (auto super : visitable->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                enterSuperClassSymbol(superClass);
            }
        }
    }
    frameStack.createFrame();
}

void SymbolLinker::exitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    frameStack.popFrame();
    for (auto super : visitable->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                exitSuperClassSymbol(superClass);
            }
        }
    }
}

void SymbolLinker::enterMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    frameStack.pushSymbol(visitable, visitable->getName());
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    frameStack.createFrame();
}

void SymbolLinker::exitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    frameStack.popFrame();
}

void SymbolLinker::enterBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    frameStack.createFrame();
}

void SymbolLinker::exitBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    frameStack.popFrame();
}

void SymbolLinker::enterParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    frameStack.pushSymbol(visitable, visitable->getName());
}

void SymbolLinker::enterLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    frameStack.pushSymbol(visitable, visitable->getName());
}

void SymbolLinker::enterFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    frameStack.pushSymbol(visitable, visitable->getName());
}

void SymbolLinker::exitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {
    auto initialResolve = visitable->getResolve();
    if (initialResolve) {
        return;
    }
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    auto symbol = findSymbol(visitable);

    visitable->setResolve(symbol);
    // Correct import
    std::shared_ptr<DataFlowNode> parentNode = graph->getNode(symbol);
    if (!parentNode) {
        parentNode = std::make_shared<DataFlowNode>(symbol);
        graph->addNode(parentNode);
    }
    graph->addEdge(parentNode, node, std::make_shared<DataFlowEdge>(true));
}

void SymbolLinker::exitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    auto constructionClass = visitable->getConstructionClass();
    std::vector<std::shared_ptr<MethodSymbol>> possibleMethods;
    if (constructionClass) {
        possibleMethods = constructionClass->getConstructors();
    }
    auto symbol = resolveMethods(possibleMethods, visitable);

    visitable->setResolve(symbol);
    // Correct import
    std::shared_ptr<DataFlowNode> parentNode = graph->getNode(symbol);
    if (!parentNode) {
        parentNode = std::make_shared<DataFlowNode>(symbol);
        graph->addNode(parentNode);
    }
    graph->addEdge(parentNode, node, std::make_shared<DataFlowEdge>(true));
}

void SymbolLinker::exitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    auto possibleMethods = findPossibleMethods(visitable);
    auto symbol = resolveMethods(possibleMethods, visitable);

    visitable->setResolve(symbol);
    // Correct import
    std::shared_ptr<DataFlowNode> parentNode = graph->getNode(symbol);
    if (!parentNode) {
        parentNode = std::make_shared<DataFlowNode>(symbol);
        graph->addNode(parentNode);
    }
    graph->addEdge(parentNode, node, std::make_shared<DataFlowEdge>(true));
}

void SymbolLinker::exitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {
    auto node = std::make_shared<DataFlowNode>(visitable);
    graph->addNode(node);
    auto possibleMethods = visitable->getParentClass()->getConstructors();
    auto symbol = resolveMethods(possibleMethods, visitable);

    visitable->setResolve(symbol);
    // Correct import
    std::shared_ptr<DataFlowNode> parentNode = graph->getNode(symbol);
    if (!parentNode) {
        parentNode = std::make_shared<DataFlowNode>(symbol);
        graph->addNode(parentNode);
    }
    graph->addEdge(parentNode, node, std::make_shared<DataFlowEdge>(true));
}
