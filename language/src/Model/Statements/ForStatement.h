/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FORSTATEMENT_H
#define _FORSTATEMENT_H

#include "base/StatementContainingStatement.h"
#include "base/ConditionalStatement.h"
#include "base/Statement.h"
#include "../expressions/base/Expression.h"

#include <vector>

class ForStatement: public StatementContainingStatement, public ConditionalStatement {
public: 
    
/**
 * @param return
 */
 std::vector<Statement*> getstatements();
    
 std::vector<Expression*> getexpressions();
};

#endif //_FORSTATEMENT_H