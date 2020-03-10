/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _WHILESTATEMENT_H
#define _WHILESTATEMENT_H

#include "Base/StatementContainingStatement.h"
#include "Base/ConditionalStatement.h"


class WhileStatement: public StatementContainingStatement, public ConditionalStatement {
};

#endif //_WHILESTATEMENT_H