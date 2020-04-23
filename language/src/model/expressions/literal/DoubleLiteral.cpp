//
// Created by andraz on 16/04/2020.
//

#include "DoubleLiteral.h"

double DoubleLiteral::getValue() {
    return value;
}

void DoubleLiteral::setValue(double value) {
    DoubleLiteral::value = value;
}

void DoubleLiteral::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitDoubleLiteral(TypeUtils::cast<DoubleLiteral>(visitable));
}
