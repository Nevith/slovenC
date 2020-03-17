/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "IfStatement.h"

/**
 * IfStatement implementation
 */
std::shared_ptr<ElseStatement> IfStatement::getElseStatement() const {
    return elseStatement;
}

void IfStatement::setElseStatement(std::shared_ptr<ElseStatement> elseStatement) {
    IfStatement::elseStatement = elseStatement;
}
