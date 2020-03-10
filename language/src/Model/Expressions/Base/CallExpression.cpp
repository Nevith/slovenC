/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "CallExpression.h"

/**
 * CallExpression implementation
 */

std::vector<Expression *> CallExpression::getArguments() {
    return this->arguments;
}

void CallExpression::addArgument(Expression *expression) {
    this->arguments.push_back(expression);
}
