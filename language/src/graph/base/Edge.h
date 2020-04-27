//
// Created by Andraz on 18/03/2020.
//

#ifndef SLOVENC_EDGE_H
#define SLOVENC_EDGE_H

#include <memory>

template<class V>
class Edge {
private:
    std::shared_ptr<V> startingVertex;
    std::shared_ptr<V> endingVertex;

public:
    const std::shared_ptr<V> getStartingVertex() const {
        return startingVertex;
    }

    void setStartingVertex(const std::shared_ptr<V> &startingVertex) {
        Edge::startingVertex = startingVertex;
    }

    const std::shared_ptr<V> getEndingVertex() const {
        return endingVertex;
    }

    void setEndingVertex(const std::shared_ptr<V> &endingVertex) {
        Edge::endingVertex = endingVertex;
    }
};


#endif //SLOVENC_EDGE_H
