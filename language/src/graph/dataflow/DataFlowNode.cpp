//
// Created by andraz on 24/04/2020.
//

#include "DataFlowNode.h"

DataFlowNode::DataFlowNode(std::shared_ptr<Visitable> visitable): visitable(visitable) {

}

const std::shared_ptr<Visitable> DataFlowNode::getVisitable() const {
    return visitable;
}
