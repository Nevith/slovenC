//
// Created by Andraz on 31/03/2020.
//

#include "ThrowStatement.h"

void ThrowStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitThrowStatement(TypeUtils::cast<ThrowStatement>(visitable));
}
