//
// Created by Andraz on 26/03/2020.
//

#ifndef SLOVENC_TYPEREFERENCEEXPRESSION_H
#define SLOVENC_TYPEREFERENCEEXPRESSION_H

#include <model/symbols/base/TypeSymbol.h>
#include <model/expressions/base/DottedExpression.h>
#include "IdentifierExpression.h"

class TypeReferenceExpression : public IdentifierExpression {
public:

    TypeReferenceExpression(std::string name);

    void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) override;
};


#endif // SLOVENC_TYPEREFERENCEEXPRESSION_H
