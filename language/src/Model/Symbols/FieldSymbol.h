/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FIELDSYMBOL_H
#define _FIELDSYMBOL_H

#include "Base/VariableSymbol.h"
#include "FullyQualifiedSymbol.h"
#include "MemberSymbol.h"


class FieldSymbol: public VariableSymbol, public FullyQualifiedSymbol, public MemberSymbol {
};

#endif //_FIELDSYMBOL_H