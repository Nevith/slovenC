/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "EqualityExpression.h"

/**
 * EqualityExpression implementation
 */



std::string EqualityExpression::getOperator() {
    return equalityOperator;
}

void EqualityExpression::setEqualityOperator(const std::string &equalityOperator) {
    EqualityExpression::equalityOperator = equalityOperator;
}
