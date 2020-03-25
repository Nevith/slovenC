/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EXPRESSIONSTATEMENT_H
#define _EXPRESSIONSTATEMENT_H

#include <memory>
#include "base/Statement.h"
#include "../expressions/base/Expression.h"

class ExpressionStatement : public Statement {
private:
    std::shared_ptr<Expression> expression;
public:
    std::shared_ptr<Expression> getExpression() const;

    void setExpression(std::shared_ptr<Expression> expression);
};

#endif //_EXPRESSIONSTATEMENT_H