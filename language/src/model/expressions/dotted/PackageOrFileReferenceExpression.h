//
// Created by Andraz on 27/03/2020.
//

#ifndef SLOVENC_PACKAGEORFILEREFERENCEEXPRESSION_H
#define SLOVENC_PACKAGEORFILEREFERENCEEXPRESSION_H


#include "IdentifierExpression.h"

class FullyQualifiedSymbol;

class PackageOrFileReferenceExpression : public IdentifierExpression {
private:

    std::shared_ptr<FullyQualifiedSymbol> resolve;

public:

    PackageOrFileReferenceExpression(std::string name);

    bool isResolved() const;

    void setResolve(const std::shared_ptr<FullyQualifiedSymbol> &resolve);

    const std::shared_ptr<FullyQualifiedSymbol> &getResolve() const;

    class ReferenceNotResolvedException : public std::exception {
    public:
        const char *what() const override;
    } referenceNotResolvedException;

    class ReferenceAlreadyResolvedException : public std::exception {
    public:
        const char *what() const override;
    } referenceAlreadyResolvedException;
};


#endif //SLOVENC_PACKAGEORFILEREFERENCEEXPRESSION_H
