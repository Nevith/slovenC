/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _STATEMENTCONTAININGSTATEMENT_H
#define _STATEMENTCONTAININGSTATEMENT_H

#include "Statement.h"
#include "../../expressions/base/Expression.h"
#include <vector>
#include <memory>


class StatementContainingStatement : public Statement {
private:
    std::shared_ptr<Statement> nestedStatement;

public:

    std::shared_ptr<Statement> getNestedStatement() const;

    void setNestedStatement(std::shared_ptr<Statement> nestedStatement);

public:
};

#endif //_STATEMENTCONTAININGSTATEMENT_H