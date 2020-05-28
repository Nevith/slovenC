//
// Created by andraz on 24/04/2020.
//

#include <graph/type/linker/InheritanceLinker.h>
#include "TypeLinkerManagerJob.h"
#include "SymbolLinkerManagerJob.h"

TypeLinkerManagerJob::TypeLinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files,
                                           std::shared_ptr<Project> project) :
        ManagerJob(files), project(project) {
    globalTypeGraph = std::make_shared<TypeGraph>();
}

void TypeLinkerManagerJob::merge(std::shared_ptr<TypeGraph> localTypeGraph) {
    for (auto const&[key, val] : localTypeGraph->getVertexMap()) {
        // Skip empty values
        if (!val) {
            continue;
        }
        auto main = globalTypeGraph->getNode(key);
        if (!main) {
            // Insert
            main = std::make_shared<TypeNode>(key);
            globalTypeGraph->addNode(main);
        }

        for (auto incomingEdge : val->getIncomingEdges()) {
            auto node = globalTypeGraph->getNode(incomingEdge->getStartingVertex()->getVisitable());
            if (!node) {
                node = std::make_shared<TypeNode>(incomingEdge->getStartingVertex()->getVisitable());
                globalTypeGraph->addNode(node);
            }
            globalTypeGraph->addEdge(node, main, incomingEdge);
        }
    }
    if (!files.empty()) {
        InheritanceLinker predefinedClassLinker(globalTypeGraph, project, files.back());
        predefinedClassLinker.visit(PredefinedSymbol::BOOLEAN);
        predefinedClassLinker.visit(PredefinedSymbol::INT);
        predefinedClassLinker.visit(PredefinedSymbol::DOUBLE);
        predefinedClassLinker.visit(PredefinedSymbol::VOID);
        predefinedClassLinker.visit(PredefinedSymbol::STRING);
        predefinedClassLinker.visit(PredefinedSymbol::CONSOLE);
        predefinedClassLinker.visit(PredefinedSymbol::LIST);
    }
}

std::vector<std::shared_ptr<Job>> TypeLinkerManagerJob::onComplete() {
    std::vector<std::shared_ptr<Job>> linkerJobs;
    for (auto file : files) {
        linkerJobs.push_back(std::make_shared<TypeLinkerJob>(project, file, getSelf()));
    }
    return linkerJobs;
}

std::vector<std::shared_ptr<Job>> TypeLinkerManagerJob::jobsFinished() {
    for (auto file : files) {
        merge(fileResultMap[file]);
    }
    project->setTypeGraph(globalTypeGraph);

    std::vector<std::shared_ptr<Job>> nextJobs;
    auto nextJob = std::make_shared<SymbolLinkerManagerJob>(files, project);
    nextJob->setSelf(nextJob);
    nextJobs.push_back(nextJob);

    return nextJobs;
}