/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MONOEXPRESSION_H
#define _MONOEXPRESSION_H

#include "Expression.h"


class MonoExpression : public Expression {

private:
    Expression *expression;


public:

    virtual Expression *getExpression();

    virtual void setExpression(Expression *expression);
};

#endif //_MONOEXPRESSION_H