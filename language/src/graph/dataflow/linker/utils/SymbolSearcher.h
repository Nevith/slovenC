//
// Created by andraz on 28/04/2020.
//

#ifndef SLOVENC_SYMBOLSEARCHER_H
#define SLOVENC_SYMBOLSEARCHER_H


#include "memory"
#include "model/Model.h"
#include "model/visitor/ModelVisitor.h"


class SymbolSearcher : public ModelVisitor<std::shared_ptr<Symbol>> {
private:
    std::shared_ptr<IdentifierExpression> searchIdentifier;

    std::vector<std::shared_ptr<MethodSymbol>> possibleMethods;

    bool staticContext;
public:

    std::shared_ptr<Symbol>
    findSymbol(std::shared_ptr<IdentifierExpression> searchIdentifier, std::shared_ptr<Visitable> visitable);

    std::vector<std::shared_ptr<MethodSymbol>>
    findMethods(std::shared_ptr<CallExpression> expression, std::shared_ptr<Visitable> visitable);

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) override;

    void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;

    void visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) override;

    void visitInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) override;

    void visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) override;

    void visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) override;

    void visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) override;

    void visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) override;

    void visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) override;

    void visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) override;

    void visitThisExpression(std::shared_ptr<ThisExpression> visitable) override;

    void visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) override;

    void visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) override;

    void visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) override;

    void visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) override;
};


#endif //SLOVENC_SYMBOLSEARCHER_H
