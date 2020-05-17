//
// Created by andraz on 15/05/2020.
//

#ifndef SLOVENC_SYMBOLLINKERJOB_H
#define SLOVENC_SYMBOLLINKERJOB_H


#include <async/Job.h>
#include <project/Project.h>
#include <pipeline/manager/ManagerJob.h>
#include <graph/dataflow/DataFlowGraph.h>
#include <graph/dataflow/linker/SymbolLinker.h>

class SymbolLinkerJob: public Job {
    std::shared_ptr<Project> project;
    std::shared_ptr<FileSymbol> fileSymbol;
    std::shared_ptr<ManagerJob<DataFlowGraph>> managerJob;
    std::shared_ptr<DataFlowGraph> graph;
public:
    SymbolLinkerJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol, std::shared_ptr<ManagerJob<DataFlowGraph>> manager);

    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_SYMBOLLINKERJOB_H
