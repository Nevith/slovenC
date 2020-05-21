/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _PRIMITIVETYPESYMBOL_H
#define _PRIMITIVETYPESYMBOL_H

#include "model/symbols/base/TypeSymbol.h"
#include "ClassSymbol.h"


class PredefinedSymbol : public ClassSymbol {
public:
    PredefinedSymbol(std::string name);

    const static std::shared_ptr<PredefinedSymbol> BOOLEAN;
    const static std::shared_ptr<PredefinedSymbol> INT;
    const static std::shared_ptr<PredefinedSymbol> DOUBLE;
    const static std::shared_ptr<PredefinedSymbol> VOID;
    const static std::shared_ptr<PredefinedSymbol> STRING;
    const static std::shared_ptr<PredefinedSymbol> CONSOLE;

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    static std::shared_ptr<PredefinedSymbol> findPredefinedSymbol(std::string name);
};

#endif //_PRIMITIVETYPESYMBOL_H