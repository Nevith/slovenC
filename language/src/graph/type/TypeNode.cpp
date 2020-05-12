//
// Created by andraz on 24/04/2020.
//

#include "TypeNode.h"

TypeNode::TypeNode(std::shared_ptr<Visitable> visitable) : visitable(visitable) {

}

const std::shared_ptr<Visitable> TypeNode::getVisitable() const {
    return visitable;
}

const std::shared_ptr<TypeEdge> &TypeNode::getSymbolEdge() const {
    return symbolEdge;
}

void TypeNode::addIncomingEdge(const std::shared_ptr<TypeEdge> &incomingEdge) {
    Node::addIncomingEdge(incomingEdge);
    if (incomingEdge->isUsage()) {
        symbolEdge = incomingEdge;
    }
}

std::string TypeNode::getString() {
    auto fullyQualifiedSymbol = TypeUtils::cast<FullyQualifiedSymbol>(visitable);
    if (fullyQualifiedSymbol) {
        return fullyQualifiedSymbol->getFullyQualifiedName();
    }
    return visitable->getContext().getText();
}

std::string TypeNode::getNodeTypeString() {
    auto symbol = TypeUtils::cast<Symbol>(visitable);
    if (symbol) {
        return "symbol";
    } else {
        return "expression";
    }
}
