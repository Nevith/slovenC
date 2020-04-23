//
// Created by Andraz on 31/03/2020.
//

#include "ReturnStatement.h"

void ReturnStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitReturnStatement(TypeUtils::cast<ReturnStatement>(visitable));
}
