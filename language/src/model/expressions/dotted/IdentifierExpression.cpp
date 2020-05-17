/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "IdentifierExpression.h"

/**
 * IdentifierExpression implementation
 */
IdentifierExpression::IdentifierExpression(const std::string &name) : DottedExpression(name) {}

void IdentifierExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitIdentifierExpression(TypeUtils::cast<IdentifierExpression>(visitable));
}

const std::shared_ptr<Symbol> &IdentifierExpression::getResolve() {
    return resolve;
}

void IdentifierExpression::setResolve(const std::shared_ptr<Symbol> &resolve) {
    IdentifierExpression::resolve = resolve;
}
