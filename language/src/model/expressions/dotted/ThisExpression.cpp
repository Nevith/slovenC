/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ThisExpression.h"

/**
 * ThisExpression implementation
 */
ThisExpression::ThisExpression() : IdentifierExpression("to") {}

void ThisExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitThisExpression(TypeUtils::cast<ThisExpression>(visitable));
}
