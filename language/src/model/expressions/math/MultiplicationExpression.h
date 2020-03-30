/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MULTIPLICATIONEXPRESSION_H
#define _MULTIPLICATIONEXPRESSION_H

#include "model/expressions/base/MathExpression.h"


class MultiplicationExpression : public MathExpression {
public:
    std::string getOperator() override;
};

#endif //_MULTIPLICATIONEXPRESSION_H