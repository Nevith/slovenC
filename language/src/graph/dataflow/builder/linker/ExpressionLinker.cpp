//
// Created by andraz on 25/04/2020.
//

#include <model/symbols/main/InvalidTypeSymbol.h>
#include "ExpressionLinker.h"

ExpressionLinker::ExpressionLinker(std::shared_ptr<Project> project, std::shared_ptr<DataFlowGraph> graph) : graph(graph),
                                                                       project(project) {
    graph->addNode(std::make_shared<DataFlowNode>(InvalidTypeSymbol::INVALID_TYPE));

}

Symbol ExpressionLinker::getSymbol(DottedExpression expression) {
    auto object = expression.getObject();
    if (object) {
        visit(object);
        auto node = graph->getNode(object);
        auto parentSymbol = node->getUsageEdge()->getStartingVertex()->getVisitable();

    }


    frameStack.getSymbol(expression.getName());
}

void ExpressionLinker::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    for (auto import : visitable->getImports()) {
        visit(import);
    }
    for (auto clazz : visitable->getDeclaredClasses()) {
        visit(clazz);
    }
}

void ExpressionLinker::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    for (auto superClass : visitable->getSuperClasses()) {
        visit(superClass);
    }
    for (auto field : visitable->getDeclaredFields()) {
        visit(field);
    }
    for (auto declaredClass : visitable->getDeclaredClasses()) {
        visit(declaredClass);
    }
    for (auto method : visitable->getDeclaredMethods()) {
        visit(method);
    }
    for (auto constructor : visitable->getConstructors()) {
        visit(constructor);
    }
}
