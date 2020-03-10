/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FULLYQUALIFIEDSYMBOL_H
#define _FULLYQUALIFIEDSYMBOL_H

#include "base/Symbol.h"
#include <string>


class FullyQualifiedSymbol : public Symbol {
public:

	std::string getFullyQualifiedName();
};

#endif //_FULLYQUALIFIEDSYMBOL_H