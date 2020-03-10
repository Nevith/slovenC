/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _OPERATIONALEXPRESSION_H
#define _OPERATIONALEXPRESSION_H

#include "Expression.h"
#include <string>

class OperationalExpression : public Expression {
public:

    virtual std::string getOperator() = 0;
};

#endif //_OPERATIONALEXPRESSION_H