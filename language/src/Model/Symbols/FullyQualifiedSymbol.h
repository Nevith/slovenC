/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FULLYQUALIFIEDSYMBOL_H
#define _FULLYQUALIFIEDSYMBOL_H

#include "Base/Symbol.h"
#include <string>


class FullyQualifiedSymbol : public Symbol {
public:

	std::string getFullyQualifiedName();
};

#endif //_FULLYQUALIFIEDSYMBOL_H