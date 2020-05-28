/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _PRIMITIVETYPESYMBOL_H
#define _PRIMITIVETYPESYMBOL_H

#include "model/symbols/base/TypeSymbol.h"
#include "model/symbols/main/ClassSymbol.h"
#include "model/symbols/variables//ParameterSymbol.h"
#include "model/expressions/dotted/TypeReferenceExpression.h"
#include "model/Constants.h"


class PredefinedSymbol : public ClassSymbol {
public:
    PredefinedSymbol(std::string name);

    const static std::shared_ptr<PredefinedSymbol> OBJECT;
    const static std::shared_ptr<PredefinedSymbol> BOOLEAN;
    const static std::shared_ptr<PredefinedSymbol> INT;
    const static std::shared_ptr<PredefinedSymbol> DOUBLE;
    const static std::shared_ptr<PredefinedSymbol> VOID;
    const static std::shared_ptr<PredefinedSymbol> STRING;
    const static std::shared_ptr<PredefinedSymbol> CONSOLE;
    const static std::shared_ptr<PredefinedSymbol> LIST;

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    static std::shared_ptr<PredefinedSymbol> findPredefinedSymbol(std::string name);

    static void initPredefinedSymbols();

private:
    void init();
};

#endif //_PRIMITIVETYPESYMBOL_H