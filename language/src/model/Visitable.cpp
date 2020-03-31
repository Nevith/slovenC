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

const std::shared_ptr<FileSymbol> &Visitable::getFileSymbol() const {
    return fileSymbol;
}

void Visitable::setFileSymbol(const std::shared_ptr<FileSymbol> &fileSymbol) {
    Visitable::fileSymbol = fileSymbol;
}

void Visitable::visit() {

}
