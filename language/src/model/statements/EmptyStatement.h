/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EMPTYSTATEMENT_H
#define _EMPTYSTATEMENT_H

#include "base/Statement.h"
#include "utils/TypeUtils.h"
#include "model/visitor/AbstractModelVisitor.h"

class EmptyStatement : public Statement {
public:
    void define(std::shared_ptr<Visitable> object) override;

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_EMPTYSTATEMENT_H