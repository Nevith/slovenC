/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DUOEXPRESSION_H
#define _DUOEXPRESSION_H

#include "Expression.h"


class DuoExpression : public Expression {
private:
    Expression *rightExpression;
    Expression *leftExpression;

public:

    Expression *getLeftExpression() const;

    void setLeftExpression(Expression *leftExpression);

    Expression *getRightExpression() const;

    void setRightExpression(Expression *rightExpression);

};

#endif //_DUOEXPRESSION_H