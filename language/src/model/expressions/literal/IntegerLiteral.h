//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_INTEGERLITERAL_H
#define SLOVENC_INTEGERLITERAL_H


#include <model/expressions/base/LiteralExpression.h>

class IntegerLiteral: public LiteralExpression<int> {
private:
    int value;
public:
    int getValue() override;

    void setValue(int value);
};


#endif //SLOVENC_INTEGERLITERAL_H
