/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CALLEXPRESSION_H
#define _CALLEXPRESSION_H

#include "model/expressions/base/DottedExpression.h"
#include <vector>
#include <memory>
#include <model/expressions/dotted/IdentifierExpression.h>


class CallExpression : public IdentifierExpression {

private:
    std::vector<std::shared_ptr<Expression>> arguments;
    std::vector<std::shared_ptr<MethodSymbol>> possibleMethods;
public:

    CallExpression(const std::string &name);

    virtual std::vector<std::shared_ptr<Expression>> getArguments();

    virtual void addArgument(std::shared_ptr<Expression> expression);

    const std::vector<std::shared_ptr<MethodSymbol>> &getPossibleMethods() const;

    void addPossibleMethod(const std::shared_ptr<MethodSymbol> &possibleMethod);
};

#endif //_CALLEXPRESSION_H