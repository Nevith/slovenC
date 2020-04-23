/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _PARAMETERSYMBOL_H
#define _PARAMETERSYMBOL_H

#include "model/symbols/base/Variable.h"

class ClassSymbol;

class MethodSymbol;

class ParameterSymbol : public Variable, public Symbol {
private:
    std::shared_ptr<ClassSymbol> parentClass;
    std::shared_ptr<MethodSymbol> parentMethod;
public:
    ParameterSymbol(const std::string &name);

    const std::shared_ptr<ClassSymbol> &getParentClass() const;

    void setParentClass(const std::shared_ptr<ClassSymbol> &parentClass);

    const std::shared_ptr<MethodSymbol> &getParentMethod() const;

    void setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_PARAMETERSYMBOL_H