/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "AdditiveExpression.h"

/**
 * AdditiveExpression implementation
 */
std::string AdditiveExpression::getOperator() {
    return operatorSign;
}

void AdditiveExpression::setOperatorSign(const std::string &operatorSign) {
    AdditiveExpression::operatorSign = operatorSign;
}