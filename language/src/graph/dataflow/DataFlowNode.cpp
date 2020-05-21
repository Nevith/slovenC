//
// Created by andraz on 12/05/2020.
//

#include "DataFlowNode.h"

DataFlowNode::DataFlowNode(std::shared_ptr<Visitable> visitablef): visitable(visitablef) {

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
    auto context = visitable->getContext();
    return context.getText();
}

std::string DataFlowNode::getNodeTypeString() {
    auto methodSymbol = TypeUtils::cast<MethodSymbol>(visitable);
    if (methodSymbol) {
        return "MethodSymbol";
    }
    auto localVariableSymbol = TypeUtils::cast<LocalVariableSymbol>(visitable);
    if (localVariableSymbol) {
        return "LocalVariableSymbol";
    }
    auto fieldSymbol = TypeUtils::cast<FieldSymbol>(visitable);
    if (fieldSymbol) {
        return "FieldSymbol";
    }
    auto parameterSymbol = TypeUtils::cast<ParameterSymbol>(visitable);
    if (parameterSymbol) {
        return "ParameterSymbol";
    }
    auto expression = TypeUtils::cast<Expression>(visitable);
    if (expression) {
        return "Expression";
    }
    return "Other";
}

const std::shared_ptr<Visitable> &DataFlowNode::getVisitable() const {
    return visitable;
}

const std::shared_ptr<DataFlowEdge> &DataFlowNode::getSymbolEdge() const {
    return symbolEdge;
}
