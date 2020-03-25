/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "DuoExpression.h"

/**
 * DuoExpression implementation
 */


std::shared_ptr<Expression> DuoExpression::getLeftExpression() const {
    return leftExpression;
}

void DuoExpression::setLeftExpression(std::shared_ptr<Expression> leftExpression) {
    DuoExpression::leftExpression = leftExpression;
}

std::shared_ptr<Expression> DuoExpression::getRightExpression() const {
    return rightExpression;
}

void DuoExpression::setRightExpression(std::shared_ptr<Expression> rightExpression) {
    DuoExpression::rightExpression = rightExpression;
}
