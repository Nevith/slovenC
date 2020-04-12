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
        if (!object->getName().empty()) {
            return object->getFullyQualifiedName() + "." + getName();
        }
    }
    return getName();
}

const std::shared_ptr<DottedExpression> &DottedExpression::getObject() const {
    return object;
}

void DottedExpression::setObject(const std::shared_ptr<DottedExpression> &object) {
    DottedExpression::object = object;
}
