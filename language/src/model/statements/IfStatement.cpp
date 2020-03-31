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

void IfStatement::define(std::shared_ptr<Visitable> object) {
    if (!elseStatement) {
        auto cast = TypeUtils::cast<ElseStatement>(object);
        if (cast) {
            elseStatement = cast;
        }
    }
    StatementContainingStatement::define(object);
}
