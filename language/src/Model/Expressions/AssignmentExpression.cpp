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
std::shared_ptr<IdentifierExpression> AssignmentExpression::getIdentifier() {
    return identifier;
}

void AssignmentExpression::setIdentifier(std::shared_ptr<IdentifierExpression> identifier) {
    this->identifier = identifier;
}
