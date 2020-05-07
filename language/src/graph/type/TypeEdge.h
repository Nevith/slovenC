//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_TYPEEDGE_H
#define SLOVENC_TYPEEDGE_H


#include <graph/base/Edge.h>
#include <string>

class TypeNode;
class TypeEdge: public Edge<TypeNode> {
private:
    bool isUsageEdge;

public:
    TypeEdge(bool isUsage);

    bool isUsage() const;
    bool isInheritance() const;

    std::string getEdgeTypeString() override;
};


#endif //SLOVENC_TYPEEDGE_H
