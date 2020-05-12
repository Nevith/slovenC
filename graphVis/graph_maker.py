import random
import igraph


def count_incoming_edges(i: int, edges):
    count = 0
    for edge in edges:
        if i == edge["start"]:
            count -= 1

    return count


def create_random_colors(elements: list):
    color_dict = dict()
    for element in elements:
        color_dict[element["type"]] = (random.random(), random.random(), random.random())

    return color_dict


def create_visual_style(data: dict):
    visual_style = dict()
    visual_style["edge_arrow_size"] = 100
    visual_style["edge_arrow_width"] = 100
    visual_style["edge_curved"] = 0
    visual_style["vertex_size"] = 50
    visual_style["vertex_label_dist"] = 1.2
    color_dict_vertices = create_random_colors(data["vertices"])
    color_dict_edges = create_random_colors(data["edges"])

    visual_style["vertex_color"] = [color_dict_vertices[vertex["type"]] for vertex in data["vertices"]]
    visual_style["edge_color"] = [color_dict_edges[edge["type"]] for edge in data["edges"]]
    return visual_style


def draw_graph(data: dict):
    graph = igraph.Graph()
    layout = igraph.Layout([])

    vertex_count = dict()
    for i in range(0, len(data["edges"])):
        vertex_count[-i] = 0

    i = 0
    for vertex in data["vertices"]:
        graph.add_vertex(vertex["name"])
        count = count_incoming_edges(i, data["edges"])
        vertex_count[count] += 1
        layout.append((vertex_count[count] * 10, count))
        i += 1

    i = 0
    for edge in data["edges"]:
        graph.add_edge(edge["start"], edge["end"])
        graph.es[i]["type"] = edge["type"]
        i += 1

    graph.vs["label"] = graph.vs["name"]

    igraph.plot(graph, layout=layout, bbox=(2000, 2000), margin=100, **create_visual_style(data))