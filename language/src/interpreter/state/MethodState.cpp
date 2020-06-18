//
// Created by andraz on 28/05/2020.
//

#include <model/utils/InheritanceUtil.h>
#include <interpreter/SlovenCRuntimeException.h>
#include "MethodState.h"

MethodState::MethodState(const Value &thisReference, std::shared_ptr<MethodSymbol> method) : thisReference(
        thisReference), method(method) {

}

MethodState::MethodState() {

}

Value MethodState::getValue(std::shared_ptr<Symbol> key) {
    auto it = activeValues.find(key);
    if (it == activeValues.end()) {
        throw SlovenCRuntimeException("Spremenljivka '" + key->getName() + "' ni definirana.");
    }
    return activeValues[key];
}

void MethodState::setValue(std::shared_ptr<Symbol> key, Value value) {
    auto var = TypeUtils::cast<Variable>(key);
    if (!var) {
        throw SlovenCRuntimeException("Vrednost lahko nastavimo le spremenljivkam");
    }
    if (InheritanceUtil::isInstanceOf(value.getType(), var->getType()->getResolve())) {
        activeValues[key] = value;
    } else {
        throw SlovenCRuntimeException("Neveljavno je dodeliti vrednost tipa '" + value.getType()->getFullyQualifiedName() +
                               "' spremenljivki tipa '" + var->getType()->getName() + "'");
    }
}

const Value &MethodState::getThisReference() const {
    return thisReference;
}
