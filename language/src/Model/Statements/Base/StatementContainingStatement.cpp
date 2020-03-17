/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "StatementContainingStatement.h"

/**
 * StatementContainingStatement implementation
 */


std::shared_ptr<Statement> StatementContainingStatement::getNestedStatement() const {
    return nestedStatement;
}

void StatementContainingStatement::setNestedStatement(std::shared_ptr<Statement> nestedStatement) {
    StatementContainingStatement::nestedStatement = nestedStatement;
}
