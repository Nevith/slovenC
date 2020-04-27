//
// Created by andraz on 25/04/2020.
//

#ifndef SLOVENC_DFGSTAGEONEBUILDER_H
#define SLOVENC_DFGSTAGEONEBUILDER_H


#include <model/visitor/ModelVisitor.h>
#include <graph/base/GraphOrNode.h>
#include <graph/dataflow/DataFlowGraph.h>
#include <model/symbols/main/FileSymbol.h>

class DfgStageOneBuilder: public ModelVisitor<GraphOrNode> {
private:
    const std::shared_ptr<DataFlowGraph> graph;

public:
    DfgStageOneBuilder();

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) override;
};


#endif //SLOVENC_DFGSTAGEONEBUILDER_H
