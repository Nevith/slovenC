//
// Created by andraz on 17/04/2020.
//

#include "AbstractModelVisitor.h"

void AbstractModelVisitor::visit(std::shared_ptr<Visitable> visitable) {
    if (visitable) {
        visitable->accept(this, visitable);
    }
}
