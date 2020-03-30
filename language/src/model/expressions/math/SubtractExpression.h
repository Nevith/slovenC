/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _SUBTRACTEXPRESSION_H
#define _SUBTRACTEXPRESSION_H

#include "model/expressions/base/MathExpression.h"


class SubtractExpression : public MathExpression {
public:
    std::string getOperator() override;
};

#endif //_SUBTRACTEXPRESSION_H