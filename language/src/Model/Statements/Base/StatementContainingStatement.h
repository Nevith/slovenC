/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _STATEMENTCONTAININGSTATEMENT_H
#define _STATEMENTCONTAININGSTATEMENT_H

#include "Statement.h"
#include "../../expressions/base/Expression.h"
#include <vector>


class StatementContainingStatement: public Statement {
public: 
    
std::vector<Expression*> getNestedStatement();
};

#endif //_STATEMENTCONTAININGSTATEMENT_H