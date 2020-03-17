/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _FULLYQUALIFIEDSYMBOL_H
#define _FULLYQUALIFIEDSYMBOL_H

#include "Symbol.h"
#include <string>
#include <vector>
#include <memory>


class FullyQualifiedSymbol : public Symbol {
    std::vector<std::shared_ptr<FullyQualifiedSymbol>> parentSymbols;

public:

    void addParentSymbol(std::shared_ptr<FullyQualifiedSymbol> parentSymbol);

    std::string getFullyQualifiedName();

    void setParentSymbols(const std::vector<std::shared_ptr<FullyQualifiedSymbol>> &parentSymbols);

    const std::vector<std::shared_ptr<FullyQualifiedSymbol>> &getParentSymbols() const;
};

#endif //_FULLYQUALIFIEDSYMBOL_H