/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FULLYQUALIFIEDSYMBOL_H
#define _FULLYQUALIFIEDSYMBOL_H

#include "Symbol.h"
#include <string>
#include <vector>


class FullyQualifiedSymbol : public Symbol {
    std::vector<FullyQualifiedSymbol *> parentSymbols;

public:

    void addParentSymbol(FullyQualifiedSymbol *parentSymbol);

    std::string getFullyQualifiedName();

    void setParentSymbols(const std::vector<FullyQualifiedSymbol *> &parentSymbols);

    const std::vector<FullyQualifiedSymbol *> &getParentSymbols() const;
};

#endif //_FULLYQUALIFIEDSYMBOL_H