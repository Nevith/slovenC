/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ConditionalStatement.h"

/**
 * ConditionalStatement implementation
 */


/**
 * @return Expression
 */




void ConditionalStatement::setCondition(Expression *condition) {
    ConditionalStatement::condition = condition;
}

Expression *ConditionalStatement::getCondition() const {
    return condition;
}
