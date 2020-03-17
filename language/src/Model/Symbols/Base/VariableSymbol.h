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
    std::shared_ptr<TypeSymbol> typeSymbol;
public:
    std::shared_ptr<TypeSymbol> getTypeSymbol() const;

    void setTypeSymbol(std::shared_ptr<TypeSymbol> typeSymbol);
};

#endif //_VARIABLESYMBOL_H