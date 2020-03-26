/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Symbol.h"

/**
 * Symbol implementation
 */

Symbol::Symbol(const std::string &name) : name(name) {

}

const std::string &Symbol::getName() const {
    return name;
}