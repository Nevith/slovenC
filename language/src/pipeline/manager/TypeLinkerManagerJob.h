//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_TYPELINKERMANAGERJOB_H
#define SLOVENC_TYPELINKERMANAGERJOB_H



#include <project/Project.h>
#include "ManagerJob.h"
#include "pipeline/single/TypeLinkerJob.h"
#include <graph/type/TypeGraph.h>

class TypeLinkerManagerJob : public ManagerJob<TypeGraph> {
private:
    std::shared_ptr<Project> project;

    std::shared_ptr<TypeGraph> globalTypeGraph;

    void merge(std::shared_ptr<TypeGraph> localTypeGraph);

public:
    TypeLinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project);

    std::vector<std::shared_ptr<Job>> jobsFinished() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_TYPELINKERMANAGERJOB_H
