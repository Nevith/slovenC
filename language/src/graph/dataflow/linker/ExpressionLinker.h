//
// Created by andraz on 25/04/2020.
//

#ifndef SLOVENC_EXPRESSIONLINKER_H
#define SLOVENC_EXPRESSIONLINKER_H


#include <model/visitor/ModelVisitor.h>
#include <graph/base/GraphOrNode.h>
#include <graph/type/TypeGraph.h>
#include <model/symbols/main/FileSymbol.h>
#include <project/Project.h>
#include <graph/dataflow/linker/utils/FrameStack.h>

class ExpressionLinker: public ModelVisitor<GraphOrNode> {
private:
    const std::shared_ptr<TypeGraph> graph;
    const std::shared_ptr<Project> project;
    FrameStack frameStack;

    std::shared_ptr<Symbol> getSymbol(std::shared_ptr<DottedExpression> expression);

public:
    ExpressionLinker(std::shared_ptr<Project> project, std::shared_ptr<TypeGraph> graph);

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;
};


#endif //SLOVENC_EXPRESSIONLINKER_H
