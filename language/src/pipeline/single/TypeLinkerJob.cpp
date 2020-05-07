//
// Created by andraz on 24/04/2020.
//

#include <graph/type/linker/InheritanceLinker.h>
#include "TypeLinkerJob.h"

TypeLinkerJob::TypeLinkerJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol,
                             std::shared_ptr<ManagerJob> managerJob)
        : project(project), fileSymbol(fileSymbol), managerJob(managerJob) {}

void TypeLinkerJob::run() {
    // Commence linking
    TypeLinker typeLinker(project, fileSymbol);
    auto graph = typeLinker.link();
    InheritanceLinker inheritanceLinker(graph, project, fileSymbol);
    inheritanceLinker.link();
    fileSymbol->setLocalTypeGraph(graph);
}

std::vector<std::shared_ptr<Job>> TypeLinkerJob::onComplete() {
    return managerJob->JobDone(fileSymbol);
}