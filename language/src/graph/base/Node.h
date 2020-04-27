//
// Created by Andraz on 18/03/2020.
//

#ifndef SLOVENC_NODE_H
#define SLOVENC_NODE_H


#include <memory>
#include "GraphOrNode.h"

template<class E>
class Node : public GraphOrNode {
private:
    std::shared_ptr<E> incomingEdge;
    std::shared_ptr<E> outgoingEdge;
public:
    const std::shared_ptr<E> getIncomingEdge() const {
        return incomingEdge;
    }

    void setIncomingEdge(const std::shared_ptr<E> &incomingEdge) {
        Node::incomingEdge = incomingEdge;
    }

    const std::shared_ptr<E> getOutgoingEdge() const {
        return outgoingEdge;
    }

    void setOutgoingEdge(const std::shared_ptr<E> &outgoingEdge) {
        Node::outgoingEdge = outgoingEdge;
    }
};


#endif //SLOVENC_NODE_H
