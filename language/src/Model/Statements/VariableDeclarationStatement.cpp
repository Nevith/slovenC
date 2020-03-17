/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "VariableDeclarationStatement.h"

/**
 * VariableDeclarationStatement implementation
 */
std::shared_ptr<VariableSymbol> VariableDeclarationStatement::getVariableSymbol() const {
    return variableSymbol;
}

void VariableDeclarationStatement::setVariableSymbol(std::shared_ptr<VariableSymbol> variableSymbol) {
    VariableDeclarationStatement::variableSymbol = variableSymbol;
}

std::shared_ptr<Expression> VariableDeclarationStatement::getExpression() const {
    return expression;
}

void VariableDeclarationStatement::setExpression(std::shared_ptr<Expression> expression) {
    VariableDeclarationStatement::expression = expression;
}
