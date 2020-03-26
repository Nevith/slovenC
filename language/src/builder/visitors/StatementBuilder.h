//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_STATEMENTBUILDER_H
#define SLOVENC_STATEMENTBUILDER_H


#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include "TypeReferenceBuilder.h"

using namespace antlr;

class StatementBuilder: public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

    TypeReferenceBuilder* typeBuilder;

public:
    StatementBuilder(const std::shared_ptr<CurrentState> &currentState, TypeReferenceBuilder* typeBuilder);
};


#endif //SLOVENC_STATEMENTBUILDER_H
