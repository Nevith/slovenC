/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MultiplicationExpression.h"

/**
 * MultiplicationExpression implementation
 */
std::string MultiplicationExpression::getOperator() {
    return "*";
}

void MultiplicationExpression::setOperator(const std::string &operationSign) {
    MultiplicationExpression::operationSign = operationSign;
}
