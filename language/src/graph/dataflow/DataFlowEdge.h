//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_DATAFLOWEDGE_H
#define SLOVENC_DATAFLOWEDGE_H


#include <graph/base/Edge.h>

class DataFlowNode;
class DataFlowEdge: public Edge<DataFlowNode> {
private:
    bool isUsageEdge;

public:
    DataFlowEdge(bool isUsage);

    bool isUsage() const;
    bool isDependency() const;
};


#endif //SLOVENC_DATAFLOWEDGE_H
