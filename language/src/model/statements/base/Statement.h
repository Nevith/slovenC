/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _STATEMENT_H
#define _STATEMENT_H

#include <model/symbols/main/ClassSymbol.h>
#include "model/Visitable.h"
#include "model/Scope.h"

class Statement : public Visitable {
private:
    std::shared_ptr<ClassSymbol> parentClass;
    std::shared_ptr<MethodSymbol> parentMethod;
    std::shared_ptr<Scope> parentScope;
    std::shared_ptr<Statement> parentStatement;
public:
    const std::shared_ptr<ClassSymbol> &getParentClass() const;

    void setParentClass(const std::shared_ptr<ClassSymbol> &parentClass);

    const std::shared_ptr<MethodSymbol> &getParentMethod() const;

    void setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod);

    const std::shared_ptr<Scope> &getParentScope() const;

    void setParentScope(const std::shared_ptr<Scope> &parentScope);

    const std::shared_ptr<Statement> &getParentStatement() const;

    void setParentStatement(const std::shared_ptr<Statement> &parentStatement);

    virtual void define(std::shared_ptr<Visitable> object) = 0;
};

#endif //_STATEMENT_H