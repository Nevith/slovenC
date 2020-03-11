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
    std::string fullyQualifiedName;
    for (FullyQualifiedSymbol *fullyQualifiedSymbol : parentSymbols) {
        if (!fullyQualifiedName.empty()) {
            fullyQualifiedName.append(".");
        }
        fullyQualifiedName.append(fullyQualifiedSymbol->getName());
    }
    if (!fullyQualifiedName.empty()) {
        fullyQualifiedName.append(".");
    }
    fullyQualifiedName.append(getName());
    return fullyQualifiedName;
}

void FullyQualifiedSymbol::addParentSymbol(FullyQualifiedSymbol *parentSymbol) {
    parentSymbols.push_back(parentSymbol);
}

void FullyQualifiedSymbol::setParentSymbols(const std::vector<FullyQualifiedSymbol *> &parentSymbols) {
    FullyQualifiedSymbol::parentSymbols = parentSymbols;
}

const std::vector<FullyQualifiedSymbol *> &FullyQualifiedSymbol::getParentSymbols() const {
    return parentSymbols;
}
