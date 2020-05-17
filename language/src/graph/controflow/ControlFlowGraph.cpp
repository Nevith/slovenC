//
// Created by andraz on 24/04/2020.
//

#include "ControlFlowGraph.h"

void ControlFlowGraph::addVertex(std::shared_ptr<ControlFlowNode> vertex) {
    if (!startingVertex) {
        startingVertex = vertex;
    }
    lastVertex = vertex;
}

const std::shared_ptr<ControlFlowNode> &ControlFlowGraph::getStartingVertex() const {
    return startingVertex;
}

const std::shared_ptr<ControlFlowNode> &ControlFlowGraph::getLastVertex() const {
    return lastVertex;
}

void ControlFlowGraph::replace(std::shared_ptr<ControlFlowNode> old, std::shared_ptr<ControlFlowNode> correct) {
    // TODO
}