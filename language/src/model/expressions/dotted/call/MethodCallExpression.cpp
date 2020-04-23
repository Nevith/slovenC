/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MethodCallExpression.h"


/**
 * MethodCallExpression implementation
 */

MethodCallExpression::MethodCallExpression(std::string name) : CallExpression(name) {

}

void MethodCallExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitMethodCallExpression(TypeUtils::cast<MethodCallExpression>(visitable));
}
