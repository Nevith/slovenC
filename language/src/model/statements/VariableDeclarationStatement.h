/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLEDECLARATIONSTATEMENT_H
#define _VARIABLEDECLARATIONSTATEMENT_H

#include <model/expressions/base/Expression.h>
#include <memory>
#include "base/Statement.h"
#include"../symbols/base/Variable.h"

class VariableDeclarationStatement : public Statement {
private:
    std::shared_ptr<Variable> variableSymbol;
    std::shared_ptr<Expression> expression;

public:
    std::shared_ptr<Variable> getVariableSymbol() const;

    void setVariableSymbol(std::shared_ptr<Variable> variableSymbol);

    std::shared_ptr<Expression> getExpression() const;

    void setExpression(std::shared_ptr<Expression> expression);
};

#endif //_VARIABLEDECLARATIONSTATEMENT_H