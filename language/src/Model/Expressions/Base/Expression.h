/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EXPRESSION_H
#define _EXPRESSION_H

#include "../../Symbols/Base/TypeSymbol.h"
#include "../../Visitable.h"


class Expression : public Visitable {
public:

	TypeSymbol* getType();
};

#endif //_EXPRESSION_H