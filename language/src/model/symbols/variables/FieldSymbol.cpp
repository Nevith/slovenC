/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "FieldSymbol.h"

/**
 * FieldSymbol implementation
 */
FieldSymbol::FieldSymbol(const std::string &name) : Variable(), FullyQualifiedSymbol(name) {}

const std::shared_ptr<Expression> &FieldSymbol::getInitialValue() const {
    return initialValue;
}

void FieldSymbol::setInitialValue(const std::shared_ptr<Expression> &initialValue) {
    FieldSymbol::initialValue = initialValue;
}