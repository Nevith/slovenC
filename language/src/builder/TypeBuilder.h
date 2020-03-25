//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_TYPEBUILDER_H
#define SLOVENC_TYPEBUILDER_H

#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "CurrentState.h"

using namespace antlr;

class TypeBuilder : public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    TypeBuilder(const std::shared_ptr<CurrentState> &currentState);


};


#endif //SLOVENC_TYPEBUILDER_H
