//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_TYPEREFERENCEBUILDER_H
#define SLOVENC_TYPEREFERENCEBUILDER_H

#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include <model/expressions/TypeReferenceExpression.h>

using namespace antlr;

class TypeReferenceBuilder : public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    TypeReferenceBuilder(const std::shared_ptr<CurrentState> &currentState);

    antlrcpp::Any visitInheritance(SlovenCLanguageParser::InheritanceContext *ctx) override;

    antlrcpp::Any visitSuperclass(SlovenCLanguageParser::SuperclassContext *ctx) override;

    antlrcpp::Any visitClassTypeList(SlovenCLanguageParser::ClassTypeListContext *ctx) override;

    antlrcpp::Any visitClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext *ctx) override;

    antlrcpp::Any visitClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext *ctx) override;
};


#endif //SLOVENC_TYPEREFERENCEBUILDER_H
