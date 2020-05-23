# slovenC graph visualisation using python3
### A set of *tools* or *a tool* I wrote to make debugging and showcasing easier.

#### Dependencies:
* [igraph](https://igraph.org/python/) `pip install python-igraph`
* [plotly](https://plotly.com/)  `pip install plotly`
* [numpy](https://numpy.org/) `pip install numpy`

---
##### Help
```
python main.py -h
usage: main.py [-h] [--input -i] [--serializer -s]

Run SlovenC serializer and display the built graphs.

optional arguments:
  -h, --help       show this help message and exit
  --input -i       Path to the root project directory
  --serializer -s  Path to the slovenC serializer.exe
```
##### To run simply build the c++ project using cmake and make before running this tool. Provide the paths to the built serializer.exe and to a slovenC project root.
##### If called without arguments it will look for the serializer.exe in the cmake-build-debug directory of the c++ project and in the *test* directory in the root of this repo for the slovenC project.

---
### Example DataFlowGraph
![Example DataFlowGraph](example1.png)
### Example TypeGraph
![Example TypeGraph](example2.png)
---
