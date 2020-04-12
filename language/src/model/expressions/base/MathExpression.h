/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _MATHEXPRESSION_H
#define _MATHEXPRESSION_H

#include "DuoExpression.h"
#include "OperationalExpression.h"


class MathExpression : public DuoExpression, public OperationalExpression, public Expression {


};

#endif //_MATHEXPRESSION_H