/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MULTIPLICATIONEXPRESSION_H
#define _MULTIPLICATIONEXPRESSION_H

#include "model/expressions/base/MathExpression.h"


class MultiplicationExpression : public MathExpression {
private:
    std::string operationSign;
public:
    std::string getOperator() override;

    void setOperator(const std::string &operationSign);
};

#endif //_MULTIPLICATIONEXPRESSION_H