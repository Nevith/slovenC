//
// Created by Andraz on 26/03/2020.
//

#include "TypeReferenceExpression.h"


TypeReferenceExpression::TypeReferenceExpression(std::string name) : IdentifierExpression(name) {

}

void TypeReferenceExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitTypeReferenceExpression(TypeUtils::cast<TypeReferenceExpression>(visitable));
}