//
// Created by andraz on 24/04/2020.
//

#include "LinkerManagerJob.h"
#include "FileSymbolJob.h"

LinkerManagerJob::LinkerManagerJob(std::vector<std::shared_ptr<FileSymbol>> files, std::shared_ptr<Project> project) :
        files(files), project(project) {
}

void LinkerManagerJob::run() {
    for (auto file : files) {
        fileResultMap[file] = false;
    }
}

std::vector<std::shared_ptr<Job>> LinkerManagerJob::onComplete() {
    std::vector<std::shared_ptr<Job>> fileJobs;
    for (auto file : files) {
        fileJobs.push_back(std::make_shared<FileSymbolJob>(project, file, self));
    }
    return fileJobs;
}

std::vector<std::shared_ptr<Job>> LinkerManagerJob::JobDone(std::shared_ptr<FileSymbol> fileSymbol) {
    fileResultMap[fileSymbol] = true;
    for (auto file : files) {
        if (!fileResultMap[file]) {
            return std::vector<std::shared_ptr<Job>>();
        }
    }
    self = nullptr; // Mem leak cleanup

    // TODO - Merge file DFGs into ProjectWide DFG

    return std::vector<std::shared_ptr<Job>>(); // TODO - create diagnostic tool jobs
}

const std::shared_ptr<LinkerManagerJob> &LinkerManagerJob::getSelf() const {
    return self;
}

void LinkerManagerJob::setSelf(const std::shared_ptr<LinkerManagerJob> &self) {
    LinkerManagerJob::self = self;
}
