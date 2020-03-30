/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "LocalVariableSymbol.h"

/**
 * LocalVariableSymbol implementation
 */
LocalVariableSymbol::LocalVariableSymbol(const std::string &name) : Symbol(name) {}

const std::shared_ptr<Expression> &LocalVariableSymbol::getInitialValue() const {
    return initialValue;
}

void LocalVariableSymbol::setInitialValue(const std::shared_ptr<Expression> &initialValue) {
    LocalVariableSymbol::initialValue = initialValue;
}

const std::shared_ptr<ClassSymbol> &LocalVariableSymbol::getParentClass() const {
    return parentClass;
}

void LocalVariableSymbol::setParentClass(const std::shared_ptr<ClassSymbol> &parentClass) {
    LocalVariableSymbol::parentClass = parentClass;
}

const std::shared_ptr<MethodSymbol> &LocalVariableSymbol::getParentMethod() const {
    return parentMethod;
}

void LocalVariableSymbol::setParentMethod(const std::shared_ptr<MethodSymbol> &parentMethod) {
    LocalVariableSymbol::parentMethod = parentMethod;
}

const std::shared_ptr<Scope> &LocalVariableSymbol::getParenScope() const {
    return parenScope;
}

void LocalVariableSymbol::setParenScope(const std::shared_ptr<Scope> &parenScope) {
    LocalVariableSymbol::parenScope = parenScope;
}
