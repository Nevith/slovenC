/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MethodSymbol.h"

/**
 * MethodSymbol implementation
 */
MethodSymbol::MethodSymbol(std::string name, const bool isConstructor) : isConstructor(isConstructor),
                                                                         FullyQualifiedSymbol(name), isSynthetic(false) {}

MethodSymbol::MethodSymbol(std::string name, const bool isConstructor, const bool isSynthetic) : isConstructor(isConstructor),
                                                                                                 FullyQualifiedSymbol(name), isSynthetic(isSynthetic) {}

const std::shared_ptr<TypeReferenceExpression> &MethodSymbol::getResult() const {
    return result;
}

void MethodSymbol::setResult(const std::shared_ptr<TypeReferenceExpression> &result) {
    MethodSymbol::result = result;
}

const bool MethodSymbol::getIsConstructor() const {
    return isConstructor;
}

const std::vector<std::shared_ptr<ParameterSymbol>> &MethodSymbol::getParameters() const {
    return parameters;
}

void MethodSymbol::addParameter(const std::shared_ptr<ParameterSymbol> &parameter) {
    parameters.push_back(parameter);
}

const std::shared_ptr<BlockStatement> MethodSymbol::getScope() const {
    return scope;
}

void MethodSymbol::setScope(const std::shared_ptr<BlockStatement> &scope) {
    if (MethodSymbol::scope) {
        return;
    }
    MethodSymbol::scope = scope;
}

void MethodSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitMethodSymbol(TypeUtils::cast<MethodSymbol>(visitable));
}

const bool MethodSymbol::getIsSynthetic() const {
    return isSynthetic;
}
