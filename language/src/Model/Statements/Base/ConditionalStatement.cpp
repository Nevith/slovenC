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




void ConditionalStatement::setCondition(std::shared_ptr<Expression> condition) {
    ConditionalStatement::condition = condition;
}

std::shared_ptr<Expression> ConditionalStatement::getCondition() const {
    return condition;
}
