/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FORSTATEMENT_H
#define _FORSTATEMENT_H

#include "Base/StatementContainingStatement.h"
#include "Base/ConditionalStatement.h"
#include "Base/Statement.h"
#include "../Expressions/Base/Expression.h"

#include <vector>

class ForStatement: public StatementContainingStatement, public ConditionalStatement {
public: 
    
/**
 * @param return
 */
 std::vector<Statement*> getStatements();
    
 std::vector<Expression*> getExpressions();
};

#endif //_FORSTATEMENT_H