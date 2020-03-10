/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "TypeExpression.h"

/**
 * TypeExpression implementation
 */
TypeSymbol *TypeExpression::getType() const {
    return type;
}

void TypeExpression::setType1(TypeSymbol *type) {
    TypeExpression::type = type;
}
