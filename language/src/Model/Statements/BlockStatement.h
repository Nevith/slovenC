/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _BLOCKSTATEMENT_H
#define _BLOCKSTATEMENT_H

#include "base/Statement.h"
#include "../Scope.h"


class BlockStatement : public Statement, public Scope {
};

#endif //_BLOCKSTATEMENT_H