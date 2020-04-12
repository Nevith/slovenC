/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ASSIGNMENTEXPRESSION_H
#define _ASSIGNMENTEXPRESSION_H

#include <memory>
#include "base/MonoExpression.h"
#include "base/OperationalExpression.h"
#include "model/expressions/dotted/IdentifierExpression.h"

class AssignmentExpression : public MonoExpression, public OperationalExpression, public Expression {
private:
    std::shared_ptr<Expression> assignee;

public:

    std::shared_ptr<Expression> getIdentifier();

    void setIdentifier(std::shared_ptr<Expression> identifier);

    std::string getOperator() override;
};

#endif //_ASSIGNMENTEXPRESSION_H