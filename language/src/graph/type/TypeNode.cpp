//
// Created by andraz on 24/04/2020.
//

#include "TypeNode.h"

TypeNode::TypeNode(std::shared_ptr<Visitable> visitable): visitable(visitable) {

}

const std::shared_ptr<Visitable> TypeNode::getVisitable() const {
    return visitable;
}

const std::shared_ptr<TypeEdge> &TypeNode::getUsageEdge() const {
    return usageEdge;
}

void TypeNode::addIncomingEdge(const std::shared_ptr<TypeEdge> &incomingEdge) {
    Node::addIncomingEdge(incomingEdge);
    if (incomingEdge->isUsage()) {
        usageEdge = incomingEdge;
    }
}

std::string TypeNode::getString() {
    auto fileSymbol = TypeUtils::cast<FileSymbol>(visitable);
    if (fileSymbol) {
        return fileSymbol->getRelativePath();
    }
    return visitable->getContext()->getText();
}
