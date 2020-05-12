//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_STATEMENTBUILDER_H
#define SLOVENC_STATEMENTBUILDER_H


#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include "ReferenceBuilder.h"
#include "ExpressionBuilder.h"
#include "SymbolBuilder.h"

using namespace antlr;

class StatementBuilder : public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

    ReferenceBuilder *referenceBuilder;
    ExpressionBuilder *expressionBuilder;
    SymbolBuilder *symbolBuilder;

    void defineParents(std::shared_ptr<Statement> statement, antlr4::ParserRuleContext *context);

public:
    StatementBuilder(const std::shared_ptr<CurrentState> &currentState, ReferenceBuilder *referenceBuilder,
                     ExpressionBuilder *expressionBuilder, SymbolBuilder *symbolBuilder);

    antlrcpp::Any visitBlockStatement(SlovenCLanguageParser::BlockStatementContext *ctx) override;

    antlrcpp::Any visitLocalVariableDeclarationStatement(
            SlovenCLanguageParser::LocalVariableDeclarationStatementContext *ctx) override;

    antlrcpp::Any visitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *ctx) override;

    antlrcpp::Any visitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *ctx) override;

    antlrcpp::Any visitWhileStatement(SlovenCLanguageParser::WhileStatementContext *ctx) override;

    antlrcpp::Any visitReturnStatement(SlovenCLanguageParser::ReturnStatementContext *ctx) override;

    antlrcpp::Any visitBreakStatement(SlovenCLanguageParser::BreakStatementContext *ctx) override;

    antlrcpp::Any visitContinueStatement(SlovenCLanguageParser::ContinueStatementContext *ctx) override;

    antlrcpp::Any visitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *ctx) override;

    antlrcpp::Any visitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *ctx) override;

    antlrcpp::Any visitElseStatement(SlovenCLanguageParser::ElseStatementContext *ctx) override;
};


#endif //SLOVENC_STATEMENTBUILDER_H
