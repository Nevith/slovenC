//
// Created by andraz on 16/04/2020.
//

#include "NullLiteral.h"

void NullLiteral::getValue() {

}

void NullLiteral::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitNullLiteral(TypeUtils::cast<NullLiteral>(visitable));
}
