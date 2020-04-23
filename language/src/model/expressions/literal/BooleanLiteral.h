//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_BOOLEANLITERAL_H
#define SLOVENC_BOOLEANLITERAL_H


#include <model/expressions/base/LiteralExpression.h>
#include "model/visitor/AbstractModelVisitor.h"
#include "utils/TypeUtils.h"

class BooleanLiteral : public LiteralExpression<bool> {
private:
    bool value;
public:
    bool getValue() override;

    void setValue(bool value);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};


#endif //SLOVENC_BOOLEANLITERAL_H
