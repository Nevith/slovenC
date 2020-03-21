//
// Created by Andraz on 17/03/2020.
//

#include "FileSymbolJob.h"

#include <utility>
#include <iostream>

FileSymbolJob::FileSymbolJob(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol)
        : project(std::move(project)), fileSymbol(std::move(fileSymbol)) {}

void FileSymbolJob::run() {
    std::cout << fileSymbol->getFullyQualifiedName() << std::endl;
}

std::vector<std::shared_ptr<Job>> FileSymbolJob::onComplete() {
    return std::vector<std::shared_ptr<Job>>();
}
