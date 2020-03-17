/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CALLEXPRESSION_H
#define _CALLEXPRESSION_H

#include "DottedExpression.h"
#include <vector>
#include <memory>
#include <model/expressions/IdentifierExpression.h>


class CallExpression : public IdentifierExpression {

private:
    std::vector<std::shared_ptr<Expression>> arguments;

public:

    virtual std::vector<std::shared_ptr<Expression>> getArguments();

    virtual void addArgument(std::shared_ptr<Expression> expression);
};

#endif //_CALLEXPRESSION_H