//
// Created by andraz on 06/05/2020.
//

#ifndef SLOVENC_INHERITANCELINKER_H
#define SLOVENC_INHERITANCELINKER_H


#include <graph/base/GraphOrNode.h>
#include <model/Model.h>
#include <project/Project.h>
#include <graph/type/TypeGraph.h>

class InheritanceLinker : public ModelVisitor<GraphOrNode> {

private:
    std::shared_ptr<TypeGraph> graph;
    const std::shared_ptr<Project> project;
    const std::shared_ptr<FileSymbol> fileSymbol;

public:
    InheritanceLinker(std::shared_ptr<TypeGraph> graph, std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol);

    void link();

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;

    void visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) override;
};


#endif //SLOVENC_INHERITANCELINKER_H
