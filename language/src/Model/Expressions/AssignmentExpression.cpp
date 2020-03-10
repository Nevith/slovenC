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
Expression *AssignmentExpression::getIdentifier() {
    return nullptr;
}

void AssignmentExpression::setIdentifier(IdentifierExpression *identifier) {
    this->identifier = identifier;
}
