/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _PACKAGESYMBOL_H
#define _PACKAGESYMBOL_H

#include "../Symbols/FullyQualifiedSymbol.h"
#include "../Symbols/FileSymbol.h"
#include <vector>


class PackageSymbol : public FullyQualifiedSymbol {
public:

	/**
	 * @param name
	 */
	FileSymbol* getFile(std::string name);

	std::vector<FileSymbol*> getFiles();
};

#endif //_PACKAGESYMBOL_H