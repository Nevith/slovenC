//
// Created by Andraz on 19/03/2020.
//

#ifndef SLOVENC_PROJECT_H
#define SLOVENC_PROJECT_H


#include <string>
#include <map>
#include <atomic>
#include <memory>
#include <model/symbols/base/FullyQualifiedSymbol.h>
#include <model/symbols/main/PackageSymbol.h>

class Project {
private:
    std::string absolutePath;

    std::shared_ptr<PackageSymbol> root;

    std::map<std::string, std::shared_ptr<FullyQualifiedSymbol>> relativePathMap;
    std::map<std::string, std::shared_ptr<FullyQualifiedSymbol>> fullyQualifiedMap;

    std::shared_ptr<TypeGraph> typeGraph;

public:
    Project(std::string absolutePath);

    void addProjectSource(std::shared_ptr<FileSymbol> source);

    void addProjectSource(std::shared_ptr<PackageSymbol> source);

    void addFullyQualifiedSource(std::shared_ptr<FullyQualifiedSymbol> source);

    std::shared_ptr<FullyQualifiedSymbol> getSymbolByFullyQualifiedName(std::string fullyQualifiedName);

    std::shared_ptr<FullyQualifiedSymbol> getSymbolByPath(std::string fileRelativePath);

    const std::shared_ptr<PackageSymbol> &getRoot() const;

    const std::map<std::string, std::shared_ptr<FullyQualifiedSymbol>> &getRelativePathMap() const;

    const std::map<std::string, std::shared_ptr<FullyQualifiedSymbol>> &getFullyQualifiedMap() const;

    const std::string &getAbsolutePath() const;

    const std::shared_ptr<TypeGraph> &getTypeGraph() const;

    void setTypeGraph(const std::shared_ptr<TypeGraph> &typeGraph);
};


#endif //SLOVENC_PROJECT_H
