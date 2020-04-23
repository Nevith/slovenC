//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_DOUBLELITERAL_H
#define SLOVENC_DOUBLELITERAL_H


#include <model/expressions/base/LiteralExpression.h>
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class DoubleLiteral: public LiteralExpression<double> {
private:
    double value;

public:
    double getValue() override;

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    void setValue(double value);
};


#endif //SLOVENC_DOUBLELITERAL_H
