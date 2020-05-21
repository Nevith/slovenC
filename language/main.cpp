#include <iostream>
#include <string>
#include <async/JobManager.h>
#include <pipeline/single/ProjectJob.h>
#include <graph/serializer/Serializer.h>


int main(int, const char **) {
    std::string absolutePath = "E:\\Projects\\Faks\\Diplomska naloga\\slovenC\\test";

    JobManager jobManager;

    auto project = std::make_shared<Project>(absolutePath);
    jobManager.queueJob(std::make_shared<ProjectJob>(project));
    jobManager.wait();
    Serializer<TypeNode, TypeEdge> serializer("E:\\Projects\\Faks\\Diplomska naloga\\slovenC\\graphVis\\fff2.txt", project->getTypeGraph());
    serializer.serialize();
    Serializer<DataFlowNode, DataFlowEdge> serializer2("E:\\Projects\\Faks\\Diplomska naloga\\slovenC\\graphVis\\fff.txt", project->getDataFlowGraph());
    serializer2.serialize();
    return 0;
}
