//
// Created by andraz on 16/04/2020.
//

#include "StringLiteral.h"

std::string StringLiteral::getValue() {
    return value;
}

void StringLiteral::setValue(const std::string &value) {
    StringLiteral::value = value;
}
