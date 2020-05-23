//
// Created by andraz on 07/05/2020.
//

#ifndef SLOVENC_SERIALIZER_H
#define SLOVENC_SERIALIZER_H

#include <graph/base/Graph.h>
#include <iostream>
#include <fstream>

template<class V, class E, typename std::enable_if<std::is_base_of<Node<E>, V>::value>::type * = nullptr, typename
std::enable_if<std::is_base_of<Edge<V>, E>::value>::type * = nullptr>
class Serializer {
private:
    std::shared_ptr<Graph<V, E>> graph;
    std::filesystem::path absolutePath;

    std::vector<std::shared_ptr<Node<E>>> vertices;
    std::vector<std::shared_ptr<Edge<V>>> edges;

    int find(std::shared_ptr<V> vertex) {
        auto it = std::find(vertices.begin(), vertices.end(), vertex);
        if (it == vertices.end()) {
            return -1;
        } else {
            return std::distance(vertices.begin(), it);
        }
    }

public:

    Serializer(const std::filesystem::path &absolutePath, std::shared_ptr<Graph<V, E>> graph) : absolutePath(absolutePath),
                                                                                      graph(graph) {
        for (std::shared_ptr<Node<E>> vertex : graph->getVertices()) {
            vertices.push_back(vertex);
            for (auto edge : vertex->getIncomingEdges()) {
                edges.push_back(edge);
            }
        }
    };

    std::string getJSON() {
        std::string json = "{ \"vertices\" :[";
        int i = 0;
        for (std::shared_ptr<Node<E>> vertex : vertices) {
            json += "{\"type\":\"" + vertex->getNodeTypeString() + "\", \"name\":\"" + vertex->getString() + "\"}";
            i++;
            if (i < vertices.size()) {
                json += ",";
            }
        }
        json += "], \"edges\":[";

        i = 0;
        for (std::shared_ptr<Edge<V>> edge : edges) {
            json += "{\"type\": \"" + edge->getEdgeTypeString() + "\", \"start\":" +
                    std::to_string(find(edge->getStartingVertex())) + ", \"end\": " +
                    std::to_string(find(edge->getEndingVertex())) + "}";
            i++;
            if (i < edges.size()) {
                json += ",";
            }
        }

        json += "]}";
        return json;
    };

    void serialize() {
        std::ofstream file;
        file.open(absolutePath);
        file << getJSON();
        file.close();
    }
};


#endif //SLOVENC_SERIALIZER_H
