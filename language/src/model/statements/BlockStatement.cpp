/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "BlockStatement.h"

/**
 * BlockStatement implementation
 */
void BlockStatement::define(std::shared_ptr<Statement> object) {

}

void BlockStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitBlockStatement(TypeUtils::cast<BlockStatement>(visitable));
}
