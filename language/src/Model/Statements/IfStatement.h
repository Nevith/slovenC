/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _IFSTATEMENT_H
#define _IFSTATEMENT_H

#include "base/StatementContainingStatement.h"
#include "base/ConditionalStatement.h"
#include "ElseStatement.h"


class IfStatement : public StatementContainingStatement, public ConditionalStatement {
private:
    ElseStatement *elseStatement;

public:
    ElseStatement *getElseStatement() const;

    void setElseStatement(ElseStatement *elseStatement);
};

#endif //_IFSTATEMENT_H