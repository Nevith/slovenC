/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include <iostream>
#include "Scope.h"

/**
 * Scope implementation
 */


/**
 * @return std::vector<Statement>
 */
const std::vector<std::shared_ptr<Statement>> &Scope::getStatements() const {
    std::cout << "|Size: " << statements.size() <<std::endl;
    return statements;
}

void Scope::addStatement(const std::shared_ptr<Statement> &statement) {
    statements.push_back(statement);
}
