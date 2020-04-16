//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_STRINGLITERAL_H
#define SLOVENC_STRINGLITERAL_H


#include <string>
#include <model/expressions/base/LiteralExpression.h>

class StringLiteral : public LiteralExpression<std::string> {
private:
    std::string value;
public:
    std::string getValue() override;

    void setValue(const std::string &value);
};


#endif //SLOVENC_STRINGLITERAL_H
