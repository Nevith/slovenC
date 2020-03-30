//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_REFERENCEBUILDER_H
#define SLOVENC_REFERENCEBUILDER_H

#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include <model/expressions/dotted/TypeReferenceExpression.h>

using namespace antlr;

class ReferenceBuilder : public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    ReferenceBuilder(const std::shared_ptr<CurrentState> &currentState);

    antlrcpp::Any visitInheritance(SlovenCLanguageParser::InheritanceContext *ctx) override;

    antlrcpp::Any visitSuperclass(SlovenCLanguageParser::SuperclassContext *ctx) override;

    antlrcpp::Any visitClassTypeList(SlovenCLanguageParser::ClassTypeListContext *ctx) override;

    antlrcpp::Any visitClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext *ctx) override;

    antlrcpp::Any visitClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext *ctx) override;

    antlrcpp::Any visitFileNameQual(SlovenCLanguageParser::FileNameQualContext *ctx) override;

    antlrcpp::Any visitFileNameUnqual(SlovenCLanguageParser::FileNameUnqualContext *ctx) override;

    antlrcpp::Any visitResult(SlovenCLanguageParser::ResultContext *ctx) override;

    antlrcpp::Any visitPrimitiveType(SlovenCLanguageParser::PrimitiveTypeContext *ctx) override;

    antlrcpp::Any visitReferenceType(SlovenCLanguageParser::ReferenceTypeContext *ctx) override;
};


#endif //SLOVENC_REFERENCEBUILDER_H
