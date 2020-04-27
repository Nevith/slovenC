//
// Created by andraz on 24/04/2020.
//

#include <graph/dataflow/builder/linker/DfgStageOneBuilder.h>
#include "LinkerJob.h"

LinkerJob::LinkerJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol,
                     std::shared_ptr<LinkerManagerJob> managerJob)
        : project(project), fileSymbol(fileSymbol), managerJob(managerJob) {}

void LinkerJob::run() {
    // Commence linking
    DfgStageOneBuilder builderOne = DfgStageOneBuilder();
    builderOne.visit(fileSymbol);

    // Build CFG

    // Build DFG
}

std::vector<std::shared_ptr<Job>> LinkerJob::onComplete() {
    return managerJob->JobDone(fileSymbol);
}