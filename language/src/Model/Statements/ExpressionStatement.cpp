/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ExpressionStatement.h"

/**
 * ExpressionStatement implementation
 */


/**
 * @return Expression
 */
Expression *ExpressionStatement::getExpression() const {
    return expression;
}

void ExpressionStatement::setExpression(Expression *expression) {
    ExpressionStatement::expression = expression;
}
