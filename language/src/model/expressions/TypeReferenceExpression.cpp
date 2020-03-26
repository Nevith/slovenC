//
// Created by Andraz on 26/03/2020.
//

#include "TypeReferenceExpression.h"


TypeReferenceExpression::TypeReferenceExpression(std::string name) : DottedExpression(name) {

}

void TypeReferenceExpression::setResolve(const std::shared_ptr<TypeSymbol> &resolve) {
    if (isResolved()) {
        throw referenceAlreadyResolvedException;
    }
    TypeReferenceExpression::resolve = resolve;
}

const std::shared_ptr<TypeSymbol> &TypeReferenceExpression::getResolve() const {
    if (!isResolved()) {
        throw referenceNotResolvedException;
    }
    return resolve;
}

bool TypeReferenceExpression::isResolved() const {
    if (resolve) {
        return true;
    }
    return false;
}

const char *TypeReferenceExpression::ReferenceNotResolvedException::what() const {
    // TODO - better exception handling?
    return "Calling on type of unresolved reference";
}

const char *TypeReferenceExpression::ReferenceAlreadyResolvedException::what() const {
    // TODO - better exception handling?
    return "Resolving an already resolved reference";
}
