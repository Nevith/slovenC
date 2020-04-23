/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "VariableDeclarationStatement.h"

/**
 * VariableDeclarationStatement implementation
 */
std::shared_ptr<Variable> VariableDeclarationStatement::getVariableSymbol() const {
    return variableSymbol;
}

void VariableDeclarationStatement::setVariableSymbol(std::shared_ptr<LocalVariableSymbol> variableSymbol) {
    VariableDeclarationStatement::variableSymbol = variableSymbol;
}

void VariableDeclarationStatement::define(std::shared_ptr<Statement> object) {

}

void VariableDeclarationStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitVariableDeclarationStatement(TypeUtils::cast<VariableDeclarationStatement>(visitable));
}
