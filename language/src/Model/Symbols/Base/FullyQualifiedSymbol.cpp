/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "FullyQualifiedSymbol.h"

/**
 * FullyQualifiedSymbol implementation
 */


/**
 * @return std::string
 */
std::string FullyQualifiedSymbol::getFullyQualifiedName() {
    if (parentSymbol != nullptr) {
        if (!parentSymbol->getName().empty()) {
            return parentSymbol->getFullyQualifiedName() + "." + getName();
        }
    }
    return getName();
}

const std::shared_ptr<FullyQualifiedSymbol> &FullyQualifiedSymbol::getParentSymbol() const {
    return parentSymbol;
}

void FullyQualifiedSymbol::setParentSymbol(const std::shared_ptr<FullyQualifiedSymbol> &parentSymbol) {
    FullyQualifiedSymbol::parentSymbol = parentSymbol;
}

FullyQualifiedSymbol::FullyQualifiedSymbol(std::string name): Symbol(name) {
}
