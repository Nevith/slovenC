//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_BOOLEANLITERAL_H
#define SLOVENC_BOOLEANLITERAL_H


#include <model/expressions/base/LiteralExpression.h>

class BooleanLiteral : public LiteralExpression<bool> {
private:
    bool value;
public:
    bool getValue() override;

    void setValue(bool value);
};


#endif //SLOVENC_BOOLEANLITERAL_H
