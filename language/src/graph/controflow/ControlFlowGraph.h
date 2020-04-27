//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_CONTROLFLOWGRAPH_H
#define SLOVENC_CONTROLFLOWGRAPH_H


#include <memory>
#include <graph/base/Graph.h>
#include "ControlFlowEdge.h"
#include "ControlFlowNode.h"

class ControlFlowGraph : public Graph<ControlFlowNode, ControlFlowEdge> {
    std::shared_ptr<ControlFlowNode> startingVertex;
    std::shared_ptr<ControlFlowNode> lastVertex;

public:
    void addVertex(std::shared_ptr<ControlFlowNode> vertex);

    const std::shared_ptr<ControlFlowNode> &getStartingVertex() const;

    const std::shared_ptr<ControlFlowNode> &getLastVertex() const;

    void replace(std::shared_ptr<ControlFlowNode> old, std::shared_ptr<ControlFlowNode> correct);
};


#endif //SLOVENC_CONTROLFLOWGRAPH_H
