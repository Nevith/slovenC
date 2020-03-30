/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _IDENTIFIEREXPRESSION_H
#define _IDENTIFIEREXPRESSION_H

#include "model/expressions/base/DottedExpression.h"


class IdentifierExpression : public DottedExpression {
public:
    IdentifierExpression(const std::string &name);
};

#endif //_IDENTIFIEREXPRESSION_H