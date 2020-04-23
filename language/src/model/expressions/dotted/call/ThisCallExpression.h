/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _THISCALLEXPRESSION_H
#define _THISCALLEXPRESSION_H

#include "CallExpression.h"


class ThisCallExpression : public CallExpression {
public:
    ThisCallExpression(const std::string &name);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_THISCALLEXPRESSION_H