/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "VariableDeclarationStatement.h"

/**
 * VariableDeclarationStatement implementation
 */
VariableSymbol *VariableDeclarationStatement::getVariableSymbol() const {
    return variableSymbol;
}

void VariableDeclarationStatement::setVariableSymbol(VariableSymbol *variableSymbol) {
    VariableDeclarationStatement::variableSymbol = variableSymbol;
}

Expression *VariableDeclarationStatement::getExpression() const {
    return expression;
}

void VariableDeclarationStatement::setExpression(Expression *expression) {
    VariableDeclarationStatement::expression = expression;
}
