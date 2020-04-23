//
// Created by Andraz on 11/04/2020.
//

#ifndef SLOVENC_PARENTHESIZEDEXPRESSION_H
#define SLOVENC_PARENTHESIZEDEXPRESSION_H


#include <model/expressions/base/MonoExpression.h>
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class ParenthesizedExpression : public MonoExpression, public Expression {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};


#endif //SLOVENC_PARENTHESIZEDEXPRESSION_H
