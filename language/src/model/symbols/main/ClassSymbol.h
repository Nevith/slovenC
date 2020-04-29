/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CLASSSYMBOL_H
#define _CLASSSYMBOL_H

#include "model/symbols/base/TypeSymbol.h"
#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "MethodSymbol.h"
#include "model/symbols/variables/FieldSymbol.h"
#include "model/symbols/base/Member.h"
#include <model/expressions/dotted/TypeReferenceExpression.h>
#include <vector>
#include <string>


class ClassSymbol : public TypeSymbol, public Member {
private:

    std::vector<std::shared_ptr<TypeReferenceExpression>> superClasses;
    std::vector<std::shared_ptr<ClassSymbol>> declaredClasses;
    std::vector<std::shared_ptr<MethodSymbol>> declaredMethods;
    std::vector<std::shared_ptr<MethodSymbol>> constructors;
    std::vector<std::shared_ptr<FieldSymbol>> declaredFields;

public:
    ClassSymbol(std::string name);

    const std::vector<std::shared_ptr<TypeReferenceExpression>> &getSuperClasses() const;

    const std::vector<std::shared_ptr<ClassSymbol>> &getDeclaredClasses() const;

    const std::vector<std::shared_ptr<MethodSymbol>> &getDeclaredMethods() const;

    const std::vector<std::shared_ptr<MethodSymbol>> &getConstructors() const;

    const std::vector<std::shared_ptr<FieldSymbol>> &getDeclaredFields() const;

    void addSuperClass(std::shared_ptr<TypeReferenceExpression> superClass);

    void declareClass(std::shared_ptr<ClassSymbol> declaredClass);

    void declareMethod(std::shared_ptr<MethodSymbol> declaredMethod);

    void declareConstructor(std::shared_ptr<MethodSymbol> declaredConstructor);

    void declareField(std::shared_ptr<FieldSymbol> declareField);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_CLASSSYMBOL_H