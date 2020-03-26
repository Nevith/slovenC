/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DOTTEDEXPRESSION_H
#define _DOTTEDEXPRESSION_H

#include "MonoExpression.h"
#include <string>

class DottedExpression : public MonoExpression {
private:
    const std::string name;
public:

    DottedExpression(std::string name);

    std::string getName() const;
};

#endif //_DOTTEDEXPRESSION_H