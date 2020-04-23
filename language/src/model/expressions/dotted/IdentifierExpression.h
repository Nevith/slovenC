/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _IDENTIFIEREXPRESSION_H
#define _IDENTIFIEREXPRESSION_H

#include "model/expressions/base/DottedExpression.h"
#include "model/visitor/AbstractModelVisitor.h"
#include "utils/TypeUtils.h"

class IdentifierExpression : public DottedExpression {
public:
    IdentifierExpression(const std::string &name);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_IDENTIFIEREXPRESSION_H