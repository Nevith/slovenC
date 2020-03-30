//
// Created by Andraz on 25/03/2020.
//

#include "CurrentState.h"

CurrentState::CurrentState(const std::shared_ptr<FileSymbol> &fileSymbol) : fileSymbol(fileSymbol) {}

const std::shared_ptr<FileSymbol> CurrentState::getFileSymbol() const {
    return fileSymbol;
}

const std::shared_ptr<MethodSymbol> CurrentState::getCurrentMethod() const {
    return currentMethod;
}

const void CurrentState::setCurrentMethod(const std::shared_ptr<MethodSymbol> &currentMethod) {
    CurrentState::currentMethod = currentMethod;
}

const std::shared_ptr<ClassSymbol> CurrentState::getCurrentClass() const {
    if (classStack.empty()) {
        return nullptr;
    }
    return classStack.top();
}

const std::shared_ptr<Statement> CurrentState::getCurrentStatement() const {
    if (statementStack.empty()) {
        return nullptr;
    }
    return statementStack.top();
}

const std::shared_ptr<Expression> CurrentState::getCurrentExpression() const {
    if (expressionStack.empty()) {
        return nullptr;
    }
    return expressionStack.top();
}

const std::shared_ptr<Scope> CurrentState::getCurrentScope() const {
    if (scopeStack.empty()) {
        return nullptr;
    }
    return scopeStack.top();
}

void CurrentState::pushCurrentClass(const std::shared_ptr<ClassSymbol> &currentClass) {
    classStack.push(currentClass);
}

void CurrentState::pushCurrentStatement(const std::shared_ptr<Statement> &currentStatement) {
    statementStack.push(currentStatement);
}

void CurrentState::pushCurrentExpression(const std::shared_ptr<Expression> &currentExpression) {
    expressionStack.push(currentExpression);
}

void CurrentState::pushCurrentScope(const std::shared_ptr<Scope> &currentScope) {
    scopeStack.push(currentScope);
}

void CurrentState::popCurrentClass() {
    classStack.pop();
}

void CurrentState::popCurrentStatement() {
    statementStack.pop();
}

void CurrentState::popCurrentExpression() {
    expressionStack.pop();
}

void CurrentState::popCurrentScope() {
    scopeStack.pop();
}
