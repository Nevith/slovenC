//
// Created by Andraz on 27/03/2020.
//

#ifndef SLOVENC_PACKAGEORFILEREFERENCEEXPRESSION_H
#define SLOVENC_PACKAGEORFILEREFERENCEEXPRESSION_H


#include "IdentifierExpression.h"

class FullyQualifiedSymbol;

class PackageOrFileReferenceExpression : public IdentifierExpression {

public:
    PackageOrFileReferenceExpression(std::string name);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};


#endif //SLOVENC_PACKAGEORFILEREFERENCEEXPRESSION_H
