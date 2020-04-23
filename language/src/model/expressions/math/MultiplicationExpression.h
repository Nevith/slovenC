/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MULTIPLICATIONEXPRESSION_H
#define _MULTIPLICATIONEXPRESSION_H

#include "model/expressions/base/MathExpression.h"
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class MultiplicationExpression : public MathExpression {
private:
    std::string operationSign;
public:
    std::string getOperator() override;

    void setOperatorSign(const std::string &operationSign);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_MULTIPLICATIONEXPRESSION_H