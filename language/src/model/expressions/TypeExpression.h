/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _TYPEEXPRESSION_H
#define _TYPEEXPRESSION_H

#include "base/Expression.h"


class TypeExpression : public Expression {

private:
    std::shared_ptr<TypeSymbol> type;

public:
    std::shared_ptr<TypeSymbol> getType() const;

    void setType1(std::shared_ptr<TypeSymbol> type);
};

#endif //_TYPEEXPRESSION_H