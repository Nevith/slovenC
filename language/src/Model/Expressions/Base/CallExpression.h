/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CALLEXPRESSION_H
#define _CALLEXPRESSION_H

#include "DottedExpression.h"
#include <vector>
#include <model/expressions/IdentifierExpression.h>


class CallExpression : public IdentifierExpression {

private:
    std::vector<Expression *> arguments;

public:

    virtual std::vector<Expression *> getArguments();

    virtual void addArgument(Expression *expression);
};

#endif //_CALLEXPRESSION_H