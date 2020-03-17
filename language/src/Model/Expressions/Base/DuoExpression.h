/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DUOEXPRESSION_H
#define _DUOEXPRESSION_H

#include <memory>
#include "Expression.h"


class DuoExpression : public Expression {
private:
    std::shared_ptr<Expression> rightExpression;
    std::shared_ptr<Expression> leftExpression;

public:

    std::shared_ptr<Expression> getLeftExpression() const;

    void setLeftExpression(std::shared_ptr<Expression> leftExpression);

    std::shared_ptr<Expression> getRightExpression() const;

    void setRightExpression(std::shared_ptr<Expression> rightExpression);

};

#endif //_DUOEXPRESSION_H