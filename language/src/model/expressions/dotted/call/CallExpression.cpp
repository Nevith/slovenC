/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "CallExpression.h"

/**
 * CallExpression implementation
 */

std::vector<std::shared_ptr<Expression>> CallExpression::getArguments() {
    return this->arguments;
}

void CallExpression::addArgument(std::shared_ptr<Expression> expression) {
    this->arguments.push_back(expression);
}

CallExpression::CallExpression(const std::string &name) : IdentifierExpression(name) {}
