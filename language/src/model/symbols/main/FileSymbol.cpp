/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "FileSymbol.h"

#include <utility>

/**
 * FileSymbol implementation
 */

FileSymbol::FileSymbol(std::string name, std::string absolutePath, std::string relativePath, std::string extension)
        : FullyQualifiedSymbol(std::move(name)), relativePath(std::move(relativePath)),
          absolutePath(std::move(absolutePath)),
          extension(std::move(extension)) {}


FileSymbol::FileSymbol(std::string name, const std::filesystem::path &absolutePath,
                       const std::filesystem::path &relativePath, std::string extension)
        : FullyQualifiedSymbol(std::move(name)), relativePath(relativePath.string()),
          absolutePath(absolutePath.string()),
          extension(std::move(extension)) {}

const std::vector<std::shared_ptr<PackageOrFileReferenceExpression>> &FileSymbol::getImports() const {
    return imports;
}

void FileSymbol::addImport(std::shared_ptr<PackageOrFileReferenceExpression> import) {
    FileSymbol::imports.push_back(import);
}

const std::vector<std::shared_ptr<ClassSymbol>> &FileSymbol::getDeclaredClasses() const {
    return declaredClasses;
}

void FileSymbol::addDeclaredClass(std::shared_ptr<ClassSymbol> addDeclaredClass) {
    FileSymbol::declaredClasses.push_back(addDeclaredClass);
}

const std::string &FileSymbol::getAbsolutePath() const {
    return absolutePath;
}

const std::string &FileSymbol::getRelativePath() const {
    return relativePath;
}
