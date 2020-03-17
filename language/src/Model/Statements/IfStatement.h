/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _IFSTATEMENT_H
#define _IFSTATEMENT_H

#include "base/StatementContainingStatement.h"
#include "base/ConditionalStatement.h"
#include "ElseStatement.h"


class IfStatement : public ConditionalStatement {
private:
    std::shared_ptr<ElseStatement> elseStatement;

public:
    std::shared_ptr<ElseStatement> getElseStatement() const;

    void setElseStatement(std::shared_ptr<ElseStatement> elseStatement);
};

#endif //_IFSTATEMENT_H