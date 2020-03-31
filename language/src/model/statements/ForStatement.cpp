/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ForStatement.h"

/**
 * ForStatement implementation
 */


/**
 * @param return
 */

const std::vector<std::shared_ptr<Expression>> &ForStatement::getUpdateExpressions() const {
    return updateExpressions;
}

const void ForStatement::addUpdateExpression(std::shared_ptr<Expression> expression) {
    updateExpressions.push_back(expression);
}

const std::vector<std::shared_ptr<LocalVariableSymbol>> &ForStatement::getVariables() const {
    return variables;
}

const void ForStatement::addVariable(std::shared_ptr<LocalVariableSymbol> variable) {
    variables.push_back(variable);
}
