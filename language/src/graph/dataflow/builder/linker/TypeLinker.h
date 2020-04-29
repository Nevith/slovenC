//
// Created by andraz on 28/04/2020.
//

#ifndef SLOVENC_TYPELINKER_H
#define SLOVENC_TYPELINKER_H


#include <graph/base/GraphOrNode.h>
#include <model/visitor/ModelVisitor.h>
#include <model/symbols/base/Symbol.h>
#include <project/Project.h>
#include <graph/dataflow/DataFlowGraph.h>
#include "model/symbols/main/InvalidTypeSymbol.h"
#include "SymbolSearcher.h"

class TypeLinker : public ModelVisitor<GraphOrNode> {
private:
    const std::shared_ptr<DataFlowGraph> graph;
    const std::shared_ptr<Project> project;

    SymbolSearcher searcher;

    Symbol getSymbol(TypeReferenceExpression expression);

public:
    TypeLinker(std::shared_ptr<Project> project);

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) override;

    void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;
};


#endif //SLOVENC_TYPELINKER_H
