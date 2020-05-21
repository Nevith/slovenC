//
// Created by andraz on 12/05/2020.
//

#include "DataFlowGraph.h"

void DataFlowGraph::addNode(std::shared_ptr<DataFlowNode> node) {
    auto visitable = node->getVisitable();
    vertexMap[visitable] = node;
}

void DataFlowGraph::addEdge(std::shared_ptr<DataFlowNode> first, std::shared_ptr<DataFlowNode> second,
                            std::shared_ptr<DataFlowEdge> edge) {
    first->addOutgoingEdge(edge);
    second->addIncomingEdge(edge);
    edge->setStartingVertex(first);
    edge->setEndingVertex(second);
}

const std::vector<std::shared_ptr<DataFlowNode>> DataFlowGraph::getVertices() {
    std::vector<std::shared_ptr<DataFlowNode>> result;
    for (auto const&[key, val] : vertexMap) {
        if (val) {
            result.push_back(val);
        }
    }
    return result;
}

const std::shared_ptr<DataFlowNode> DataFlowGraph::getNode(std::shared_ptr<Visitable> visitable) {
    return vertexMap[visitable];
}

const std::map<std::shared_ptr<Visitable>, std::shared_ptr<DataFlowNode>> &DataFlowGraph::getVertexMap() const {
    return vertexMap;
}
