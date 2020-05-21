/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CONSTRUCTORCALLEXPRESSION_H
#define _CONSTRUCTORCALLEXPRESSION_H

#include "CallExpression.h"


class ConstructorCallExpression : public CallExpression {
private:
    std::shared_ptr<ClassSymbol> constructionClass;

public:
    ConstructorCallExpression(std::string name);

    const std::shared_ptr<ClassSymbol> &getConstructionClass() const;

    void setConstructionClass(const std::shared_ptr<ClassSymbol> &constructionClass);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};

#endif //_CONSTRUCTORCALLEXPRESSION_H