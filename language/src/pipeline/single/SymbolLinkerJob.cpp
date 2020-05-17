//
// Created by andraz on 15/05/2020.
//

#include "SymbolLinkerJob.h"

SymbolLinkerJob::SymbolLinkerJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol,
                                 std::shared_ptr<ManagerJob<DataFlowGraph>> manager):
                                 project(project), fileSymbol(fileSymbol), managerJob(manager){

}

void SymbolLinkerJob::run() {
    SymbolLinker symbolLinker(project, fileSymbol);

}

std::vector<std::shared_ptr<Job>> SymbolLinkerJob::onComplete() {
    return managerJob->JobDone(fileSymbol, graph);
}
