/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MultiplicationExpression.h"

/**
 * MultiplicationExpression implementation
 */
std::string MultiplicationExpression::getOperator() {
    return "*";
}

void MultiplicationExpression::setOperatorSign(const std::string &operationSign) {
    MultiplicationExpression::operationSign = operationSign;
}

void MultiplicationExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitMultiplicationExpression(TypeUtils::cast<MultiplicationExpression>(visitable));
}
