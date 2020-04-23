//
// Created by Andraz on 31/03/2020.
//

#include "BreakStatement.h"

void BreakStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitBreakStatement(TypeUtils::cast<BreakStatement>(visitable));
}
