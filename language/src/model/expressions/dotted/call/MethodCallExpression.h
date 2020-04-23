/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _METHODCALLEXPRESSION_H
#define _METHODCALLEXPRESSION_H

#include "CallExpression.h"


class MethodCallExpression : public CallExpression {
public:
    MethodCallExpression(std::string name);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_METHODCALLEXPRESSION_H