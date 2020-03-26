/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "FullyQualifiedSymbol.h"

/**
 * FullyQualifiedSymbol implementation
 */


FullyQualifiedSymbol::FullyQualifiedSymbol(std::string name) : Symbol(name) {
}

std::string FullyQualifiedSymbol::getFullyQualifiedName() const {
    if (parentSymbol != nullptr) {
        if (!parentSymbol->getName().empty()) {
            return parentSymbol->getFullyQualifiedName() + "." + getName();
        }
    }
    return getName();
}

std::shared_ptr<FullyQualifiedSymbol> FullyQualifiedSymbol::getParentSymbol() const {
    return parentSymbol;
}

void FullyQualifiedSymbol::setParentSymbol(std::shared_ptr<FullyQualifiedSymbol> parentSymbol) {
    FullyQualifiedSymbol::parentSymbol = parentSymbol;
}
