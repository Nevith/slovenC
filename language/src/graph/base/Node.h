//
// Created by Andraz on 18/03/2020.
//

#ifndef SLOVENC_NODE_H
#define SLOVENC_NODE_H


#include <memory>
#include <vector>
#include "GraphOrNode.h"

template<class E>
class Node : public GraphOrNode {
private:
    std::vector<std::shared_ptr<E>> incomingEdges;
    std::vector<std::shared_ptr<E>> outgoingEdges;
public:
    virtual const std::vector<std::shared_ptr<E>> getIncomingEdges() const {
        return incomingEdges;
    }

    virtual void addIncomingEdge(const std::shared_ptr<E> &incomingEdge) {
        incomingEdges.push_back(incomingEdge);
    }

    virtual const std::vector<std::shared_ptr<E>> getOutgoingEdges() const {
        return outgoingEdges;
    }

    virtual void addOutgoingEdge(const std::shared_ptr<E> &outgoingEdge) {
        outgoingEdges.push_back(outgoingEdge);
    }
};


#endif //SLOVENC_NODE_H
