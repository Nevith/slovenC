import json

import sys

from data_analysis import *
from graph_maker import *

file_path = "fff.txt"


def main():
    with open(file_path, "r") as read_file:
        print("Started Reading %s...".format(file_path))
        data = json.load(read_file)
        print("Done reading file: ")
        print(data)
        print("Drawing Graph...")

        analyze_data(data)
        draw_graph(data)

    return 0


if __name__ == '__main__':
    sys.exit(main())
