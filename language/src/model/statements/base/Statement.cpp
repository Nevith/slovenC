/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Statement.h"

/**
 * Statement implementation
 */
const std::shared_ptr<ClassSymbol> &Statement::getParentClass() const {
    return parentClass;
}

void Statement::setParentClass(const std::shared_ptr<ClassSymbol> &parentClass) {
    Statement::parentClass = parentClass;
}

const std::shared_ptr<MethodSymbol> &Statement::getParentMethod() const {
    return parentMethod;
}

void Statement::setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod) {
    Statement::parentMethod = parentMethod;
}

const std::shared_ptr<Scope> &Statement::getParentScope() const {
    return parentScope;
}

void Statement::setParentScope(const std::shared_ptr<Scope> &parentScope) {
    Statement::parentScope = parentScope;
}

const std::shared_ptr<Statement> &Statement::getParentStatement() const {
    return parentStatement;
}

void Statement::setParentStatement(const std::shared_ptr<Statement> &parentStatement) {
    Statement::parentStatement = parentStatement;
}
