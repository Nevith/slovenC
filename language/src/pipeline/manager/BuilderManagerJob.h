//
// Created by andraz on 29/04/2020.
//

#ifndef SLOVENC_BUILDERMANAGERJOB_H
#define SLOVENC_BUILDERMANAGERJOB_H


#include <async/Job.h>
#include <model/symbols/main/FileSymbol.h>
#include <project/Project.h>
#include "pipeline/single/BuilderJob.h"
#include "ManagerJob.h"


class BuilderManagerJob: public ManagerJob {
private:
    std::shared_ptr<Project> project;

public:
    BuilderManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project);

    std::vector<std::shared_ptr<Job>> onComplete() override;

    std::vector<std::shared_ptr<Job>> JobDone(std::shared_ptr<FileSymbol> fileSymbol) override;
};


#endif //SLOVENC_BUILDERMANAGERJOB_H
