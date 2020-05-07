//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_TYPEGRAPH_H
#define SLOVENC_TYPEGRAPH_H


#include <graph/base/Graph.h>
#include "TypeNode.h"
#include "TypeEdge.h"

class TypeGraph: public Graph<TypeNode, TypeEdge> {
private:
    std::map<std::shared_ptr<Visitable>, std::shared_ptr<TypeNode>> vertexMap;
public:
    void addNode(std::shared_ptr<TypeNode> node) override;

    std::shared_ptr<TypeNode> getNode(std::shared_ptr<Visitable> key);

    void addEdge(std::shared_ptr<TypeNode> first, std::shared_ptr<TypeNode> second,
                 std::shared_ptr<TypeEdge> edge) override;

    const std::map<std::shared_ptr<Visitable>, std::shared_ptr<TypeNode>> &getVertexMap() const;

    const std::vector<std::shared_ptr<TypeNode>> getVertices() override;
};


#endif //SLOVENC_TYPEGRAPH_H
