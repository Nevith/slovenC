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
const std::vector<std::shared_ptr<VariableDeclarationStatement>> &
ForStatement::getVariableDeclarationStatements() const {
    return variableDeclarationStatements;
}

const std::vector<std::shared_ptr<Expression>> &ForStatement::getUpdateExpressions() const {
    return updateExpressions;
}

const void ForStatement::addVariableDeclarationStatement(
        std::shared_ptr<VariableDeclarationStatement> variableDeclarationStatement) {
    variableDeclarationStatements.push_back(variableDeclarationStatement);
}

const void ForStatement::addUpdateExpression(std::shared_ptr<Expression> expression) {
    updateExpressions.push_back(expression);
}

