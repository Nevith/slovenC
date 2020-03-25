//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_CURRENTSTATE_H
#define SLOVENC_CURRENTSTATE_H


#include <stack>
#include <model/symbols/ClassSymbol.h>
#include <model/symbols/FileSymbol.h>
#include <model/statements/base/Statement.h>
#include <model/expressions/base/Expression.h>

class CurrentState {
public:
    CurrentState(const std::shared_ptr<FileSymbol> &fileSymbol);

private:
    const std::shared_ptr<FileSymbol> fileSymbol;
    std::shared_ptr<MethodSymbol> currentMethod;
    std::stack<std::shared_ptr<ClassSymbol>> classStack;
    std::stack<std::shared_ptr<Statement>> statementStack;
    std::stack<std::shared_ptr<Expression>> expressionStack;

public:

    const std::shared_ptr<FileSymbol> &getFileSymbol() const;

    const std::shared_ptr<ClassSymbol> &getCurrentClass() const;

    const std::shared_ptr<MemberSymbol> getCurrentMethod() const;

    const std::shared_ptr<Statement> &getCurrentStatement() const;

    const std::shared_ptr<Expression> &getCurrentExpression() const;

    void setCurrentMethod(const std::shared_ptr<MethodSymbol> &currentMethod);

    void pushCurrentClass(const std::shared_ptr<ClassSymbol> &currentClass);

    void pushCurrentStatement(const std::shared_ptr<Statement> &currentStatement);

    void pushCurrentExpression(const std::shared_ptr<Expression> &currentExpression);

    void popCurrentClass(const std::shared_ptr<ClassSymbol> &currentClass);

    void popCurrentStatement(const std::shared_ptr<Statement> &currentStatement);

    void popCurrentExpression(const std::shared_ptr<Expression> &currentExpression);
};


#endif //SLOVENC_CURRENTSTATE_H
