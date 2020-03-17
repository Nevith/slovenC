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
    for (std::shared_ptr<FullyQualifiedSymbol> fullyQualifiedSymbol : parentSymbols) {
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

void FullyQualifiedSymbol::addParentSymbol(std::shared_ptr<FullyQualifiedSymbol> parentSymbol) {
    parentSymbols.push_back(parentSymbol);
}

void FullyQualifiedSymbol::setParentSymbols(const std::vector<std::shared_ptr<FullyQualifiedSymbol>> &parentSymbols) {
    FullyQualifiedSymbol::parentSymbols = parentSymbols;
}

const std::vector<std::shared_ptr<FullyQualifiedSymbol>> &FullyQualifiedSymbol::getParentSymbols() const {
    return parentSymbols;
}
