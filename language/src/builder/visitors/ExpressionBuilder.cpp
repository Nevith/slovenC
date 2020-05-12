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
#include <model/expressions/dotted/ThisExpression.h>
#include <model/expressions/literal/IntegerLiteral.h>
#include <model/expressions/literal/DoubleLiteral.h>
#include <model/expressions/literal/BooleanLiteral.h>
#include <model/expressions/literal/StringLiteral.h>
#include <model/expressions/literal/NullLiteral.h>
#include <utils/TypeUtils.h>
#include <model/expressions/math/MultiplicationExpression.h>
#include <model/expressions/dotted/call/MethodCallExpression.h>
#include <model/expressions/dotted/call/ConstructorCallExpression.h>
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
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitCallExpression(SlovenCLanguageParser::CallExpressionContext *ctx) {
    auto symbol = std::make_shared<MethodCallExpression>(ctx->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (ctx->expressionList()) {
        for (auto argumentContext : ctx->expressionList()->expression()) {
            std::shared_ptr<Expression> expression = visit(argumentContext);
            symbol->addArgument(expression);
        }
    }

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext *ctx) {
    auto symbol = std::make_shared<MethodCallExpression>(ctx->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (ctx->expressionList()) {
        for (auto argumentContext : ctx->expressionList()->expression()) {
            std::shared_ptr<Expression> expression = visit(argumentContext);
            symbol->addArgument(expression);
        }
    }

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setObject(expression);

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any
ExpressionBuilder::visitConstructorCallExpression(SlovenCLanguageParser::ConstructorCallExpressionContext *ctx) {
    auto creatorExpression = ctx->creatorExpression();
    auto symbol = std::make_shared<ConstructorCallExpression>(creatorExpression->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (creatorExpression->expressionList()) {
        for (auto argumentContext : creatorExpression->expressionList()->expression()) {
            std::shared_ptr<Expression> expression = visit(argumentContext);
            symbol->addArgument(expression);
        }
    }

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);}

antlrcpp::Any ExpressionBuilder::visitDottedConstructorCallExpression(
        SlovenCLanguageParser::DottedConstructorCallExpressionContext *ctx) {
    auto creatorExpression = ctx->creatorExpression();
    auto symbol = std::make_shared<ConstructorCallExpression>(creatorExpression->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    if (creatorExpression->expressionList()) {
        for (auto argumentContext : creatorExpression->expressionList()->expression()) {
            std::shared_ptr<Expression> expression = visit(argumentContext);
            symbol->addArgument(expression);
        }
    }

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setObject(expression);

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);
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
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any
ExpressionBuilder::visitInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext *ctx) {
    auto symbol = std::make_shared<IdentifierExpression>("");

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setObject(expression);

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any
ExpressionBuilder::visitMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext *ctx) {
    auto symbol = std::make_shared<MultiplicationExpression>();
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
    return TypeUtils::cast<Expression>(symbol);
}

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
    return TypeUtils::cast<Expression>(symbol);
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
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitNegateExpression(SlovenCLanguageParser::NegateExpressionContext *ctx) {
    auto symbol = std::make_shared<NotExpression>();

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setExpression(expression);

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);
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
    return TypeUtils::cast<Expression>(symbol);
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
    return TypeUtils::cast<Expression>(symbol);
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
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitCompareExpression(SlovenCLanguageParser::CompareExpressionContext *ctx) {
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
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any
ExpressionBuilder::visitParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext *ctx) {
    auto symbol = std::make_shared<ParenthesizedExpression>();

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setExpression(expression);

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext *ctx) {
    return visit(ctx->primary());
}

antlrcpp::Any ExpressionBuilder::visitDottedExpression(SlovenCLanguageParser::DottedExpressionContext *ctx) {
    auto symbol = std::make_shared<IdentifierExpression>(ctx->Identifier()->getText());

    defineParents(symbol, ctx);
    currentState->pushCurrentExpression(symbol);

    std::shared_ptr<Expression> expression = visit(ctx->expression());
    symbol->setObject(expression);

    currentState->popCurrentExpression();
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitExpressionList(SlovenCLanguageParser::ExpressionListContext *ctx) {
    std::vector<std::shared_ptr<Expression>> expressions;
    for (auto context : ctx->expression()) {
        expressions.push_back(visit(context));
    }
    return expressions;
}


antlrcpp::Any ExpressionBuilder::visitThis(SlovenCLanguageParser::ThisContext *ctx) {
    auto symbol = std::make_shared<ThisExpression>();
    defineParents(symbol, ctx);
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitPrimaryIdentifier(SlovenCLanguageParser::PrimaryIdentifierContext *ctx) {
    auto symbol = std::make_shared<IdentifierExpression>(ctx->Identifier()->getText());
    defineParents(symbol, ctx);
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitPrimaryLiteral(SlovenCLanguageParser::PrimaryLiteralContext *ctx) {
    return visit(ctx->literal());
}

antlrcpp::Any ExpressionBuilder::visitLiteralInteger(SlovenCLanguageParser::LiteralIntegerContext *ctx) {
    auto symbol = std::make_shared<IntegerLiteral>();
    int value = std::stoi(ctx->IntegerLiteral()->getText(), nullptr, 0);
    symbol->setValue(value);
    defineParents(symbol, ctx);
    ctx->IntegerLiteral()->getText();
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitLiteralFloatingPoint(SlovenCLanguageParser::LiteralFloatingPointContext *ctx) {
    auto symbol = std::make_shared<DoubleLiteral>();
    double value = std::stod(ctx->FloatingPointLiteral()->getText());
    symbol->setValue(value);
    defineParents(symbol, ctx);
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitLiteralBoolean(SlovenCLanguageParser::LiteralBooleanContext *ctx) {
    auto symbol = std::make_shared<BooleanLiteral>();
    symbol->setValue(ctx->TRUE());
    defineParents(symbol, ctx);
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitLiteralString(SlovenCLanguageParser::LiteralStringContext *ctx) {
    auto symbol = std::make_shared<StringLiteral>();
    symbol->setValue(ctx->StringLiteral()->getText());
    defineParents(symbol, ctx);
    return TypeUtils::cast<Expression>(symbol);
}

antlrcpp::Any ExpressionBuilder::visitLiteralNULLLITERAL(SlovenCLanguageParser::LiteralNULLLITERALContext *ctx) {
    auto symbol = std::make_shared<NullLiteral>();
    defineParents(symbol, ctx);
    return TypeUtils::cast<Expression>(symbol);
}

void ExpressionBuilder::defineParents(std::shared_ptr<Expression> expression, antlr4::ParserRuleContext *context) {
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
