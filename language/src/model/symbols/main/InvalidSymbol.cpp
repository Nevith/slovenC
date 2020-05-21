/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "InvalidSymbol.h"

/**
 * InvalidTypeSymbol implementation
 */
InvalidSymbol::InvalidSymbol(std::string name) : TypeSymbol(name) {

}

void InvalidSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitInvalidTypeSymbol(TypeUtils::cast<InvalidSymbol>(visitable));
}

const std::shared_ptr<InvalidSymbol> InvalidSymbol::INVALID = std::make_shared<InvalidSymbol>("Invalid");
