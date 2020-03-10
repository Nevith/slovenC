/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CALLEXPRESSION_H
#define _CALLEXPRESSION_H

#include "DottedExpression.h"
#include <vector>



class CallExpression : public DottedExpression {
public:

	virtual std::vector<Expression> getArguments() = 0;
};

#endif //_CALLEXPRESSION_H