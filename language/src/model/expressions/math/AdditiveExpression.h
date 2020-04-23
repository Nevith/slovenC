/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ADDITIONEXPRESSION_H
#define _ADDITIONEXPRESSION_H

#include "model/expressions/base/MathExpression.h"
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class AdditiveExpression : public MathExpression {
    std::string operatorSign;

public:

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    void setOperatorSign(const std::string &operatorSign);

    std::string getOperator() override;
};

#endif //_ADDITIONEXPRESSION_H