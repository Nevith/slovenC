//
// Created by andraz on 24/04/2020.
//

#include "DataFlowGraph.h"

void DataFlowGraph::addNode(std::shared_ptr<DataFlowNode> node) {
    auto visitable = node->getVisitable();
    vertexMap[visitable] = node;
}

std::shared_ptr<DataFlowNode> DataFlowGraph::getNode(std::shared_ptr<Visitable> key) {
    return vertexMap[key];
}

void DataFlowGraph::addEdge(std::shared_ptr<DataFlowNode> first, std::shared_ptr<DataFlowNode> second,
                            std::shared_ptr<DataFlowEdge> edge) {
    first->addOutgoingEdge(edge);
    second->addIncomingEdge(edge);
}
