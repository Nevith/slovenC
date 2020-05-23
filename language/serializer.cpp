//
// Created by andraz on 23/05/2020.
//

#include <iostream>
#include <string>
#include <async/JobManager.h>
#include <pipeline/single/ProjectJob.h>
#include <graph/serializer/Serializer.h>

void printHelp(std::string name) {
    std::cout << name << " <first argument> <second argument>" << std::endl;
    std::cout << "<first argument> - absolute path for the root project directory" << std::endl;
    std::cout << "<second argument> - absolute path for the output directory" << std::endl;
}

int main(int argc, const char **argv) {
    if (argc != 3) {
        printHelp(argv[0]);
        return 0;
    }

    std::string inputAbsolutePath;
    std::string outputAbsolutePath;

    std::cout << "Input specified as" << argv[1] << std::endl;
    inputAbsolutePath = argv[1];

    std::cout << "Output specified as" << argv[2] << std::endl;
    outputAbsolutePath = argv[2];

    if (inputAbsolutePath.empty() || outputAbsolutePath.empty()) {
        printHelp(argv[0]);
        return 0;
    }

    JobManager jobManager;
    auto project = std::make_shared<Project>(inputAbsolutePath);
    jobManager.queueJob(std::make_shared<ProjectJob>(project));
    jobManager.wait();

    auto typeGraphOutputPath = std::filesystem::path(outputAbsolutePath);
    auto dataFlowGraphOutputPath = std::filesystem::path(outputAbsolutePath);
    typeGraphOutputPath += std::filesystem::path::preferred_separator;
    dataFlowGraphOutputPath += std::filesystem::path::preferred_separator;
    typeGraphOutputPath += "TypeGraph.graph";
    dataFlowGraphOutputPath += "DataFlowGraph.graph";

    Serializer<TypeNode, TypeEdge> serializer(typeGraphOutputPath, project->getTypeGraph());
    serializer.serialize();
    Serializer<DataFlowNode, DataFlowEdge> serializer2(dataFlowGraphOutputPath, project->getDataFlowGraph());
    serializer2.serialize();
    return 0;
}
