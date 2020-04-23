/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _LOCALVARIABLESYMBOL_H
#define _LOCALVARIABLESYMBOL_H

#include <model/Scope.h>
#include "model/symbols/base/Variable.h"
#include "model/symbols/main/ClassSymbol.h"


class LocalVariableSymbol : public Variable, public Symbol {
private:
    std::shared_ptr<Expression> initialValue;
    std::shared_ptr<ClassSymbol> parentClass;
    std::shared_ptr<MethodSymbol> parentMethod;
    std::shared_ptr<Scope> parenScope;
public:
    LocalVariableSymbol(const std::string &name);

    const std::shared_ptr<Expression> &getInitialValue() const;

    void setInitialValue(const std::shared_ptr<Expression> &initialValue);

    const std::shared_ptr<ClassSymbol> &getParentClass() const;

    void setParentClass(const std::shared_ptr<ClassSymbol> &parentClass);

    const std::shared_ptr<MethodSymbol> &getParentMethod() const;

    void setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod);

    const std::shared_ptr<Scope> &getParenScope() const;

    void setParenScope(const std::shared_ptr<Scope> &parenScope);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_LOCALVARIABLESYMBOL_H