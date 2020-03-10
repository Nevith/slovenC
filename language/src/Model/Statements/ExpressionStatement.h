/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EXPRESSIONSTATEMENT_H
#define _EXPRESSIONSTATEMENT_H

#include "base/Statement.h"
#include "../expressions/base/Expression.h"

class ExpressionStatement: public Statement {
public: 
    
Expression* getExpression();
};

#endif //_EXPRESSIONSTATEMENT_H