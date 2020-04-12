/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EXPRESSION_H
#define _EXPRESSION_H


#include <model/Scope.h>
#include <model/Visitable.h>


class ClassSymbol;
class MethodSymbol;
class Expression : public Visitable {
private:
    std::shared_ptr<ClassSymbol> parentClass;
    std::shared_ptr<MethodSymbol> parentMethod;
    std::shared_ptr<Scope> parentScope;
    std::shared_ptr<Statement> parentStatement;
    std::shared_ptr<Expression> parentExpression;

public:
    const std::shared_ptr<ClassSymbol> getParentClass() const;

    void setParentClass(const std::shared_ptr<ClassSymbol> &parentClass);

    const std::shared_ptr<MethodSymbol> getParentMethod() const;

    void setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod);

    const std::shared_ptr<Scope> getParentScope() const;

    void setParentScope(const std::shared_ptr<Scope> &parentScope);

    const std::shared_ptr<Statement> getParentStatement() const;

    void setParentStatement(const std::shared_ptr<Statement> &parentStatement);

    const std::shared_ptr<Expression> getParentExpression() const;

    void setParentExpression(const std::shared_ptr<Expression> &parentExpression);
};

#endif //_EXPRESSION_H