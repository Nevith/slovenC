//
// Created by andraz on 12/05/2020.
//

#include "DataFlowNode.h"

DataFlowNode::DataFlowNode(std::shared_ptr<Visitable> visitable) {

}

void DataFlowNode::addIncomingEdge(const std::shared_ptr<DataFlowEdge> &incomingEdge) {
    Node::addIncomingEdge(incomingEdge);
    if (incomingEdge->isUsage()) {
        symbolEdge = incomingEdge;
    }
}

std::string DataFlowNode::getString() {
    auto fullyQualifiedSymbol = TypeUtils::cast<FullyQualifiedSymbol>(visitable);
    if (fullyQualifiedSymbol) {
        return fullyQualifiedSymbol->getFullyQualifiedName();
    }
    return visitable->getContext().getText();
}

std::string DataFlowNode::getNodeTypeString() {
    auto symbol = TypeUtils::cast<MethodSymbol>(visitable);
    if (symbol) {
        return "MethodSymbol";
    }
    symbol = TypeUtils::cast<LocalVariableSymbol>(visitable);
    if (symbol) {
        return "LocalVariableSymbol";
    }
    symbol = TypeUtils::cast<FieldSymbol>(visitable);
    if (symbol) {
        return "FieldSymbol";
    }
    symbol = TypeUtils::cast<ParameterSymbol>(visitable);
    if (symbol) {
        return "ParameterSymbol";
    }
    symbol = TypeUtils::cast<Expression>(visitable);
    if (symbol) {
        return "Expression";
    }
    return "None";
}

const std::shared_ptr<Visitable> &DataFlowNode::getVisitable() const {
    return visitable;
}

const std::shared_ptr<TypeEdge> &DataFlowNode::getSymbolEdge() const {
    return symbolEdge;
}
