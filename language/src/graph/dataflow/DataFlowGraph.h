//
// Created by andraz on 12/05/2020.
//

#ifndef SLOVENC_DATAFLOWGRAPH_H
#define SLOVENC_DATAFLOWGRAPH_H


#include "DataFlowNode.h"
#include "DataFlowEdge.h"
#include "graph/base/Graph.h"
#include "model/Model.h"

class DataFlowGraph: public Graph<DataFlowNode, DataFlowEdge> {
private:
    std::map<std::shared_ptr<Visitable>, std::shared_ptr<DataFlowNode>> vertexMap;
public:
    const std::shared_ptr<DataFlowNode> getNode(std::shared_ptr<Visitable> visitable);

    void addNode(std::shared_ptr<DataFlowNode> node) override;

    void addEdge(std::shared_ptr<DataFlowNode> first, std::shared_ptr<DataFlowNode> second,
                 std::shared_ptr<DataFlowEdge> edge) override;

    const std::vector<std::shared_ptr<DataFlowNode>> getVertices() override;

    const std::map<std::shared_ptr<Visitable>, std::shared_ptr<DataFlowNode>> &getVertexMap() const;
};


#endif //SLOVENC_DATAFLOWGRAPH_H
