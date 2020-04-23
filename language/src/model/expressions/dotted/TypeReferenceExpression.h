//
// Created by Andraz on 26/03/2020.
//

#ifndef SLOVENC_TYPEREFERENCEEXPRESSION_H
#define SLOVENC_TYPEREFERENCEEXPRESSION_H


#include <exception>
#include <model/symbols/base/TypeSymbol.h>
#include <model/expressions/base/DottedExpression.h>
#include "IdentifierExpression.h"

class TypeReferenceExpression : public IdentifierExpression {
private:

    std::shared_ptr<TypeSymbol> resolve;

public:

    TypeReferenceExpression(std::string name);

    bool isResolved() const;

    void setResolve(const std::shared_ptr<TypeSymbol> &resolve);

    const std::shared_ptr<TypeSymbol> &getResolve() const;

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    class ReferenceNotResolvedException : public std::exception {
    public:
        const char *what() const override;
    } referenceNotResolvedException;

    class ReferenceAlreadyResolvedException : public std::exception {
    public:
        const char *what() const override;
    } referenceAlreadyResolvedException;
};


#endif // SLOVENC_TYPEREFERENCEEXPRESSION_H
