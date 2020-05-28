//
// Created by andraz on 06/05/2020.
//

#include "InheritanceLinker.h"

InheritanceLinker::InheritanceLinker(std::shared_ptr<TypeGraph> graph, std::shared_ptr<Project> project,
                                     std::shared_ptr<FileSymbol> fileSymbol) : graph(graph), project(project),
                                                                               fileSymbol(fileSymbol) {

}

void InheritanceLinker::link() {
    visit(fileSymbol);
}

void InheritanceLinker::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    for (auto clazz : visitable->getDeclaredClasses()) {
        visit(clazz);
    }
}

void InheritanceLinker::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    auto mainNode = graph->getNode(visitable);
    if (!mainNode) {
        return;
    }
    for (auto super : visitable->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (!resolve) {
            continue;
        }
        if (resolve != InvalidSymbol::INVALID) {
            auto superNode = graph->getNode(resolve);
            graph->addEdge(superNode, mainNode, std::make_shared<TypeEdge>(false));
        }
    }
    if (visitable->getSuperClasses().empty()) {
        auto resolve = PredefinedSymbol::OBJECT;
        auto objectReference = std::make_shared<TypeReferenceExpression>(resolve->getName());
        objectReference->setResolve(resolve);
        objectReference->setFileSymbol(visitable->getFileSymbol());
        objectReference->setContext(visitable->getContext());
        objectReference->setParentClass(visitable);
        visitable->addSuperClass(objectReference);

        auto superNode = graph->getNode(resolve);
        graph->addEdge(superNode, mainNode, std::make_shared<TypeEdge>(false));
    }

    for (auto clazz : visitable->getDeclaredClasses()) {
        visit(clazz);
    }
}

void InheritanceLinker::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    visitClassSymbol(visitable);
}
