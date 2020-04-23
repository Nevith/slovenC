//
// Created by Andraz on 11/04/2020.
//

#include "ParenthesizedExpression.h"

void ParenthesizedExpression::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitParenthesizedExpression(TypeUtils::cast<ParenthesizedExpression>(visitable));
}
