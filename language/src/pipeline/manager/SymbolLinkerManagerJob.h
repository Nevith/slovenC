//
// Created by andraz on 15/05/2020.
//

#ifndef SLOVENC_SYMBOLLINKERMANAGERJOB_H
#define SLOVENC_SYMBOLLINKERMANAGERJOB_H


#include <graph/dataflow/DataFlowGraph.h>
#include <project/Project.h>
#include "ManagerJob.h"
#include "graph/dataflow/DataFlowGraph.h"
#include <pipeline/single/SymbolLinkerJob.h>


class SymbolLinkerManagerJob: public ManagerJob<DataFlowGraph>  {
private:
    std::shared_ptr<Project> project;

    std::shared_ptr<DataFlowGraph> globalDataFlowGraph;

    void merge(std::shared_ptr<DataFlowGraph> localDataFlowGraph);

public:
    SymbolLinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project);

    std::vector<std::shared_ptr<Job>> onComplete() override;

    std::vector<std::shared_ptr<Job>> jobsFinished() override;
};


#endif //SLOVENC_SYMBOLLINKERMANAGERJOB_H
