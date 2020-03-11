/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "StatementContainingStatement.h"

/**
 * StatementContainingStatement implementation
 */


Statement *StatementContainingStatement::getNestedStatement() const {
    return nestedStatement;
}

void StatementContainingStatement::setNestedStatement(Statement *nestedStatement) {
    StatementContainingStatement::nestedStatement = nestedStatement;
}
