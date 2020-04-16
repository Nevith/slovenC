//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_LITERALEXPRESSION_H
#define SLOVENC_LITERALEXPRESSION_H

#include "Expression.h"

template<typename T>
class LiteralExpression: public Expression {
public:
    virtual T getValue() = 0;
};


#endif //SLOVENC_LITERALEXPRESSION_H
