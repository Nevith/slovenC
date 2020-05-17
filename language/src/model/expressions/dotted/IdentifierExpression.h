/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _IDENTIFIEREXPRESSION_H
#define _IDENTIFIEREXPRESSION_H

#include <model/symbols/base/Symbol.h>
#include "model/expressions/base/DottedExpression.h"
#include "model/visitor/AbstractModelVisitor.h"
#include "utils/TypeUtils.h"

class IdentifierExpression : public DottedExpression {
private:

    std::shared_ptr<Symbol> resolve;

public:
    IdentifierExpression(const std::string &name);

    const virtual std::shared_ptr<Symbol> &getResolve();

    void virtual setResolve(const std::shared_ptr<Symbol> &resolve);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_IDENTIFIEREXPRESSION_H