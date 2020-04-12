//
// Created by Andraz on 25/03/2020.
//

#include <model/expressions/IncrementDecrementExpression.h>
#include <model/expressions/math/AdditiveExpression.h>
#include <model/expressions/bool/CompareExpression.h>
#include <model/expressions/dotted/call/ThisCallExpression.h>
#include <model/expressions/bool/NotExpression.h>
#include <model/expressions/AssignmentExpression.h>
#include <model/expressions/ParenthesizedExpression.h>
#include "ExpressionBuilder.h"

ExpressionBuilder::ExpressionBuilder(const std::shared_ptr<CurrentState> &currentState,
                                     ReferenceBuilder *referenceBuilder)
        : currentState(currentState), referenceBuilder(referenceBuilder) {}


antlrcpp::Any ExpressionBuilder::visitThisCallExpression(SlovenCLanguageParser::ThisCallExpressionContext *ctx) {
    auto symbol = std::make_shared<ThisCallExpression>(ctx->THIS()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (ctx->expressionList()) {
        for (auto argumentContext : ctx->expressionList()->expression()) {
            std::shared_ptr<Expression> expression = visit(argumentContext);
            symbol->addArgument(expression);
        }
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitCallExpression(SlovenCLanguageParser::CallExpressionContext *ctx) {
    auto symbol = std::make_shared<CallExpression>(ctx->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (ctx->expressionList()) {
        for (auto argumentContext : ctx->expressionList()->expression()) {
            std::shared_ptr<Expression> expression = visit(argumentContext);
            symbol->addArgument(expression);
        }
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext *ctx) {
    auto symbol = std::make_shared<CallExpression>(ctx->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (ctx->expressionList()) {
        for (auto argumentContext : ctx->expressionList()->expression()) {
            std::shared_ptr<Expression> expression = visit(argumentContext);
            symbol->addArgument(expression);
        }
    }

    std::shared_ptr<DottedExpression> expression = visit(ctx->expression());
    symbol->setObject(expression);

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitPostIncrementDecrementExpression(
        SlovenCLanguageParser::PostIncrementDecrementExpressionContext *ctx) {
    auto symbol = std::make_shared<IncrementDecrementExpression>();

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (ctx->INC()) {
        symbol->setIncrementDecrementOperator("++");
    } else {
        symbol->setIncrementDecrementOperator("--");
    }
    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setExpression(expression);

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any
ExpressionBuilder::visitInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext *ctx) {
    auto symbol = std::make_shared<IdentifierExpression>("");

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<DottedExpression> expression = visit(ctx->expression());
    symbol->setObject(expression);

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any
ExpressionBuilder::visitMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext *ctx) {
    auto symbol = std::make_shared<AdditiveExpression>();
    if (ctx->MUL()) {
        symbol->setOperatorSign("*");
    } else if (ctx->DIV()) {
        symbol->setOperatorSign("/");
    }

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    auto children = ctx->expression();
    int i = 0;
    for (auto child : children) {
        std::shared_ptr<Expression> expression = visit(child);
        if (i == 0) {
            symbol->setLeftExpression(expression);
        } else {
            symbol->setRightExpression(expression);
        }
        ++i;
    }

    currentState->popCurrentExpression();
    return symbol;}

antlrcpp::Any ExpressionBuilder::visitAdditiveExpression(SlovenCLanguageParser::AdditiveExpressionContext *ctx) {
    auto symbol = std::make_shared<AdditiveExpression>();
    if (ctx->SUB()) {
        symbol->setOperatorSign("-");
    } else if (ctx->ADD()) {
        symbol->setOperatorSign("+");
    }

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    auto children = ctx->expression();
    int i = 0;
    for (auto child : children) {
        std::shared_ptr<Expression> expression = visit(child);
        if (i == 0) {
            symbol->setLeftExpression(expression);
        } else {
            symbol->setRightExpression(expression);
        }
        ++i;
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitAssignmentExpression(SlovenCLanguageParser::AssignmentExpressionContext *ctx) {
    auto symbol = std::make_shared<AssignmentExpression>();

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    auto children = ctx->expression();
    int i = 0;
    for (auto child : children) {
        std::shared_ptr<Expression> expression = visit(child);
        if (i == 0) {
            symbol->setIdentifier(expression);
        } else {
            symbol->setExpression(expression);
        }
        ++i;
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitNegateExpression(SlovenCLanguageParser::NegateExpressionContext *ctx) {
    auto symbol = std::make_shared<NotExpression>();

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setExpression(expression);

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitRelationalExpression(SlovenCLanguageParser::RelationalExpressionContext *ctx) {
    auto symbol = std::make_shared<CompareExpression>();
    if (ctx->LE()) {
        symbol->setOperator("<=");
    } else if (ctx->GE()) {
        symbol->setOperator(">=");
    } else if (ctx->GT()) {
        symbol->setOperator(">");
    } else if (ctx->LT()) {
        symbol->setOperator("<");
    }

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    auto children = ctx->expression();
    int i = 0;
    for (auto child : children) {
        std::shared_ptr<Expression> expression = visit(child);
        if (i == 0) {
            symbol->setLeftExpression(expression);
        } else {
            symbol->setRightExpression(expression);
        }
        ++i;
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any
ExpressionBuilder::visitConditionalAndExpression(SlovenCLanguageParser::ConditionalAndExpressionContext *ctx) {
    auto symbol = std::make_shared<CompareExpression>();
    symbol->setOperator("&&");

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    auto children = ctx->expression();
    int i = 0;
    for (auto child : children) {
        std::shared_ptr<Expression> expression = visit(child);
        if (i == 0) {
            symbol->setLeftExpression(expression);
        } else {
            symbol->setRightExpression(expression);
        }
        ++i;
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any
ExpressionBuilder::visitConditionalOrExpression(SlovenCLanguageParser::ConditionalOrExpressionContext *ctx) {
    auto symbol = std::make_shared<CompareExpression>();
    symbol->setOperator("||");

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    auto children = ctx->expression();
    int i = 0;
    for (auto child : children) {
        std::shared_ptr<Expression> expression = visit(child);
        if (i == 0) {
            symbol->setLeftExpression(expression);
        } else {
            symbol->setRightExpression(expression);
        }
        ++i;
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitEqualityExpression(SlovenCLanguageParser::EqualityExpressionContext *ctx) {
    auto symbol = std::make_shared<CompareExpression>();
    if (ctx->EQUAL()) {
        symbol->setOperator("==");
    } else {
        symbol->setOperator("!=");
    }

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    auto children = ctx->expression();
    int i = 0;
    for (auto child : children) {
        std::shared_ptr<Expression> expression = visit(child);
        if (i == 0) {
            symbol->setLeftExpression(expression);
        } else {
            symbol->setRightExpression(expression);
        }
        ++i;
    }

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any
ExpressionBuilder::visitParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext *ctx) {
    auto symbol = std::make_shared<ParenthesizedExpression>();

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setExpression(expression);

    currentState->popCurrentExpression();
    return symbol;}

antlrcpp::Any ExpressionBuilder::visitPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext *ctx) {
    return visit(ctx->primary());
}

antlrcpp::Any ExpressionBuilder::visitDottedExpression(SlovenCLanguageParser::DottedExpressionContext *ctx) {
    auto symbol = std::make_shared<IdentifierExpression>(ctx->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<DottedExpression> expression = visit(ctx->expression());
    symbol->setObject(expression);

    currentState->popCurrentExpression();
    return symbol;
}

antlrcpp::Any ExpressionBuilder::visitExpressionList(SlovenCLanguageParser::ExpressionListContext *ctx) {
    std::vector<Expression> expressions;
    for (auto context : ctx->expression()) {
        expressions.push_back(visit(context));
    }
    return expressions;
}

void ExpressionBuilder::defineParents(std::shared_ptr<Expression> expression, tree::ParseTree *context) {
    auto parentFile = currentState->getFileSymbol();
    auto parentStatement = currentState->getCurrentStatement();
    auto parentMethod = currentState->getCurrentMethod();
    auto parentScope = currentState->getCurrentScope();
    auto parentClass = currentState->getCurrentClass();
    auto parentExpression = currentState->getCurrentExpression();

    expression->setParentMethod(parentMethod);
    expression->setParentClass(parentClass);
    expression->setParentScope(parentScope);
    expression->setParentStatement(parentStatement);
    expression->setParentExpression(parentExpression);
    expression->setFileSymbol(parentFile);
    expression->setContext(context);
}
