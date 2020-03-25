/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DIVISIONEXPRESSION_H
#define _DIVISIONEXPRESSION_H

#include "base/MathExpression.h"


class DivisionExpression : public MathExpression {
public:
    std::string getOperator() override;
};

#endif //_DIVISIONEXPRESSION_H