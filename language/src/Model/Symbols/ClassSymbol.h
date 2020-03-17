/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CLASSSYMBOL_H
#define _CLASSSYMBOL_H

#include "base/TypeSymbol.h"
#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "MethodSymbol.h"
#include "FieldSymbol.h"
#include "MemberSymbol.h"
#include <vector>
#include <string>


class ClassSymbol : public TypeSymbol, public MemberSymbol {
};

#endif //_CLASSSYMBOL_H