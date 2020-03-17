/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MonoExpression.h"

/**
 * MonoExpression implementation
 */
std::shared_ptr<Expression> MonoExpression::getExpression() {
    return nullptr;
}

void MonoExpression::setExpression(std::shared_ptr<Expression> expression) {
    this->expression = expression;
}
