/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _THISEXPRESSION_H
#define _THISEXPRESSION_H

#include "model/expressions/base/DottedExpression.h"
#include "IdentifierExpression.h"


class ThisExpression : public IdentifierExpression {
private:
    std::shared_ptr<ClassSymbol> clazz;
public:
    ThisExpression();

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_THISEXPRESSION_H