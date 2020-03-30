/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VARIABLESYMBOL_H
#define _VARIABLESYMBOL_H

#include <model/expressions/dotted/TypeReferenceExpression.h>
#include "Symbol.h"
#include "TypeSymbol.h"


class Variable {
private:
    std::shared_ptr<TypeReferenceExpression> type;
public:
    Variable();

    const std::shared_ptr<TypeReferenceExpression> &getType() const;

    void setType(const std::shared_ptr<TypeReferenceExpression> &type);
};

#endif //_VARIABLESYMBOL_H