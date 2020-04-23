/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ParameterSymbol.h"

/**
 * ParameterSymbol implementation
 */
ParameterSymbol::ParameterSymbol(const std::string &name) : Symbol(name), Variable() {}

const std::shared_ptr<ClassSymbol> &ParameterSymbol::getParentClass() const {
    return parentClass;
}

void ParameterSymbol::setParentClass(const std::shared_ptr<ClassSymbol> &parentClass) {
    ParameterSymbol::parentClass = parentClass;
}

const std::shared_ptr<MethodSymbol> &ParameterSymbol::getParentMethod() const {
    return parentMethod;
}

void ParameterSymbol::setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod) {
    ParameterSymbol::parentMethod = parentMethod;
}

void ParameterSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitParameterSymbol(TypeUtils::cast<ParameterSymbol>(visitable));
}
