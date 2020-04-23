//
// Created by andraz on 16/04/2020.
//

#include "StringLiteral.h"

std::string StringLiteral::getValue() {
    return value;
}

void StringLiteral::setValue(const std::string &value) {
    StringLiteral::value = value;
}

void StringLiteral::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitStringLiteral(TypeUtils::cast<StringLiteral>(visitable));
}
