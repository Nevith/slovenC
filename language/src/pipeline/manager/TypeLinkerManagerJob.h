//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_TYPELINKERMANAGERJOB_H
#define SLOVENC_TYPELINKERMANAGERJOB_H


#include <async/Job.h>
#include <model/symbols/main/FileSymbol.h>
#include <project/Project.h>
#include "ManagerJob.h"

class TypeLinkerManagerJob: public ManagerJob {
private:
    std::shared_ptr<Project> project;

    std::shared_ptr<TypeGraph> globalTypeGraph;

    void merge(std::shared_ptr<TypeGraph> localTypeGraph);

public:
    TypeLinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project);

    std::vector<std::shared_ptr<Job>> JobDone(std::shared_ptr<FileSymbol> fileSymbol) override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_TYPELINKERMANAGERJOB_H
