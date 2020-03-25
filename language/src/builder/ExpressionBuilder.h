//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_EXPRESSIONBUILDER_H
#define SLOVENC_EXPRESSIONBUILDER_H


#include <memory>
#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "CurrentState.h"

using namespace antlr;

class ExpressionBuilder: public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    ExpressionBuilder(const std::shared_ptr<CurrentState> &currentState);
};


#endif //SLOVENC_EXPRESSIONBUILDER_H
