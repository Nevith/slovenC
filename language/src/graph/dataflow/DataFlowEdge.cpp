//
// Created by andraz on 24/04/2020.
//

#include "DataFlowEdge.h"

DataFlowEdge::DataFlowEdge(bool isUsage) : isUsageEdge(isUsage) {
}

bool DataFlowEdge::isUsage() const {
    return isUsageEdge;
}

bool DataFlowEdge::isDependency() const {
    return !isUsageEdge;
}
