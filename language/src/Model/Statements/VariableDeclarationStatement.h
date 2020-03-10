/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLEDECLARATIONSTATEMENT_H
#define _VARIABLEDECLARATIONSTATEMENT_H

#include "base/Statement.h"
#include"../symbols/base/VariableSymbol.h"

class VariableDeclarationStatement : public Statement {
public:

	VariableSymbol* getVariable();
};

#endif //_VARIABLEDECLARATIONSTATEMENT_H