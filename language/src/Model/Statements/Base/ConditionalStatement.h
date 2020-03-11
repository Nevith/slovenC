/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CONDITIONALSTATEMENT_H
#define _CONDITIONALSTATEMENT_H

#include "StatementContainingStatement.h"
#include "../../expressions/base/Expression.h"


class ConditionalStatement : public StatementContainingStatement {
private:
    Expression *condition;

public:

    void setCondition(Expression *condition);

    Expression *getCondition() const;
};

#endif //_CONDITIONALSTATEMENT_H