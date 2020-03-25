//
// Created by Andraz on 25/03/2020.
//

#include "CurrentState.h"

CurrentState::CurrentState(const std::shared_ptr<FileSymbol> &fileSymbol) : fileSymbol(fileSymbol) {}

const std::shared_ptr<FileSymbol> &CurrentState::getFileSymbol() const {
    return fileSymbol;
}

const std::shared_ptr<MemberSymbol> CurrentState::getCurrentMethod() const {
    return currentMethod;
}

void CurrentState::setCurrentMethod(const std::shared_ptr<MethodSymbol> &currentMethod) {
    CurrentState::currentMethod = currentMethod;
}

const std::shared_ptr<ClassSymbol> &CurrentState::getCurrentClass() const {
    return classStack.top();
}

const std::shared_ptr<Statement> &CurrentState::getCurrentStatement() const {
    return statementStack.top();
}

const std::shared_ptr<Expression> &CurrentState::getCurrentExpression() const {
    return expressionStack.top();
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

void CurrentState::popCurrentClass(const std::shared_ptr<ClassSymbol> &currentClass) {
    classStack.pop();
}

void CurrentState::popCurrentStatement(const std::shared_ptr<Statement> &currentStatement) {
    statementStack.pop();
}

void CurrentState::popCurrentExpression(const std::shared_ptr<Expression> &currentExpression) {
    expressionStack.pop();
}
