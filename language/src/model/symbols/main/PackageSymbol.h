/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _PACKAGESYMBOL_H
#define _PACKAGESYMBOL_H

#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "model/symbols/main/FileSymbol.h"
#include <vector>
#include <utils/TypeUtils.h>
#include <filesystem>


class PackageSymbol : public FullyQualifiedSymbol {
public:
    PackageSymbol(std::string name, std::string absolutePath, std::string relativePath);

    PackageSymbol(std::string name, const std::filesystem::path &absolutePath,
                  const std::filesystem::path &relativePath);

private:
    std::string absolutePath;
    std::string relativePath;

    std::vector<std::shared_ptr<FullyQualifiedSymbol>> children;

public:

    void addChild(std::shared_ptr<FullyQualifiedSymbol> child);

    const std::vector<std::shared_ptr<FullyQualifiedSymbol>> &getChildren() const;

    std::shared_ptr<std::vector<std::shared_ptr<FullyQualifiedSymbol>>> getFiles() const;

    std::shared_ptr<std::vector<std::shared_ptr<FullyQualifiedSymbol>>> getPackages() const;

    const std::string &getAbsolutePath() const;

    const std::string &getRelativePath() const;
};

#endif //_PACKAGESYMBOL_H