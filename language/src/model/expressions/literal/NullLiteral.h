//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_NULLLITERAL_H
#define SLOVENC_NULLLITERAL_H


#include <model/expressions/base/LiteralExpression.h>

class NullLiteral: public LiteralExpression<void> {
public:
    void getValue() override;
};


#endif //SLOVENC_NULLLITERAL_H
