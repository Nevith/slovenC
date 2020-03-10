/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DUOEXPRESSION_H
#define _DUOEXPRESSION_H

#include "Expression.h"


class DuoExpression : public Expression {
public:

	virtual Expression* getLeftExpression() = 0;

	virtual Expression* getRightExpression() = 0;
};

#endif //_DUOEXPRESSION_H