/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ElseStatement.h"

/**
 * ElseStatement implementation
 */
void ElseStatement::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitElseStatement(TypeUtils::cast<ElseStatement>(visitable));
}
