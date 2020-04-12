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
std::shared_ptr<Expression> AssignmentExpression::getIdentifier() {
    return assignee;
}

void AssignmentExpression::setIdentifier(std::shared_ptr<Expression> identifier) {
    this->assignee = identifier;
}

std::string AssignmentExpression::getOperator() {
    return "=";
}
