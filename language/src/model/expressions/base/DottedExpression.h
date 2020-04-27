/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DOTTEDEXPRESSION_H
#define _DOTTEDEXPRESSION_H

#include "MonoExpression.h"
#include "utils/TypeUtils.h"
#include <string>

class DottedExpression : public Expression {
private:
    const std::string name;
    std::shared_ptr<Expression> object;
public:

    DottedExpression(std::string name);

    std::string getName() const;

    virtual std::string getFullyQualifiedName() const;

    const std::shared_ptr<Expression> & getObject() const;

    void setObject(const std::shared_ptr<Expression> &object);
};

#endif //_DOTTEDEXPRESSION_H