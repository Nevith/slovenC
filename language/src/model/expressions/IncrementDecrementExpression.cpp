/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "IncrementDecrementExpression.h"

/**
 * IncrementDecrementExpression implementation
 */
std::string IncrementDecrementExpression::getOperator() {
    return incrementDecrementOperator;
}

void IncrementDecrementExpression::setIncrementDecrementOperator(const std::string &incrementDecrementOperator) {
    IncrementDecrementExpression::incrementDecrementOperator = incrementDecrementOperator;
}

void IncrementDecrementExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitIncrementDecrementExpression(TypeUtils::cast<IncrementDecrementExpression>(visitable));
}
