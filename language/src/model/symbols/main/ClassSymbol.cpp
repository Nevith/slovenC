/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ClassSymbol.h"

ClassSymbol::ClassSymbol(std::string name) : TypeSymbol(name) {

}

void ClassSymbol::addSuperClass(std::shared_ptr<TypeReferenceExpression> superClass) {
    superClasses.push_back(superClass);
}

void ClassSymbol::declareClass(std::shared_ptr<ClassSymbol> declaredClass) {
    declaredClasses.push_back(declaredClass);
}

void ClassSymbol::declareMethod(std::shared_ptr<MethodSymbol> declaredMethod) {
    declaredMethods.push_back(declaredMethod);
}

void ClassSymbol::declareConstructor(std::shared_ptr<MethodSymbol> declaredConstructor) {
    constructors.push_back(declaredConstructor);
}

void ClassSymbol::declareField(std::shared_ptr<FieldSymbol> declaredField) {
    declaredFields.push_back(declaredField);
}

void ClassSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitClassSymbol(TypeUtils::cast<ClassSymbol>(visitable));
}
