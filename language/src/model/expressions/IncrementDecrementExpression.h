/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _INCREMENTDECREMENTEXPRESSION_H
#define _INCREMENTDECREMENTEXPRESSION_H

#include "base/MonoExpression.h"
#include "base/OperationalExpression.h"


class IncrementDecrementExpression : public MonoExpression, public OperationalExpression, public Expression {
private:
    std::string incrementDecrementOperator;
public:
    std::string getOperator() override;

    void setIncrementDecrementOperator(const std::string &incrementDecrementOperator);
};

#endif //_INCREMENTDECREMENTEXPRESSION_H