//
// Created by andraz on 28/04/2020.
//

#ifndef SLOVENC_TYPESEARCHER_H
#define SLOVENC_TYPESEARCHER_H


#include "memory"
#include "model/Model.h"
#include "model/visitor/ModelVisitor.h"


class TypeSearcher : public ModelVisitor<std::shared_ptr<Symbol>> {
private:
    std::shared_ptr<IdentifierExpression> searchIdentifier;

public:

    std::shared_ptr<Symbol>
    findSymbol(std::shared_ptr<IdentifierExpression> searchIdentifier, std::shared_ptr<Visitable> visitable);

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) override;

    void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;

    void visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) override;

    void visitInvalidTypeSymbol(std::shared_ptr<InvalidTypeSymbol> visitable) override;
};


#endif //SLOVENC_TYPESEARCHER_H
