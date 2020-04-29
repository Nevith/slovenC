//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_DATAFLOWGRAPH_H
#define SLOVENC_DATAFLOWGRAPH_H


#include <graph/base/Graph.h>
#include "DataFlowNode.h"
#include "DataFlowEdge.h"

class DataFlowGraph: public Graph<DataFlowNode, DataFlowEdge> {
private:
    std::map<std::shared_ptr<Visitable>, std::shared_ptr<DataFlowNode>> vertexMap;
public:
    void addNode(std::shared_ptr<DataFlowNode> node) override;

    std::shared_ptr<DataFlowNode> getNode(std::shared_ptr<Visitable> key);

    void addEdge(std::shared_ptr<DataFlowNode> first, std::shared_ptr<DataFlowNode> second,
                 std::shared_ptr<DataFlowEdge> edge) override;
};


#endif //SLOVENC_DATAFLOWGRAPH_H
