/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FILESYMBOL_H
#define _FILESYMBOL_H

#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "ClassSymbol.h"
#include <string>

class FileSymbol : public FullyQualifiedSymbol {
public:

	std::vector<ClassSymbol*> getClasses();

	/**
	 * @param name
	 */
	ClassSymbol *getClass(std::string name);
};

#endif //_FILESYMBOL_H