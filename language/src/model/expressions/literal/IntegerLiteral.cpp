//
// Created by andraz on 16/04/2020.
//

#include "IntegerLiteral.h"

int IntegerLiteral::getValue() {
    return value;
}

void IntegerLiteral::setValue(int value) {
    IntegerLiteral::value = value;
}

void IntegerLiteral::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitIntegerLiteral(TypeUtils::cast<IntegerLiteral>(visitable));
}
