/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _BLOCKSTATEMENT_H
#define _BLOCKSTATEMENT_H

#include "base/Statement.h"
#include "model/Scope.h"
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class BlockStatement : public Statement, public Scope {
public:
    void define(std::shared_ptr<Visitable> object) override;

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_BLOCKSTATEMENT_H