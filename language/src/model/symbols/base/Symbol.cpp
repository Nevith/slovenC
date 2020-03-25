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

Symbol::Symbol(const std::string &name) : name(name) {}
