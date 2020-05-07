/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FILESYMBOL_H
#define _FILESYMBOL_H

#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "ClassSymbol.h"
#include <string>
#include <filesystem>
#include <model/expressions/dotted/PackageOrFileReferenceExpression.h>
#include <graph/type/TypeGraph.h>

class FileSymbol : public FullyQualifiedSymbol {
public:
    FileSymbol(std::string name, std::string absolutePath, std::string relativePath, std::string extension);

    FileSymbol(std::string name, const std::filesystem::path &absolutePath, const std::filesystem::path &relativePath,
               std::string extension);

private:
    std::string absolutePath;
    std::string relativePath;
    std::string extension;

    std::vector<std::shared_ptr<PackageOrFileReferenceExpression>> imports;
    std::vector<std::shared_ptr<ClassSymbol>> declaredClasses;

    std::shared_ptr<TypeGraph> localTypeGraph;

public:
    const std::vector<std::shared_ptr<PackageOrFileReferenceExpression>> &getImports() const;

    void addImport(std::shared_ptr<PackageOrFileReferenceExpression> import);

    const std::vector<std::shared_ptr<ClassSymbol>> &getDeclaredClasses() const;

    void addDeclaredClass(std::shared_ptr<ClassSymbol> declaredClasses);

    const std::string &getAbsolutePath() const;

    const std::string &getRelativePath() const;

    const std::shared_ptr<TypeGraph> &getLocalTypeGraph() const;

    void setLocalTypeGraph(const std::shared_ptr<TypeGraph> &localTypeGraph);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_FILESYMBOL_H