/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "EmptyStatement.h"

/**
 * EmptyStatement implementation
 */
void EmptyStatement::define(std::shared_ptr<Visitable> object) {

}

void EmptyStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitEmptyStatement(TypeUtils::cast<EmptyStatement>(visitable));
}
