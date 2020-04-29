//
// Created by andraz on 28/04/2020.
//

#include "TypeLinker.h"

Symbol TypeLinker::getSymbol(TypeReferenceExpression expression) {
    auto object = expression.getObject();
    if (object) {
        visit(object);
        auto node = graph->getNode(object);
        auto parentSymbol = node->getUsageEdge()->getStartingVertex()->getVisitable();
        searcher.visit(parentSymbol);
    }


}

TypeLinker::TypeLinker(std::shared_ptr<Project> project): project(project) {

}

void TypeLinker::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    for (auto import : visitable->getImports()) {
        visit(import);
    }
    for (auto clazz : visitable->getDeclaredClasses()) {
        visit(clazz);
    }
}

void TypeLinker::visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {
    auto node = std::make_shared<DataFlowNode>(visitable);
    auto symbol = project->getSymbolByFullyQualifiedName(visitable->getFullyQualifiedName());
    std::shared_ptr<DataFlowNode> parentNode;
    if (symbol) {
        visitable->setResolve(symbol);
        // Correct import
        parentNode = graph->getNode(symbol);
        if (!parentNode) {
            parentNode = std::make_shared<DataFlowNode>(symbol);
        }
    } else {
        // Invalid import
        parentNode = graph->getNode(InvalidTypeSymbol::INVALID_TYPE);
    }

    graph->addEdge(parentNode, node, std::make_shared<DataFlowEdge>(false));
    if (visitable->getObject()) {
        visit(visitable->getObject());
    }
}

void TypeLinker::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
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
