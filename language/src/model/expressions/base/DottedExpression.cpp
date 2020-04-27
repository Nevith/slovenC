/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "DottedExpression.h"

/**
 * DottedExpression implementation
 */
DottedExpression::DottedExpression(std::string name) : name(name) {

}

std::string DottedExpression::getName() const {
    return name;
}

std::string DottedExpression::getFullyQualifiedName() const {
    if (object != nullptr) {
        std::shared_ptr<DottedExpression> dotted = TypeUtils::cast<DottedExpression>(object);
        if (dotted) {
            if (!dotted->getName().empty()) {
                return dotted->getFullyQualifiedName() + "." + getName();
            }
        }
    }
    return getName();
}

const std::shared_ptr<Expression> &DottedExpression::getObject() const {
    return object;
}

void DottedExpression::setObject(const std::shared_ptr<Expression> &object) {
    DottedExpression::object = object;
}
