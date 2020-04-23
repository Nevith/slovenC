/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EQUALITYEXPRESSION_H
#define _EQUALITYEXPRESSION_H

#include "model/expressions/base/OperationalExpression.h"
#include "model/expressions/base/DuoExpression.h"
#include "model/visitor/AbstractModelVisitor.h"
#include <utils/TypeUtils.h>


class CompareExpression : public OperationalExpression, public DuoExpression, public Expression {
private:
    std::string expressionOperator;

public:
    std::string getOperator() override;

    void setOperator(const std::string &newOperator);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_EQUALITYEXPRESSION_H