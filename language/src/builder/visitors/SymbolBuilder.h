//
// Created by Andraz on 24/03/2020.
//

#ifndef SLOVENC_SYMBOLBUILDER_H
#define SLOVENC_SYMBOLBUILDER_H


#include <memory>
#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include "TypeReferenceBuilder.h"
#include <builder/utils/ModBuilder.h>

using namespace antlr;

class SymbolBuilder: public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

    TypeReferenceBuilder* typeBuilder;

public:
    SymbolBuilder(const std::shared_ptr<CurrentState> &currentState, TypeReferenceBuilder* typeBuilder);

    antlrcpp::Any visitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *ctx) override;
};


#endif //SLOVENC_SYMBOLBUILDER_H
