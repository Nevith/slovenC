//
// Created by andraz on 24/04/2020.
//

#include "TypeEdge.h"

TypeEdge::TypeEdge(bool isUsage) : isUsageEdge(isUsage) {
}

bool TypeEdge::isUsage() const {
    return isUsageEdge;
}

bool TypeEdge::isInheritance() const {
    return !isUsageEdge;
}

std::string TypeEdge::getEdgeTypeString() {
    if (isUsageEdge) {
        return "usage";
    } else {
        return "inheritance";
    }
}
