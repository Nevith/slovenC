/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _PRIMITIVETYPESYMBOL_H
#define _PRIMITIVETYPESYMBOL_H

#include "model/symbols/base/TypeSymbol.h"
#include "ClassSymbol.h"


class PredefinedSymbol : public ClassSymbol {
public:
    PredefinedSymbol(std::string name);

    static const PredefinedSymbol BOOLEAN;
    static const PredefinedSymbol INT;
    static const PredefinedSymbol DOUBLE;
    static const PredefinedSymbol VOID;
};

#endif //_PRIMITIVETYPESYMBOL_H