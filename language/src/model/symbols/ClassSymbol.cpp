/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ClassSymbol.h"

ClassSymbol::ClassSymbol(std::string name) : TypeSymbol(name) {

}

void ClassSymbol::addSuperClass(std::shared_ptr<TypeSymbol> superClass) {
    superClasses.push_back(superClass);
}

void ClassSymbol::declareClass(std::shared_ptr<ClassSymbol> declaredClass) {
    declaredClasses.push_back(declaredClass);
}

void ClassSymbol::declareMethod(std::shared_ptr<MethodSymbol> declaredMethod) {
    declaredMethods.push_back(declaredMethod);
}

void ClassSymbol::declareField(std::shared_ptr<FieldSymbol> declaredField) {
    declaredFields.push_back(declaredField);
}
