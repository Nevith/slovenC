//
// Created by Andraz on 19/03/2020.
//

#include "ProjectJob.h"
#include "FileSymbolJob.h"
#include <iostream>
#include <filesystem>
#include <memory>
#include <model/symbols/PackageSymbol.h>


ProjectJob::ProjectJob(const std::string &absolutePath) {
    project = std::make_shared<Project>(absolutePath);
}

void collectSources(const std::shared_ptr<Project> &project) {
    auto projectPath = project->getAbsolutePath();
    for (std::filesystem::recursive_directory_iterator i(projectPath), end; i != end; ++i) {
        auto absolutePath = i->path();
        auto relativePath = std::filesystem::relative(absolutePath, projectPath);
        auto name = absolutePath.stem();
        auto extension = absolutePath.extension().string();
        if (is_directory(absolutePath)) {
            project->addProjectSource(std::make_shared<PackageSymbol>(name.string(), absolutePath, relativePath));
        } else {
            project->addProjectSource(
                    std::make_shared<FileSymbol>(name.string(), absolutePath, relativePath, extension));
        }
    }
}

void buildRelations(const std::shared_ptr<Project> &project) {
    auto projectSources = project->getRelativePathMap();
    for (auto &projectSource : projectSources) {
        auto relativePath = projectSource.first;
        if (relativePath.empty()) {
            continue;
        }
        auto symbol = projectSource.second;
        auto path = std::filesystem::path(relativePath);
        auto parentPath = path.parent_path();

        auto parent = project->getSymbolByPath(parentPath.string());
        auto parentCast = TypeUtils::cast<PackageSymbol>(parent);
        if (parentCast != nullptr) {
            parentCast->addChild(symbol);
            symbol->setParentSymbol(parentCast);
        }
    }
}

void ProjectJob::run() {
    collectSources(project);
    buildRelations(project);

    // Fill fullyQualifiedMap
    auto projectSources = project->getRelativePathMap();
    for (auto &projectSource : projectSources) {
        auto symbol = projectSource.second;
        project->addFullyQualifiedSource(symbol);   // TODO - check if multiple symbols with same key
    }
}

std::vector<std::shared_ptr<Job>> ProjectJob::onComplete() {
    auto projectSources = project->getRelativePathMap();
    auto fileJobs = std::vector<std::shared_ptr<Job>>();
    for (auto &projectSource : projectSources) {
        auto fileSymbol = TypeUtils::cast<FileSymbol>(projectSource.second);
        if (fileSymbol != nullptr) {
            fileJobs.push_back(std::make_shared<FileSymbolJob>(project, fileSymbol));
        }
    }
    std::cout << fileJobs.size() << std::endl;
    return fileJobs;
}
