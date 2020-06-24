import argparse
import time
import json

import sys
import os
import subprocess

from os import listdir
from sys import platform

from src.data_analysis import *
from src.graph_maker import *

serializer_name = "invalid os!"
if platform == "linux" or platform == "linux2":
    serializer_name = "serializer"
elif platform == "win32":
    serializer_name = "serializer.exe"

parser = argparse.ArgumentParser(description='Run SlovenC serializer and display the built graphs')
parser.add_argument('--input', metavar='-i', type=str, required=False,
                    help='Path to the root project directory', default=os.path.join("..", "test"))
parser.add_argument('--serializer', metavar='-s', type=str, required=False,
                    help='Path to the slovenC serializer.exe',
                    default=os.path.join("..", "language", "cmake-build-debug", serializer_name))


def main():
    args = parser.parse_args()

    project_path = args.input
    serializer_path = args.serializer
    output_path = os.path.join("data", time.strftime("%Y%m%d-%H%M%S"))
    if not os.path.exists('data'):
        os.makedirs('data')
    if not os.path.exists(output_path):
        os.makedirs(output_path)

    command = serializer_path + " " + project_path + " " + output_path
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE)
    process.wait()

    files = [f for f in listdir(output_path) if os.path.isfile(os.path.join(output_path, f))]

    for file in files:
        if ".graph" in file:
            with open(os.path.join(output_path, file), "r") as read_file:
                print("Started Reading %s..." % file)
                data = json.load(read_file)
                print("Done reading file: ")
                print(data)
                print("Drawing Graph...")

                analyze_data(data)
                draw_graph(data)

    return 0


if __name__ == '__main__':
    sys.exit(main())
