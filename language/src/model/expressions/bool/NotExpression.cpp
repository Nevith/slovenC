/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "NotExpression.h"

/**
 * NotExpression implementation
 */

std::string NotExpression::getOperator() {
    return "!";
}

void NotExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitNotExpression(TypeUtils::cast<NotExpression>(visitable));
}
