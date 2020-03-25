/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "VariableSymbol.h"

/**
 * VariableSymbol implementation
 */


/**
 * @return TypeSymbol
 */
std::shared_ptr<TypeSymbol> VariableSymbol::getTypeSymbol() const {
    return typeSymbol;
}

void VariableSymbol::setTypeSymbol(std::shared_ptr<TypeSymbol> typeSymbol) {
    VariableSymbol::typeSymbol = typeSymbol;
}
