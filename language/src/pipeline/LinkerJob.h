//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_LINKERJOB_H
#define SLOVENC_LINKERJOB_H


#include <async/Job.h>
#include <project/Project.h>
#include "LinkerManagerJob.h"

class LinkerJob : public Job {
    std::shared_ptr<Project> project;
    std::shared_ptr<FileSymbol> fileSymbol;
    std::shared_ptr<LinkerManagerJob> managerJob;
public:
    LinkerJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol, std::shared_ptr<LinkerManagerJob> manager);

    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;

};


#endif //SLOVENC_LINKERJOB_H
