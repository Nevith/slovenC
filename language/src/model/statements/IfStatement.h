/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _IFSTATEMENT_H
#define _IFSTATEMENT_H

#include "base/StatementContainingStatement.h"
#include "base/ConditionalStatement.h"
#include "ElseStatement.h"
#include <utils/TypeUtils.h>


class IfStatement : public ConditionalStatement {
private:
    std::shared_ptr<ElseStatement> elseStatement;

public:
    std::shared_ptr<ElseStatement> getElseStatement() const;

    void define(std::shared_ptr<Visitable> object) override;
};

#endif //_IFSTATEMENT_H