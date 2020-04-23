/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ConstructorCallExpression.h"

/**
 * ConstructorCallExpression implementation
 */
void ConstructorCallExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitConstructorCallExpression(TypeUtils::cast<ConstructorCallExpression>(visitable));
}
