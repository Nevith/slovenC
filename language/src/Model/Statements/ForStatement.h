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
    std::vector<VariableDeclarationStatement *> variableDeclarationStatements;
    std::vector<Expression *> updateExpressions;

public:
    const std::vector<VariableDeclarationStatement *> &getVariableDeclarationStatements() const;

    const std::vector<Expression *> &getUpdateExpressions() const;

    const void addVariableDeclarationStatement(VariableDeclarationStatement *variableDeclarationStatement);

    const void addUpdateExpression(Expression *expression);
/**
 * @param return
 */
};

#endif //_FORSTATEMENT_H