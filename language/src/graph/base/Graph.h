//
// Created by Andraz on 18/03/2020.
//

#ifndef SLOVENC_GRAPH_H
#define SLOVENC_GRAPH_H


#include <type_traits>
#include <map>
#include <future>
#include "GraphOrNode.h"
#include "Node.h"
#include "Edge.h"

template<class V, class E, typename std::enable_if<std::is_base_of<Node<E>, V>::value>::type * = nullptr, typename
std::enable_if<std::is_base_of<Edge<V>, E>::value>::type * = nullptr>
class Graph : public GraphOrNode {
public:
    virtual void addNode(std::shared_ptr<V> node) = 0;
};

#endif //SLOVENC_GRAPH_H
