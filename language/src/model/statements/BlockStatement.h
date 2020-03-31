/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _BLOCKSTATEMENT_H
#define _BLOCKSTATEMENT_H

#include "base/Statement.h"
#include "model/Scope.h"

class BlockStatement : public Statement, public Scope {
public:
    void define(std::shared_ptr<Visitable> object) override;
};

#endif //_BLOCKSTATEMENT_H