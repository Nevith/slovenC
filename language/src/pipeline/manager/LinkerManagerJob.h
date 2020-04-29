//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_LINKERMANAGERJOB_H
#define SLOVENC_LINKERMANAGERJOB_H


#include <async/Job.h>
#include <model/symbols/main/FileSymbol.h>
#include <project/Project.h>
#include "ManagerJob.h"

class LinkerManagerJob: public ManagerJob {
private:
    std::vector<std::shared_ptr<FileSymbol>> files;
    std::shared_ptr<Project> project;
    std::map<std::shared_ptr<FileSymbol>, bool> fileResultMap;
    std::shared_ptr<LinkerManagerJob> self;

public:
    LinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project);

    std::vector<std::shared_ptr<Job>> JobDone(std::shared_ptr<FileSymbol> fileSymbol) override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_LINKERMANAGERJOB_H
