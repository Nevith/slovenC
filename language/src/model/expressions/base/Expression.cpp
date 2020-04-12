/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Expression.h"

/**
 * Expression implementation
 */
const std::shared_ptr<ClassSymbol> Expression::getParentClass() const {
    return parentClass;
}

void Expression::setParentClass(const std::shared_ptr<ClassSymbol> &parentClass) {
    Expression::parentClass = parentClass;
}

const std::shared_ptr<MethodSymbol> Expression::getParentMethod() const {
    return parentMethod;
}

void Expression::setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod) {
    Expression::parentMethod = parentMethod;
}

const std::shared_ptr<Scope> Expression::getParentScope() const {
    return parentScope;
}

void Expression::setParentScope(const std::shared_ptr<Scope> &parentScope) {
    Expression::parentScope = parentScope;
}

const std::shared_ptr<Statement> Expression::getParentStatement() const {
    return parentStatement;
}

void Expression::setParentStatement(const std::shared_ptr<Statement> &parentStatement) {
    Expression::parentStatement = parentStatement;
}

const std::shared_ptr<Expression> Expression::getParentExpression() const {
    return parentExpression;
}

void Expression::setParentExpression(const std::shared_ptr<Expression> &parentExpression) {
    Expression::parentExpression = parentExpression;
}
