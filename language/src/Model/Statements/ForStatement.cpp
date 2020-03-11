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
const std::vector<VariableDeclarationStatement *> &ForStatement::getVariableDeclarationStatements() const {
    return variableDeclarationStatements;
}

const std::vector<Expression *> &ForStatement::getUpdateExpressions() const {
    return updateExpressions;
}

const void ForStatement::addVariableDeclarationStatement(VariableDeclarationStatement *variableDeclarationStatement) {
    variableDeclarationStatements.push_back(variableDeclarationStatement);
}

const void ForStatement::addUpdateExpression(Expression *expression) {
    updateExpressions.push_back(expression);
}

