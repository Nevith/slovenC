//
// Created by andraz on 16/04/2020.
//

#include "BooleanLiteral.h"

bool BooleanLiteral::getValue() {
    return value;
}

void BooleanLiteral::setValue(bool value) {
    BooleanLiteral::value = value;
}

void BooleanLiteral::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitBooleanLiteral(TypeUtils::cast<BooleanLiteral>(visitable));
}
