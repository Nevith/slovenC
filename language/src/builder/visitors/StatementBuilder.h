//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_STATEMENTBUILDER_H
#define SLOVENC_STATEMENTBUILDER_H


#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include "ReferenceBuilder.h"
#include "ExpressionBuilder.h"

using namespace antlr;

class StatementBuilder: public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

    ReferenceBuilder* referenceBuilder;
    ExpressionBuilder* expressionBuilder;

public:
    StatementBuilder(const std::shared_ptr<CurrentState> &currentState, ReferenceBuilder *referenceBuilder,
                     ExpressionBuilder *expressionBuilder);
};


#endif //SLOVENC_STATEMENTBUILDER_H
