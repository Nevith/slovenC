//
// Created by andraz on 29/04/2020.
//

#include "BuilderManagerJob.h"


BuilderManagerJob::BuilderManagerJob(std::vector<std::shared_ptr<FileSymbol>> files,
                                     std::shared_ptr<Project> project) :
        ManagerJob(files), project(project) {
}

std::vector<std::shared_ptr<Job>> BuilderManagerJob::onComplete() {
    std::vector<std::shared_ptr<Job>> fileJobs;
    for (auto file : files) {
        fileJobs.push_back(
                std::make_shared<BuilderJob>(project, file, getSelf());
    }
    return fileJobs;
}

std::vector<std::shared_ptr<Job>> BuilderManagerJob::JobDone(std::shared_ptr<FileSymbol> fileSymbol) {
    fileResultMap[fileSymbol] = true;
    for (auto file : files) {
        if (!fileResultMap[file]) {
            return std::vector<std::shared_ptr<Job>>();
        }
    }
    setSelf(nullptr);

    auto result = std::vector<std::shared_ptr<Job>>();
    result.push_back(std::make_shared<LinkerManagerJob>(files, project));
    return result;
}