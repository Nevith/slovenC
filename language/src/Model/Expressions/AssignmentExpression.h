/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ASSIGNMENTEXPRESSION_H
#define _ASSIGNMENTEXPRESSION_H

#include "base/MonoExpression.h"
#include "base/OperationalExpression.h"


class AssignmentExpression : public MonoExpression, public OperationalExpression {
public:

	Expression* getIdentifier();
};

#endif //_ASSIGNMENTEXPRESSION_H