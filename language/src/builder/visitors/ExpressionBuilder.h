//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_EXPRESSIONBUILDER_H
#define SLOVENC_EXPRESSIONBUILDER_H


#include <memory>
#include <antlr/SlovenCLanguageParserBaseVisitor.h>
#include "builder/utils/CurrentState.h"
#include "ReferenceBuilder.h"

using namespace antlr;

class ExpressionBuilder : public SlovenCLanguageParserBaseVisitor {
private:
    const std::shared_ptr<CurrentState> currentState;

    ReferenceBuilder *referenceBuilder;

    void defineParents(std::shared_ptr<Expression> expression, antlr4::ParserRuleContext *context);

public:

    ExpressionBuilder(const std::shared_ptr<CurrentState> &currentState, ReferenceBuilder *referenceBuilder);

    antlrcpp::Any
    visitPostIncrementDecrementExpression(SlovenCLanguageParser::PostIncrementDecrementExpressionContext *ctx) override;

    antlrcpp::Any visitInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext *ctx) override;

    antlrcpp::Any visitAdditiveExpression(SlovenCLanguageParser::AdditiveExpressionContext *ctx) override;

    antlrcpp::Any visitRelationalExpression(SlovenCLanguageParser::RelationalExpressionContext *ctx) override;

    antlrcpp::Any visitThisCallExpression(SlovenCLanguageParser::ThisCallExpressionContext *ctx) override;

    antlrcpp::Any visitPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext *ctx) override;

    antlrcpp::Any visitNegateExpression(SlovenCLanguageParser::NegateExpressionContext *ctx) override;

    antlrcpp::Any visitAssignmentExpression(SlovenCLanguageParser::AssignmentExpressionContext *ctx) override;

    antlrcpp::Any visitConditionalAndExpression(SlovenCLanguageParser::ConditionalAndExpressionContext *ctx) override;

    antlrcpp::Any visitDottedExpression(SlovenCLanguageParser::DottedExpressionContext *ctx) override;

    antlrcpp::Any visitCompareExpression(SlovenCLanguageParser::CompareExpressionContext *ctx) override;

    antlrcpp::Any visitCallExpression(SlovenCLanguageParser::CallExpressionContext *ctx) override;

    antlrcpp::Any visitMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext *ctx) override;

    antlrcpp::Any visitDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext *ctx) override;

    antlrcpp::Any visitConditionalOrExpression(SlovenCLanguageParser::ConditionalOrExpressionContext *ctx) override;

    antlrcpp::Any visitParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext *ctx) override;

    antlrcpp::Any visitExpressionList(SlovenCLanguageParser::ExpressionListContext *ctx) override;

    antlrcpp::Any visitLiteralInteger(SlovenCLanguageParser::LiteralIntegerContext *ctx) override;

    antlrcpp::Any visitLiteralFloatingPoint(SlovenCLanguageParser::LiteralFloatingPointContext *ctx) override;

    antlrcpp::Any visitLiteralBoolean(SlovenCLanguageParser::LiteralBooleanContext *ctx) override;

    antlrcpp::Any visitLiteralString(SlovenCLanguageParser::LiteralStringContext *ctx) override;

    antlrcpp::Any visitLiteralNULLLITERAL(SlovenCLanguageParser::LiteralNULLLITERALContext *ctx) override;

    antlrcpp::Any visitThis(SlovenCLanguageParser::ThisContext *ctx) override;

    antlrcpp::Any visitPrimaryLiteral(SlovenCLanguageParser::PrimaryLiteralContext *ctx) override;

    antlrcpp::Any visitPrimaryIdentifier(SlovenCLanguageParser::PrimaryIdentifierContext *ctx) override;

    antlrcpp::Any visitConstructorCallExpression(SlovenCLanguageParser::ConstructorCallExpressionContext *ctx) override;

    antlrcpp::Any
    visitDottedConstructorCallExpression(SlovenCLanguageParser::DottedConstructorCallExpressionContext *ctx) override;
};


#endif //SLOVENC_EXPRESSIONBUILDER_H
