//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_DATAFLOWNODE_H
#define SLOVENC_DATAFLOWNODE_H


#include <graph/base/Node.h>
#include <model/Visitable.h>
#include "DataFlowEdge.h"

class DataFlowNode: public Node<DataFlowEdge> {
private:
    const std::shared_ptr<Visitable> visitable;

public:
    DataFlowNode(std::shared_ptr<Visitable> visitable);

    const std::shared_ptr<Visitable> getVisitable() const;
};


#endif //SLOVENC_DATAFLOWNODE_H
