//
// Created by andraz on 24/04/2020.
//

#include "LinkerManagerJob.h"
#include "pipeline/single/LinkerJob.h"

LinkerManagerJob::LinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project) :
        ManagerJob(files), project(project) {
}

std::vector<std::shared_ptr<Job>> LinkerManagerJob::onComplete() {
   std::vector<std::shared_ptr<Job>> linkerJobs;
    for (auto file : files) {
        linkerJobs.push_back(std::make_shared<LinkerJob>(project, file, getSelf()));
    }
    return linkerJobs;
}

std::vector<std::shared_ptr<Job>> LinkerManagerJob::JobDone(std::shared_ptr<FileSymbol> fileSymbol) {
    fileResultMap[fileSymbol] = true;
    for (auto file : files) {
        if (!fileResultMap[file]) {
            return std::vector<std::shared_ptr<Job>>();
        }
    }
    setSelf(nullptr); // Mem leak cleanup

    // TODO - Merge file DFGs into ProjectWide DFG

    return std::vector<std::shared_ptr<Job>>(); // TODO - create diagnostic tool jobs
}