/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MONOEXPRESSION_H
#define _MONOEXPRESSION_H

#include "Expression.h"


class MonoExpression : public Expression {
public:

	virtual Expression* getExpression() = 0;
};

#endif //_MONOEXPRESSION_H