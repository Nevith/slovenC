/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "DuoExpression.h"

/**
 * DuoExpression implementation
 */


Expression *DuoExpression::getLeftExpression() const {
    return leftExpression;
}

void DuoExpression::setLeftExpression(Expression *leftExpression) {
    DuoExpression::leftExpression = leftExpression;
}

Expression *DuoExpression::getRightExpression() const {
    return rightExpression;
}

void DuoExpression::setRightExpression(Expression *rightExpression) {
    DuoExpression::rightExpression = rightExpression;
}
