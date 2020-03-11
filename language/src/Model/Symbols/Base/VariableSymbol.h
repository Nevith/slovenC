/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLESYMBOL_H
#define _VARIABLESYMBOL_H

#include "Symbol.h"
#include "TypeSymbol.h"


class VariableSymbol : public Symbol {
private:
    TypeSymbol *typeSymbol;
public:
    TypeSymbol *getTypeSymbol() const;

    void setTypeSymbol(TypeSymbol *typeSymbol);
};

#endif //_VARIABLESYMBOL_H