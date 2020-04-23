/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "InvalidTypeSymbol.h"

/**
 * InvalidTypeSymbol implementation
 */
void InvalidTypeSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitInvalidTypeSymbol(TypeUtils::cast<InvalidTypeSymbol>(visitable));
}
