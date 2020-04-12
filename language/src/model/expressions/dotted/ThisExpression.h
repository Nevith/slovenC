/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _THISEXPRESSION_H
#define _THISEXPRESSION_H

#include "model/expressions/base/DottedExpression.h"
#include "IdentifierExpression.h"


class ThisExpression : public IdentifierExpression {
public:
    ThisExpression();
};

#endif //_THISEXPRESSION_H