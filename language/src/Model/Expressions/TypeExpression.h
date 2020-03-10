/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _TYPEEXPRESSION_H
#define _TYPEEXPRESSION_H

#include "base/Expression.h"


class TypeExpression : public Expression {

private:
    TypeSymbol *type;

public:
    TypeSymbol *getType() const;

    void setType1(TypeSymbol *type);
};

#endif //_TYPEEXPRESSION_H