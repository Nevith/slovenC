/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CONDITIONALSTATEMENT_H
#define _CONDITIONALSTATEMENT_H

#include "StatementContainingStatement.h"
#include "../../expressions/base/Expression.h"


class ConditionalStatement: public StatementContainingStatement {
public: 
    
Expression* getCondition();
};

#endif //_CONDITIONALSTATEMENT_H