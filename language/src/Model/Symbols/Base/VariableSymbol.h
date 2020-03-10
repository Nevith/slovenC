/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLESYMBOL_H
#define _VARIABLESYMBOL_H

#include "Symbol.h"
#include "TypeSymbol.h"


class VariableSymbol: public Symbol {
public: 
    
TypeSymbol* getType();
};

#endif //_VARIABLESYMBOL_H