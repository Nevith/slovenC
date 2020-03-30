/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ADDITIONEXPRESSION_H
#define _ADDITIONEXPRESSION_H

#include "model/expressions/base/MathExpression.h"

class AdditionExpression : public MathExpression {
public:
    std::string getOperator() override;
};

#endif //_ADDITIONEXPRESSION_H