/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _TYPESYMBOL_H
#define _TYPESYMBOL_H

#include "Symbol.h"
#include "FullyQualifiedSymbol.h"


class TypeSymbol : public FullyQualifiedSymbol {
public:
    TypeSymbol(std::string name);
};

#endif //_TYPESYMBOL_H