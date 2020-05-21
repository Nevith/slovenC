/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ConstructorCallExpression.h"


/**
 * ConstructorCallExpression implementation
 */
ConstructorCallExpression::ConstructorCallExpression(std::string name) : CallExpression(name) {

}

void ConstructorCallExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitConstructorCallExpression(TypeUtils::cast<ConstructorCallExpression>(visitable));
}

const std::shared_ptr<ClassSymbol> &ConstructorCallExpression::getConstructionClass() const {
    return constructionClass;
}

void ConstructorCallExpression::setConstructionClass(const std::shared_ptr<ClassSymbol> &constructionClass) {
    ConstructorCallExpression::constructionClass = constructionClass;
}
