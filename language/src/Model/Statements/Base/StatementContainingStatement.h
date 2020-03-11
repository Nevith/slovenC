/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _STATEMENTCONTAININGSTATEMENT_H
#define _STATEMENTCONTAININGSTATEMENT_H

#include "Statement.h"
#include "../../expressions/base/Expression.h"
#include <vector>


class StatementContainingStatement : public Statement {
public:
    Statement *getNestedStatement() const;

    void setNestedStatement(Statement *nestedStatement);

private:
    Statement *nestedStatement;
public:
};

#endif //_STATEMENTCONTAININGSTATEMENT_H