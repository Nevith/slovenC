//
// Created by andraz on 12/05/2020.
//

#include "DataFlowEdge.h"

DataFlowEdge::DataFlowEdge(bool isUsage) {
    isUsageEdge = isUsage;
}

bool DataFlowEdge::isUsage() const {
    return isUsageEdge;
}

bool DataFlowEdge::isFlow() const {
    return !isUsage();
}

std::string DataFlowEdge::getEdgeTypeString() {
    if (isUsage()) {
        return "usage";
    } else {
        return "flow";
    }
}
