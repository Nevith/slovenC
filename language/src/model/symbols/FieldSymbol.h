/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FIELDSYMBOL_H
#define _FIELDSYMBOL_H

#include "base/VariableSymbol.h"
#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "model/symbols/base/MemberSymbol.h"


class FieldSymbol : public VariableSymbol, public MemberSymbol {
};

#endif //_FIELDSYMBOL_H