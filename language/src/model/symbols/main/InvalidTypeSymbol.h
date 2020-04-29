/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _INVALIDTYPESYMBOL_H
#define _INVALIDTYPESYMBOL_H

#include "model/symbols/base/TypeSymbol.h"
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class InvalidTypeSymbol : public TypeSymbol {
public:
    InvalidTypeSymbol(std::string name);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    const static std::shared_ptr<InvalidTypeSymbol> INVALID_TYPE;
};

#endif //_INVALIDTYPESYMBOL_H