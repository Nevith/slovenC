import random
import igraph
import plotly.graph_objects as go


def create_graph(data: dict):
    edges = []

    for edge in data["edges"]:
        edges.append((edge["start"], edge["end"]))

    graph = igraph.Graph(edges=edges, directed=True)
    return graph


def prep_scatters(v_types: list, e_types: list):
    vertex_scatters = dict()
    edge_scatters = dict()

    for result, types in [(vertex_scatters, v_types), (edge_scatters, e_types)]:
        for label in types:
            if label not in result.keys():
                new_value = dict()
                new_value["color"] = (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))
                new_value["name"] = label
                new_value["x"] = []
                new_value["y"] = []
                new_value["label"] = []
                result[label] = new_value

    return vertex_scatters, edge_scatters


def prep_positions(graph, layout, nr_vertices):
    position = {k: layout[k] for k in range(nr_vertices)}
    Y = [layout[k][1] for k in range(nr_vertices)]
    M = max(Y)
    E = [e.tuple for e in graph.es]  # list of edges

    L = len(position)
    Xn = [position[k][0] for k in range(L)]
    Yn = [2 * M - position[k][1] for k in range(L)]
    Xe = []
    Ye = []
    for edge in E:
        Xe += [position[edge[0]][0], position[edge[1]][0], None]
        Ye += [2 * M - position[edge[0]][1], 2 * M - position[edge[1]][1], None]

    return (Xn, Yn), (Xe, Ye)


def draw_graph(data: dict):
    graph = create_graph(data)
    vertex_scatters, edge_scatter = prep_scatters([vertex["type"] for vertex in data["vertices"]],
                                                  [edge["type"] for edge in data["edges"]])
    vertex_coordinates, edge_coordinates = prep_positions(graph, graph.layout("rt"), len(data["vertices"]))

    vertices = data["vertices"]
    for i in range(0, len(vertices)):
        vertex = vertices[i]
        scatter = vertex_scatters[vertex["type"]]
        scatter["x"].append(vertex_coordinates[0][i])
        scatter["y"].append(vertex_coordinates[1][i])
        scatter["label"].append(vertex["name"])

    edges = data["edges"]
    for i in range(0, len(edges)):
        edge = edges[i]
        scatter = edge_scatter[edge["type"]]
        scatter["x"].append(edge_coordinates[0][i * 3])
        scatter["x"].append(edge_coordinates[0][i * 3 + 1])
        scatter["x"].append(edge_coordinates[0][i * 3 + 2])
        scatter["y"].append(edge_coordinates[1][i * 3])
        scatter["y"].append(edge_coordinates[1][i * 3 + 1])
        scatter["y"].append(edge_coordinates[1][i * 3 + 2])
        scatter["label"].append(edge["type"])

    fig = go.Figure(
        layout=go.Layout(
            showlegend=True,
            hovermode='closest',
            xaxis=dict(showgrid=False, zeroline=False, showticklabels=False),
            yaxis=dict(showgrid=False, zeroline=False, showticklabels=False))
    )

    for key, value in vertex_scatters.items():
        fig.add_trace(go.Scatter(
            x=value["x"],
            y=value["y"],
            mode="markers",
            text=value["label"],
            hoverinfo="text",
            name=value["name"],
            marker=dict(symbol='circle-dot',
                        size=18,
                        color="rgb(%d,%d,%d)" % value["color"],
                        line=dict(color='rgb(50,50,50)', width=1)
                        )
        )
        )

    for key, value in edge_scatter.items():
        fig.add_trace(go.Scatter(
            x=value["x"],
            y=value["y"],
            mode="lines",
            text=value["label"],
            hoverinfo="text",
            name=value["name"],
            line=dict(color="rgb(%d,%d,%d)" % value["color"], width=1),
        )
        )

    # Note: if you don't use fixed ratio axes, the arrows won't be symmetrical
    fig.add_annotation()

    fig.show()
