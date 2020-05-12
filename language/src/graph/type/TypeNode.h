//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_TYPENODE_H
#define SLOVENC_TYPENODE_H


#include <graph/base/Node.h>
#include <utils/TypeUtils.h>
#include "model/Model.h"
#include "TypeEdge.h"

class TypeNode: public Node<TypeEdge> {
private:
    const std::shared_ptr<Visitable> visitable;
    std::shared_ptr<TypeEdge> symbolEdge;

public:
    TypeNode(std::shared_ptr<Visitable> visitable);

    const std::shared_ptr<Visitable> getVisitable() const;

    const std::shared_ptr<TypeEdge> &getSymbolEdge() const;

    void addIncomingEdge(const std::shared_ptr<TypeEdge> &incomingEdge) override;

    std::string getString() override;

    std::string getNodeTypeString() override;
};


#endif //SLOVENC_TYPENODE_H
