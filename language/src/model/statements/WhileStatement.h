/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _WHILESTATEMENT_H
#define _WHILESTATEMENT_H

#include "base/StatementContainingStatement.h"
#include "base/ConditionalStatement.h"


class WhileStatement : public ConditionalStatement {
public:
    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_WHILESTATEMENT_H