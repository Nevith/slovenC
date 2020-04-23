/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _NOTEXPRESSION_H
#define _NOTEXPRESSION_H

#include "model/expressions/base/MonoExpression.h"
#include "model/expressions/base/OperationalExpression.h"
#include "model/visitor/AbstractModelVisitor.h"
#include <utils/TypeUtils.h>


class NotExpression : public MonoExpression, public OperationalExpression, public Expression {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    std::string getOperator() override;
};

#endif //_NOTEXPRESSION_H