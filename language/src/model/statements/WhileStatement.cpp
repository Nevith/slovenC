/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "WhileStatement.h"

/**
 * WhileStatement implementation
 */
void WhileStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitWhileStatement(TypeUtils::cast<WhileStatement>(visitable));
}
