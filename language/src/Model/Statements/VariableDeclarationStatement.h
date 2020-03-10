/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLEDECLARATIONSTATEMENT_H
#define _VARIABLEDECLARATIONSTATEMENT_H

#include "Base/Statement.h"
#include"../Symbols/Base/VariableSymbol.h"

class VariableDeclarationStatement : public Statement {
public:

	VariableSymbol* getVariable();
};

#endif //_VARIABLEDECLARATIONSTATEMENT_H