//
// Created by andraz on 24/04/2020.
//

#ifndef SLOVENC_LINKERMANAGERJOB_H
#define SLOVENC_LINKERMANAGERJOB_H


#include <async/Job.h>
#include <model/symbols/main/FileSymbol.h>
#include <project/Project.h>

class LinkerManagerJob: public Job {
private:
    std::vector<std::shared_ptr<FileSymbol>> files;
    std::shared_ptr<Project> project;
    std::map<std::shared_ptr<FileSymbol>, bool> fileResultMap;
    std::shared_ptr<LinkerManagerJob> self;

public:
    LinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project);

    void run() override;

    std::vector<std::shared_ptr<Job>> JobDone(std::shared_ptr<FileSymbol> fileSymbol);

    std::vector<std::shared_ptr<Job>> onComplete() override;

    const std::shared_ptr<LinkerManagerJob> &getSelf() const;

    void setSelf(const std::shared_ptr<LinkerManagerJob> &self);
};


#endif //SLOVENC_LINKERMANAGERJOB_H
