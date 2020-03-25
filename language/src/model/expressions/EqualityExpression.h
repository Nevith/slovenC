/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EQUALITYEXPRESSION_H
#define _EQUALITYEXPRESSION_H

#include "base/OperationalExpression.h"
#include "base/DuoExpression.h"


class EqualityExpression : public OperationalExpression, public DuoExpression {
private:
    std::string equalityOperator;

public:
    std::string getOperator() override;

    void setEqualityOperator(const std::string &equalityOperator);
};

#endif //_EQUALITYEXPRESSION_H