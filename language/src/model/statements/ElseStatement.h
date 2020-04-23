/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _ELSESTATEMENT_H
#define _ELSESTATEMENT_H

#include "base/StatementContainingStatement.h"


class ElseStatement : public StatementContainingStatement {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_ELSESTATEMENT_H