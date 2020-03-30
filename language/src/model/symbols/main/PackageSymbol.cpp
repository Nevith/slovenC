/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "PackageSymbol.h"

#include <utility>


/**
 * PackageSymbol implementation
 */
PackageSymbol::PackageSymbol(std::string name, std::string absolutePath, std::string relativePath) :
        FullyQualifiedSymbol(std::move(name)), absolutePath(std::move(absolutePath)),
        relativePath(std::move(relativePath)) {}

PackageSymbol::PackageSymbol(std::string name, const std::filesystem::path &absolutePath,
                             const std::filesystem::path &relativePath) :
        FullyQualifiedSymbol(std::move(name)) {
    this->absolutePath = absolutePath.string();
    this->relativePath = relativePath.string();
}

const std::string &PackageSymbol::getAbsolutePath() const {
    return absolutePath;
}

const std::string &PackageSymbol::getRelativePath() const {
    return relativePath;
}

const std::vector<std::shared_ptr<FullyQualifiedSymbol>> &PackageSymbol::getChildren() const {
    return children;
}

std::shared_ptr<std::vector<std::shared_ptr<FullyQualifiedSymbol>>> PackageSymbol::getFiles() const {
    auto result = std::make_shared<std::vector<std::shared_ptr<FullyQualifiedSymbol>>>();

    for (const auto &child : children) {
        if (TypeUtils::instanceOf<FileSymbol>(child.get())) {
            result->push_back(std::shared_ptr(child));
        }
    }

    return result;
}

std::shared_ptr<std::vector<std::shared_ptr<FullyQualifiedSymbol>>> PackageSymbol::getPackages() const {
    auto result = std::make_shared<std::vector<std::shared_ptr<FullyQualifiedSymbol>>>();

    for (const auto &child : children) {
        if (TypeUtils::instanceOf<PackageSymbol>(child.get())) {
            result->push_back(std::shared_ptr(child));
        }
    }

    return result;
}

void PackageSymbol::addChild(std::shared_ptr<FullyQualifiedSymbol> child) {
    children.push_back(child);
}
