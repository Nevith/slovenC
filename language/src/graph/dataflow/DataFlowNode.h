//
// Created by andraz on 12/05/2020.
//

#ifndef SLOVENC_DATAFLOWNODE_H
#define SLOVENC_DATAFLOWNODE_H

#include <graph/base/Node.h>
#include <model/Visitable.h>
#include <graph/type/TypeEdge.h>
#include "DataFlowEdge.h"
#include <utils/TypeUtils.h>
#include "model/Model.h"


class DataFlowNode: public Node<DataFlowEdge> {
    const std::shared_ptr<Visitable> visitable;
    std::shared_ptr<DataFlowEdge> symbolEdge;
public:
    DataFlowNode(std::shared_ptr<Visitable> visitable);

    void addIncomingEdge(const std::shared_ptr<DataFlowEdge> &incomingEdge) override;

    const std::shared_ptr<Visitable> &getVisitable() const;

    const std::shared_ptr<DataFlowEdge> &getSymbolEdge() const;

    std::string getString() override;

    std::string getNodeTypeString() override;
};


#endif //SLOVENC_DATAFLOWNODE_H
