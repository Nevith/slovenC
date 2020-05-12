def compare_elements(elem_one: dict, elem_two: dict):
    for key in elem_one.keys():
        if elem_one[key] != elem_two[key]:
            return False

    return True


def check_duplicate_edges(data: dict):
    edges = data["edges"]
    duplicates = []
    for i in range(0, len(edges) - 1):
        elem_one = edges[i]
        for j in range(i+1, len(edges)):
            if i == j:
                continue
            elem_two = edges[j]
            if elem_one == elem_two:
                if elem_two not in duplicates:
                    duplicates.append(elem_one)
    print("%d duplicate edges from %d edges\nDuplicates: " % (len(duplicates), len(edges)))
    print(duplicates)


def analyze_data(data: dict):
    check_duplicate_edges(data)