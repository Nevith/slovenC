/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "IfStatement.h"

/**
 * IfStatement implementation
 */
ElseStatement *IfStatement::getElseStatement() const {
    return elseStatement;
}

void IfStatement::setElseStatement(ElseStatement *elseStatement) {
    IfStatement::elseStatement = elseStatement;
}
