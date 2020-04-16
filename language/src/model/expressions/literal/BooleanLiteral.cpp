//
// Created by andraz on 16/04/2020.
//

#include "BooleanLiteral.h"

bool BooleanLiteral::getValue() {
    return value;
}

void BooleanLiteral::setValue(bool value) {
    BooleanLiteral::value = value;
}
