//
// Created by Andraz on 24/03/2020.
//

#ifndef SLOVENC_SYMBOLBUILDER_H
#define SLOVENC_SYMBOLBUILDER_H


#include <memory>
#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include "ReferenceBuilder.h"
#include "ExpressionBuilder.h"
#include <builder/utils/ModBuilder.h>

using namespace antlr;

class SymbolBuilder : public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

    ReferenceBuilder *referenceBuilder;
    ExpressionBuilder *expressionBuilder;

public:
    SymbolBuilder(const std::shared_ptr<CurrentState> &currentState, ReferenceBuilder *referenceBuilder,
                  ExpressionBuilder *expressionBuilder);

    antlrcpp::Any visitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *ctx) override;

    antlrcpp::Any visitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *ctx) override;

    antlrcpp::Any visitMethodHeader(SlovenCLanguageParser::MethodHeaderContext *ctx) override;

    antlrcpp::Any visitMethodDeclarator(SlovenCLanguageParser::MethodDeclaratorContext *ctx) override;

    antlrcpp::Any visitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *ctx) override;

    antlrcpp::Any visitConstructorDeclarator(SlovenCLanguageParser::ConstructorDeclaratorContext *ctx) override;

    antlrcpp::Any visitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *ctx) override;

    antlrcpp::Any visitLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext *ctx) override;

    antlrcpp::Any visitFormalParameter(SlovenCLanguageParser::FormalParameterContext *ctx) override;

    antlrcpp::Any visitVariableDeclarator(SlovenCLanguageParser::VariableDeclaratorContext *ctx) override;

    antlrcpp::Any visitFieldDeclarator(SlovenCLanguageParser::FieldDeclaratorContext *ctx) override;
};


#endif //SLOVENC_SYMBOLBUILDER_H
