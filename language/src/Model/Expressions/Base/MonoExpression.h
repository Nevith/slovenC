/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MONOEXPRESSION_H
#define _MONOEXPRESSION_H

#include <memory>
#include "Expression.h"


class MonoExpression : public Expression {

private:
    std::shared_ptr<Expression> expression;


public:

    virtual std::shared_ptr<Expression> getExpression();

    virtual void setExpression(std::shared_ptr<Expression> expression);
};

#endif //_MONOEXPRESSION_H