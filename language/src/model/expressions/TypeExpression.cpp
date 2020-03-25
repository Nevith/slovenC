/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "TypeExpression.h"

/**
 * TypeExpression implementation
 */
std::shared_ptr<TypeSymbol> TypeExpression::getType() const {
    return type;
}

void TypeExpression::setType1(std::shared_ptr<TypeSymbol> type) {
    TypeExpression::type = type;
}
