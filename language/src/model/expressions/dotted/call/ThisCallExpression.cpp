/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ThisCallExpression.h"

ThisCallExpression::ThisCallExpression(const std::string &name) : CallExpression(name) {}

void ThisCallExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitThisCallExpression(TypeUtils::cast<ThisCallExpression>(visitable));
}
