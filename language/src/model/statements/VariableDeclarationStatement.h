/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLEDECLARATIONSTATEMENT_H
#define _VARIABLEDECLARATIONSTATEMENT_H

#include <model/expressions/base/Expression.h>
#include <memory>
#include <model/symbols/variables/LocalVariableSymbol.h>
#include "base/Statement.h"
#include"../symbols/base/Variable.h"

class VariableDeclarationStatement : public Statement {
private:
    std::shared_ptr<LocalVariableSymbol> variableSymbol;

public:
    std::shared_ptr<Variable> getVariableSymbol() const;

    void setVariableSymbol(std::shared_ptr<LocalVariableSymbol> variableSymbol);

    void define(std::shared_ptr<Visitable> object) override;
};

#endif //_VARIABLEDECLARATIONSTATEMENT_H