//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_STATEMENTBUILDER_H
#define SLOVENC_STATEMENTBUILDER_H


#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "CurrentState.h"

using namespace antlr;

class StatementBuilder: public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    StatementBuilder(const std::shared_ptr<CurrentState> &currentState);
};


#endif //SLOVENC_STATEMENTBUILDER_H
