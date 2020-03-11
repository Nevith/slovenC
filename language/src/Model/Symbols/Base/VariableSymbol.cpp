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
TypeSymbol *VariableSymbol::getTypeSymbol() const {
    return typeSymbol;
}

void VariableSymbol::setTypeSymbol(TypeSymbol *typeSymbol) {
    VariableSymbol::typeSymbol = typeSymbol;
}
