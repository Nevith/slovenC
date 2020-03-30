/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MethodSymbol.h"

/**
 * MethodSymbol implementation
 */
MethodSymbol::MethodSymbol(std::string name, const bool isConstructor) : isConstructor(isConstructor), FullyQualifiedSymbol(name) {}

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

void MethodSymbol::addParameter(const std::shared_ptr<ParameterSymbol>& parameter) {
    parameters.push_back(parameter);
}