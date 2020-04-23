//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_NULLLITERAL_H
#define SLOVENC_NULLLITERAL_H


#include <model/expressions/base/LiteralExpression.h>
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class NullLiteral: public LiteralExpression<void> {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    void getValue() override;
};


#endif //SLOVENC_NULLLITERAL_H
