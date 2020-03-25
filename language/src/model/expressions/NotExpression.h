/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _NOTEXPRESSION_H
#define _NOTEXPRESSION_H

#include "base/MonoExpression.h"
#include "base/OperationalExpression.h"


class NotExpression : public MonoExpression, public OperationalExpression {
public:
    std::string getOperator() override;
};

#endif //_NOTEXPRESSION_H