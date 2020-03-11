/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Scope.h"

/**
 * Scope implementation
 */


/**
 * @return std::vector<Statement>
 */
const std::vector<Statement *> &Scope::getStatements() const {
    return statements;
}

void Scope::setStatements(const std::vector<Statement *> &statements) {
    Scope::statements = statements;
}
