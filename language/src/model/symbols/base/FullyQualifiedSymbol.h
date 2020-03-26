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
    std::shared_ptr<FullyQualifiedSymbol> parentSymbol;

public:

    FullyQualifiedSymbol(std::string name);

    virtual std::string getFullyQualifiedName() const;

    virtual std::shared_ptr<FullyQualifiedSymbol> getParentSymbol() const;

    void setParentSymbol(std::shared_ptr<FullyQualifiedSymbol> parentSymbol);

};

#endif //_FULLYQUALIFIEDSYMBOL_H