//
// Created by Andraz on 27/03/2020.
//

#include "PackageOrFileReferenceExpression.h"

PackageOrFileReferenceExpression::PackageOrFileReferenceExpression(std::string name) : IdentifierExpression(name) {

}

void PackageOrFileReferenceExpression::setResolve(const std::shared_ptr<FullyQualifiedSymbol> &resolve) {
    if (isResolved()) {
        throw referenceAlreadyResolvedException;
    }
    PackageOrFileReferenceExpression::resolve = resolve;
}

const std::shared_ptr<FullyQualifiedSymbol> &PackageOrFileReferenceExpression::getResolve() const {
    if (!isResolved()) {
        throw referenceNotResolvedException;
    }
    return resolve;
}

bool PackageOrFileReferenceExpression::isResolved() const {
    if (resolve) {
        return true;
    }
    return false;
}

void PackageOrFileReferenceExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitPackageOrFileReferenceExpression(TypeUtils::cast<PackageOrFileReferenceExpression>(visitable));
}

const char *PackageOrFileReferenceExpression::ReferenceNotResolvedException::what() const {
    // TODO - better exception handling?
    return "Calling on type of unresolved reference";
}

const char *PackageOrFileReferenceExpression::ReferenceAlreadyResolvedException::what() const {
    // TODO - better exception handling?
    return "Resolving an already resolved reference";
}