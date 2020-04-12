/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "CompareExpression.h"

/**
 * CompareExpression implementation
 */



std::string CompareExpression::getOperator() {
    return expressionOperator;
}

void CompareExpression::setOperator(const std::string &newOperator) {
    CompareExpression::expressionOperator = newOperator;
}
