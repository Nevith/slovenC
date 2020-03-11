/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "AssignmentExpression.h"

/**
 * AssignmentExpression implementation
 */


/**
 * @return Expression
 */
IdentifierExpression *AssignmentExpression::getIdentifier() {
    return nullptr;
}

void AssignmentExpression::setIdentifier(IdentifierExpression *identifier) {
    this->identifier = identifier;
}
