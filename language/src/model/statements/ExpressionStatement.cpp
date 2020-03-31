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
std::shared_ptr<Expression> ExpressionStatement::getExpression() const {
    return expression;
}

void ExpressionStatement::setExpression(std::shared_ptr<Expression> expression) {
    ExpressionStatement::expression = expression;
}

void ExpressionStatement::define(std::shared_ptr<Visitable> object) {

}
