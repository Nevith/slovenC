/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "InvalidTypeSymbol.h"

/**
 * InvalidTypeSymbol implementation
 */
InvalidTypeSymbol::InvalidTypeSymbol(std::string name) : TypeSymbol(name) {

}

void InvalidTypeSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitInvalidTypeSymbol(TypeUtils::cast<InvalidTypeSymbol>(visitable));
}

const std::shared_ptr<InvalidTypeSymbol> InvalidTypeSymbol::INVALID_TYPE = std::make_shared<InvalidTypeSymbol>("Invalid");
