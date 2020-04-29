//
// Created by andraz on 29/04/2020.
//

#include "ManagerJob.h"

ManagerJob::ManagerJob(std::vector<std::shared_ptr<FileSymbol>> files) : files(files) {

}

const std::shared_ptr<ManagerJob> &ManagerJob::getSelf() const {
    return self;
}

void ManagerJob::setSelf(const std::shared_ptr<ManagerJob> &self) {
    ManagerJob::self = self;
}

void ManagerJob::run() {
    for (auto file : files) {
        fileResultMap[file] = false;
    }
}
