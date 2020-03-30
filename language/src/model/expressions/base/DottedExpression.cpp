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
    if (parent != nullptr) {
        if (!parent->getName().empty()) {
            return parent->getFullyQualifiedName() + "." + getName();
        }
    }
    return getName();
}

const std::shared_ptr<DottedExpression> &DottedExpression::getParent() const {
    return parent;
}

void DottedExpression::setParent(const std::shared_ptr<DottedExpression> &parent) {
    DottedExpression::parent = parent;
}
