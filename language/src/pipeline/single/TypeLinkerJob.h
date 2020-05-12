//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_TYPELINKERJOB_H
#define SLOVENC_TYPELINKERJOB_H


#include <async/Job.h>
#include <project/Project.h>
#include "pipeline/manager/ManagerJob.h"
#include <graph/type/linker/TypeLinker.h>


class TypeLinkerJob : public Job {
    std::shared_ptr<Project> project;
    std::shared_ptr<FileSymbol> fileSymbol;
    std::shared_ptr<ManagerJob<TypeGraph>> managerJob;
    std::shared_ptr<TypeGraph> graph;
public:
    TypeLinkerJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol, std::shared_ptr<ManagerJob<TypeGraph>> manager);

    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;

};


#endif //SLOVENC_TYPELINKERJOB_H
