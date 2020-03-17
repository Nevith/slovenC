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
const std::vector<std::shared_ptr<Statement>> &Scope::getStatements() const {
    return statements;
}

void Scope::setStatements(const std::vector<std::shared_ptr<Statement>> &statements) {
    Scope::statements = statements;
}
