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
};

#endif //_THISCALLEXPRESSION_H