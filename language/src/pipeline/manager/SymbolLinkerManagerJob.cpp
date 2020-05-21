//
// Created by andraz on 15/05/2020.
//

#include "SymbolLinkerManagerJob.h"


void SymbolLinkerManagerJob::merge(std::shared_ptr<DataFlowGraph> localDataFlowGraph) {
    for (auto const&[key, val] : localDataFlowGraph->getVertexMap()) {
        // Skip empty values
        if (!val) {
            continue;
        }
        auto main = globalDataFlowGraph->getNode(key);
        if (!main) {
            // Insert
            main = std::make_shared<DataFlowNode>(key);
            globalDataFlowGraph->addNode(main);
        }

        for (auto incomingEdge : val->getIncomingEdges()) {
            auto node = globalDataFlowGraph->getNode(incomingEdge->getStartingVertex()->getVisitable());
            if (!node) {
                node = std::make_shared<DataFlowNode>(incomingEdge->getStartingVertex()->getVisitable());
                globalDataFlowGraph->addNode(node);
            }
            globalDataFlowGraph->addEdge(node, main, incomingEdge);
        }
    }
}

SymbolLinkerManagerJob::SymbolLinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files,
                                               std::shared_ptr<Project> project) :
        ManagerJob(files), project(project) {
    globalDataFlowGraph = std::make_shared<DataFlowGraph>();
}

std::vector<std::shared_ptr<Job>> SymbolLinkerManagerJob::onComplete() {
    std::vector<std::shared_ptr<Job>> linkerJobs;
    for (auto file : files) {
        linkerJobs.push_back(std::make_shared<SymbolLinkerJob>(project, file, getSelf()));
    }
    return linkerJobs;
}

std::vector<std::shared_ptr<Job>> SymbolLinkerManagerJob::jobsFinished() {
    for (auto file : files) {
        merge(fileResultMap[file]);
    }

    project->setDataFlowGraph(globalDataFlowGraph);

    return std::vector<std::shared_ptr<Job>>(); // TODO - create diagnostic job
}
