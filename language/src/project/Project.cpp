//
// Created by Andraz on 19/03/2020.
//

#include "Project.h"

#include <utility>
#include <model/symbols/main/PackageSymbol.h>

Project::Project(std::string absolutePath) : absolutePath(std::move(absolutePath)) {
    root = std::make_shared<PackageSymbol>("", absolutePath, "");
    addProjectSource(root);
}

const std::string &Project::getAbsolutePath() const {
    return absolutePath;
}

void Project::addProjectSource(std::shared_ptr<FileSymbol> source) {
    relativePathMap.insert(std::pair<std::string, std::shared_ptr<FileSymbol>>(source->getRelativePath(),
                                                                               source));
}

void Project::addProjectSource(std::shared_ptr<PackageSymbol> source) {
    relativePathMap.insert(std::pair<std::string, std::shared_ptr<PackageSymbol>>(source->getRelativePath(),
                                                                                  source));
}

void Project::addFullyQualifiedSource(std::shared_ptr<FullyQualifiedSymbol> source) {
    fullyQualifiedMap.insert(
            std::pair<std::string, std::shared_ptr<FullyQualifiedSymbol>>(source->getFullyQualifiedName(),
                                                                          source));
}

std::shared_ptr<FullyQualifiedSymbol> Project::getSymbolByFullyQualifiedName(std::string fullyQualifiedName) {
    auto result = fullyQualifiedMap.find(fullyQualifiedName);
    if (result == fullyQualifiedMap.end()) {
        return nullptr;
    }
    return result->second;
}

std::shared_ptr<FullyQualifiedSymbol> Project::getSymbolByPath(std::string fileRelativePath) {
    auto result = relativePathMap.find(fileRelativePath);
    if (result == relativePathMap.end()) {
        return nullptr;
    }
    return result->second;
}

const std::shared_ptr<PackageSymbol> &Project::getRoot() const {
    return root;
}

const std::map<std::string, std::shared_ptr<FullyQualifiedSymbol>> &Project::getRelativePathMap() const {
    return relativePathMap;
}

const std::map<std::string, std::shared_ptr<FullyQualifiedSymbol>> &Project::getFullyQualifiedMap() const {
    return fullyQualifiedMap;
}

const std::shared_ptr<TypeGraph> &Project::getTypeGraph() const {
    return typeGraph;
}

void Project::setTypeGraph(const std::shared_ptr<TypeGraph> &typeGraph) {
    Project::typeGraph = typeGraph;
}
