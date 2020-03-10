/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EXPRESSIONSTATEMENT_H
#define _EXPRESSIONSTATEMENT_H

#include "Base/Statement.h"
#include "../Expressions/Base/Expression.h"

class ExpressionStatement: public Statement {
public: 
    
Expression* getExpression();
};

#endif //_EXPRESSIONSTATEMENT_H