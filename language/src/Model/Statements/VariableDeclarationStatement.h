/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLEDECLARATIONSTATEMENT_H
#define _VARIABLEDECLARATIONSTATEMENT_H

#include <model/expressions/base/Expression.h>
#include "base/Statement.h"
#include"../symbols/base/VariableSymbol.h"

class VariableDeclarationStatement : public Statement {
private:
    VariableSymbol *variableSymbol;
    Expression *expression;

public:
    VariableSymbol *getVariableSymbol() const;

    void setVariableSymbol(VariableSymbol *variableSymbol);

    Expression *getExpression() const;

    void setExpression(Expression *expression);
};

#endif //_VARIABLEDECLARATIONSTATEMENT_H