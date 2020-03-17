/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FORSTATEMENT_H
#define _FORSTATEMENT_H

#include "base/StatementContainingStatement.h"
#include "base/ConditionalStatement.h"
#include "base/Statement.h"
#include "../expressions/base/Expression.h"
#include "VariableDeclarationStatement.h"

#include <vector>

class ForStatement : public ConditionalStatement {
private:
    std::vector<std::shared_ptr<VariableDeclarationStatement>> variableDeclarationStatements;
    std::vector<std::shared_ptr<Expression>> updateExpressions;

public:
    const std::vector<std::shared_ptr<VariableDeclarationStatement>> &getVariableDeclarationStatements() const;

    const std::vector<std::shared_ptr<Expression>> &getUpdateExpressions() const;

    const void
    addVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> variableDeclarationStatement);

    const void addUpdateExpression(std::shared_ptr<Expression> expression);
/**
 * @param return
 */
};

#endif //_FORSTATEMENT_H