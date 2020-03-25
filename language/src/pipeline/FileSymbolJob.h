//
// Created by Andraz on 17/03/2020.
//

#ifndef SLOVENC_FILESYMBOLJOB_H
#define SLOVENC_FILESYMBOLJOB_H


#include <memory>
#include <project/Project.h>
#include <async/Job.h>

class FileSymbolJob : public Job {
public:
    FileSymbolJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol);

private:
    std::shared_ptr<Project> project;
    std::shared_ptr<FileSymbol> fileSymbol;

public:
    void run() override;

    std::vector<std::shared_ptr<Job>> onComplete() override;
};


#endif //SLOVENC_FILESYMBOLJOB_H
