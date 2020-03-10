/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _SCOPE_H
#define _SCOPE_H

#include "Visitable.h"
#include "statements/base/Statement.h"
#include <vector>


class Scope: public Visitable {
public: 
    
std::vector<Statement*> getstatements();
};

#endif //_SCOPE_H