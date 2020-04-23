/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CONSTRUCTORCALLEXPRESSION_H
#define _CONSTRUCTORCALLEXPRESSION_H

#include "CallExpression.h"


class ConstructorCallExpression : public CallExpression {
public:
    ConstructorCallExpression(std::string name);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_CONSTRUCTORCALLEXPRESSION_H