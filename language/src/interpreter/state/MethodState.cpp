//
// Created by andraz on 28/05/2020.
//

#include <model/utils/InheritanceUtil.h>
#include "MethodState.h"

MethodState::MethodState(const Value &thisReference, std::shared_ptr<MethodSymbol> method) : thisReference(
        thisReference), method(method) {

}

Value MethodState::getValue(std::shared_ptr<Symbol> key) {
    auto it = activeValues.find(key);
    if (it == activeValues.end()) {
        throw RuntimeException("Spremenljivka '" + key->getName() + "' ni definirana.");
    }
    return activeValues[key];
}

void MethodState::setValue(std::shared_ptr<Symbol> key, Value value) {
    auto var = TypeUtils::cast<Variable>(key);
    if (!var) {
        throw RuntimeException("Vrednost lahko nastavimo le spremenljivkam");
    }
    if (InheritanceUtil::isInstanceOf(var->getType()->getResolve(), value.getType())) {
        activeValues[key] = value;
    } else {
        throw RuntimeException("Neveljavno je dodeliti vrednost tipa '" + value.getType()->getFullyQualifiedName() +
                               "' spremenljivki tipa" + var->getType()->getName());
    }
}

const Value &MethodState::getThisReference() const {
    return thisReference;
}
