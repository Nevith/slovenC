/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _DOTTEDEXPRESSION_H
#define _DOTTEDEXPRESSION_H

#include "MonoExpression.h"
#include <string>

class DottedExpression : public Expression {
private:
    const std::string name;
    std::shared_ptr<DottedExpression> parent;
public:

    DottedExpression(std::string name);

    std::string getName() const;

    virtual std::string getFullyQualifiedName() const;

    const std::shared_ptr<DottedExpression> &getParent() const;

    void setParent(const std::shared_ptr<DottedExpression> &parent);
};

#endif //_DOTTEDEXPRESSION_H