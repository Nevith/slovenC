/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ASSIGNMENTEXPRESSION_H
#define _ASSIGNMENTEXPRESSION_H

#include "Base/MonoExpression.h"
#include "Base/OperationalExpression.h"


class AssignmentExpression : public MonoExpression, public OperationalExpression {
public:

	Expression* getIdentifier();
};

#endif //_ASSIGNMENTEXPRESSION_H