/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _INCREMENTDECREMENTEXPRESSION_H
#define _INCREMENTDECREMENTEXPRESSION_H

#include "base/MonoExpression.h"
#include "base/OperationalExpression.h"
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class IncrementDecrementExpression : public MonoExpression, public OperationalExpression, public Expression {
private:
    std::string incrementDecrementOperator;
public:
    std::string getOperator() override;

    void setIncrementDecrementOperator(const std::string &incrementDecrementOperator);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_INCREMENTDECREMENTEXPRESSION_H