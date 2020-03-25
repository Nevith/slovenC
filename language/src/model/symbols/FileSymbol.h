/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FILESYMBOL_H
#define _FILESYMBOL_H

#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "ClassSymbol.h"
#include "ImportSymbol.h"
#include <string>
#include <filesystem>

class FileSymbol : public FullyQualifiedSymbol {
public:
    FileSymbol(std::string name, std::string absolutePath, std::string relativePath, std::string extension);

    FileSymbol(std::string name, const std::filesystem::path &absolutePath, const std::filesystem::path &relativePath,
               std::string extension);

private:
    std::string absolutePath;
    std::string relativePath;
    std::string extension;

    std::vector<std::shared_ptr<ImportSymbol>> imports;
    std::vector<std::shared_ptr<ClassSymbol>> declaredClasses;

public:
    const std::vector<std::shared_ptr<ImportSymbol>> &getImports() const;

    void addImport(std::shared_ptr<ImportSymbol> imports);

    const std::vector<std::shared_ptr<ClassSymbol>> &getDeclaredClasses() const;

    void addDeclaredClass(std::shared_ptr<ClassSymbol> declaredClasses);

    const std::string &getAbsolutePath() const;

    const std::string &getRelativePath() const;
};

#endif //_FILESYMBOL_H