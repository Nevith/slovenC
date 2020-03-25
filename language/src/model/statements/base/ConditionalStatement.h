/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CONDITIONALSTATEMENT_H
#define _CONDITIONALSTATEMENT_H

#include <memory>
#include "StatementContainingStatement.h"
#include "../../expressions/base/Expression.h"


class ConditionalStatement : public StatementContainingStatement {
private:
    std::shared_ptr<Expression> condition;

public:

    void setCondition(std::shared_ptr<Expression> condition);

    std::shared_ptr<Expression> getCondition() const;
};

#endif //_CONDITIONALSTATEMENT_H