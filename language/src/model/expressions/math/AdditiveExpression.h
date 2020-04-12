/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ADDITIONEXPRESSION_H
#define _ADDITIONEXPRESSION_H

#include "model/expressions/base/MathExpression.h"

class AdditiveExpression : public MathExpression {
    std::string operatorSign;

public:
    void setOperatorSign(const std::string &operatorSign);

    std::string getOperator() override;
};

#endif //_ADDITIONEXPRESSION_H