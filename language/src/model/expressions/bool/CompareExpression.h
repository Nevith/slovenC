/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EQUALITYEXPRESSION_H
#define _EQUALITYEXPRESSION_H

#include "model/expressions/base/OperationalExpression.h"
#include "model/expressions/base/DuoExpression.h"


class CompareExpression : public OperationalExpression, public DuoExpression, public Expression {
private:
    std::string expressionOperator;

public:
    std::string getOperator() override;

    void setOperator(const std::string &newOperator);
};

#endif //_EQUALITYEXPRESSION_H