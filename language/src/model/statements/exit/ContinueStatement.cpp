//
// Created by Andraz on 31/03/2020.
//

#include "ContinueStatement.h"

void ContinueStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitContinueStatement(TypeUtils::cast<ContinueStatement>(visitable));
}
