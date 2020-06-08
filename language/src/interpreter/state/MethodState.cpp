//
// Created by andraz on 28/05/2020.
//

#include "MethodState.h"

MethodState::MethodState(const Value &thisReference, std::shared_ptr<MethodSymbol> method) : thisReference(
        thisReference), method(method) {

}

Value MethodState::getValue(std::shared_ptr<Symbol> key) {
    if (TypeUtils::cast<ThisExpression>(key)) {
        if (method->isStatic()) {
            throw RuntimeException("Referenca na '" + key->getName() + "' v statičnem kontekstu.");
        }
        return thisReference;
    }

    auto it = activeValues.find(key);
    if (it == activeValues.end()) {
        throw RuntimeException("Spremenljivka '" + key->getName() + "' ni definirana.");
    }
    return activeValues[key];
}

void MethodState::setValue(std::shared_ptr<Symbol> key, Value value) {
    if (TypeUtils::cast<ThisExpression>(key)) {
        if (method->isStatic()) {
            throw RuntimeException("Referenca na '" + key->getName() + "' v statičnem kontekstu.");
        } else {
            throw RuntimeException("Nemogoče nastaviti vrednost za '" + key->getName() + "'.");
        }
    }
    activeValues[key] = value;
}
