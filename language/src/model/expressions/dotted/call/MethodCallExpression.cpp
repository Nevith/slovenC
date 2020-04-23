/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MethodCallExpression.h"

/**
 * MethodCallExpression implementation
 */
void MethodCallExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitMethodCallExpression(TypeUtils::cast<MethodCallExpression>(visitable));
}
