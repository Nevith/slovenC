//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_STRINGLITERAL_H
#define SLOVENC_STRINGLITERAL_H


#include <string>
#include <model/expressions/base/LiteralExpression.h>
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class StringLiteral : public LiteralExpression<std::string> {
private:
    std::string value;
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;

    std::string getValue() override;

    void setValue(const std::string &value);
};


#endif //SLOVENC_STRINGLITERAL_H
