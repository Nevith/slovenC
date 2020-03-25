/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ADDITIONEXPRESSION_H
#define _ADDITIONEXPRESSION_H

#include "base/MathExpression.h"

class AdditionExpression : public MathExpression {
public:
    std::string getOperator() override;
};

#endif //_ADDITIONEXPRESSION_H