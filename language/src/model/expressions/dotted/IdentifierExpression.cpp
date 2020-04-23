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
