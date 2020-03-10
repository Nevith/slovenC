/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ASSIGNMENTEXPRESSION_H
#define _ASSIGNMENTEXPRESSION_H

#include "base/MonoExpression.h"
#include "base/OperationalExpression.h"
#include "IdentifierExpression.h"

class AssignmentExpression : public MonoExpression, public OperationalExpression {
private:
    IdentifierExpression *identifier;

public:

    IdentifierExpression *getIdentifier();

    void setIdentifier(IdentifierExpression *identifier);

};

#endif //_ASSIGNMENTEXPRESSION_H