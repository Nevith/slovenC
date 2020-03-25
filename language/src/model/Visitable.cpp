/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Visitable.h"

/**
 * Visitable implementation
 */
tree::ParseTree *Visitable::getContext() const {
    return context;
}

void Visitable::setContext(tree::ParseTree *context) {
    Visitable::context = context;
}
