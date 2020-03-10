/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DOTTEDEXPRESSION_H
#define _DOTTEDEXPRESSION_H

#include "MonoExpression.h"
#include <string>

class DottedExpression: public MonoExpression {
public: 
    
    virtual std::string getName() = 0;
};

#endif //_DOTTEDEXPRESSION_H