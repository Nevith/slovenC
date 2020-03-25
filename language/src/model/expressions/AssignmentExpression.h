/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ASSIGNMENTEXPRESSION_H
#define _ASSIGNMENTEXPRESSION_H

#include <memory>
#include "base/MonoExpression.h"
#include "base/OperationalExpression.h"
#include "IdentifierExpression.h"

class AssignmentExpression : public MonoExpression, public OperationalExpression {
private:
    std::shared_ptr<IdentifierExpression> identifier;

public:

    std::shared_ptr<IdentifierExpression> getIdentifier();

    void setIdentifier(std::shared_ptr<IdentifierExpression> identifier);

};

#endif //_ASSIGNMENTEXPRESSION_H