/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CLASSSYMBOL_H
#define _CLASSSYMBOL_H

#include "base/TypeSymbol.h"
#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "MethodSymbol.h"
#include "FieldSymbol.h"
#include "MemberSymbol.h"
#include <vector>
#include <string>


class ClassSymbol : public TypeSymbol, public MemberSymbol {
private:

    std::vector<std::shared_ptr<TypeSymbol>> superClasses;
    std::vector<std::shared_ptr<ClassSymbol>> declaredClasses;
    std::vector<std::shared_ptr<MethodSymbol>> declaredMethods;
    std::vector<std::shared_ptr<FieldSymbol>> declaredFields;

public:
    ClassSymbol(std::string name);

    void addSuperClass(std::shared_ptr<TypeSymbol> superClass);
    void declareClass(std::shared_ptr<ClassSymbol> declaredClass);
    void declareMethod(std::shared_ptr<MethodSymbol> declaredMethod);
    void declareField(std::shared_ptr<FieldSymbol> declareField);
};

#endif //_CLASSSYMBOL_H