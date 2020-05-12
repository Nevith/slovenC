//
// Created by Andraz on 19/03/2020.
//

#include "ProjectJob.h"



ProjectJob::ProjectJob(std::shared_ptr<Project> project) : project(project) {};

void collectSources(std::shared_ptr<Project> project) {
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

void buildRelations(std::shared_ptr<Project> project) {
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

    if (isCanceled()) {
        return;
    }

    buildRelations(project);

    if (isCanceled()) {
        return;
    }

    // Fill fullyQualifiedMap
    auto projectSources = project->getRelativePathMap();
    for (auto projectSource : projectSources) {
        auto symbol = projectSource.second;
        project->addFullyQualifiedSource(symbol);   // TODO - check if multiple symbols with same key?
    }
}

std::vector<std::shared_ptr<Job>> ProjectJob::onComplete() {
    auto projectSources = project->getRelativePathMap();
    auto fileJobs = std::vector<std::shared_ptr<FileSymbol>>();
    for (auto &projectSource : projectSources) {
        auto fileSymbol = TypeUtils::cast<FileSymbol>(projectSource.second);
        if (fileSymbol) {
            fileJobs.push_back(fileSymbol);
        }
    }
    auto result = std::vector<std::shared_ptr<Job>>();
    auto managerJob = std::make_shared<BuilderManagerJob>(fileJobs, project);
    managerJob->setSelf(managerJob);
    result.push_back(managerJob);
    return result;
}
