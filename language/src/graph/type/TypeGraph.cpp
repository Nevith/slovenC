//
// Created by andraz on 24/04/2020.
//

#include "TypeGraph.h"

void TypeGraph::addNode(std::shared_ptr<TypeNode> node) {
    auto visitable = node->getVisitable();
    vertexMap[visitable] = node;
}

std::shared_ptr<TypeNode> TypeGraph::getNode(std::shared_ptr<Visitable> key) {
    return vertexMap[key];
}

void TypeGraph::addEdge(std::shared_ptr<TypeNode> first, std::shared_ptr<TypeNode> second,
                        std::shared_ptr<TypeEdge> edge) {
    first->addOutgoingEdge(edge);
    second->addIncomingEdge(edge);
    edge->setStartingVertex(first);
    edge->setEndingVertex(second);
}

const std::map<std::shared_ptr<Visitable>, std::shared_ptr<TypeNode>> &TypeGraph::getVertexMap() const {
    return vertexMap;
}

const std::vector<std::shared_ptr<TypeNode>> TypeGraph::getVertices() {
    std::vector<std::shared_ptr<TypeNode>> result;
    for (auto const&[key, val] : vertexMap) {
        if (val) {
            result.push_back(val);
        }
    }
    return result;
}
