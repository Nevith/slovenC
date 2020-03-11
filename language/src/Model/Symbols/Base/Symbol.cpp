/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Symbol.h"

/**
 * Symbol implementation
 */
const std::string &Symbol::getName() const {
    return name;
}

void Symbol::setName(const std::string &name) {
    Symbol::name = name;
}
