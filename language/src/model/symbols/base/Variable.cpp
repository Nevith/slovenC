/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Variable.h"

/**
 * Variable implementation
 */
Variable::Variable() {

}

const std::shared_ptr<TypeReferenceExpression> &Variable::getType() const {
    return type;
}

void Variable::setType(const std::shared_ptr<TypeReferenceExpression> &type) {
    Variable::type = type;
}
