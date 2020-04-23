//
// Created by Andraz on 25/03/2020.
//

#include <model/statements/BlockStatement.h>
#include <model/statements/VariableDeclarationStatement.h>
#include <model/statements/IfStatement.h>
#include <model/statements/ForStatement.h>
#include <model/statements/exit/ReturnStatement.h>
#include <model/statements/exit/ThrowStatement.h>
#include <model/statements/exit/BreakStatement.h>
#include <model/statements/WhileStatement.h>
#include <model/statements/exit/ContinueStatement.h>
#include "StatementBuilder.h"

StatementBuilder::StatementBuilder(const std::shared_ptr<CurrentState> &currentState,
                                   ReferenceBuilder *referenceBuilder,
                                   ExpressionBuilder *expressionBuilder, SymbolBuilder *symbolBuilder)
        : currentState(currentState), referenceBuilder(referenceBuilder), expressionBuilder(expressionBuilder),
          symbolBuilder(symbolBuilder) {}

antlrcpp::Any StatementBuilder::visitBlockStatement(SlovenCLanguageParser::BlockStatementContext *ctx) {
    auto statement = std::make_shared<BlockStatement>();
    defineParents(statement, ctx);
    auto method = currentState->getCurrentMethod();
    if (method) {
        method->setScope(statement);
    }
    return statement;
}

antlrcpp::Any StatementBuilder::visitLocalVariableDeclarationStatement(
        SlovenCLanguageParser::LocalVariableDeclarationStatementContext *ctx) {
    auto statement = std::make_shared<VariableDeclarationStatement>();
    defineParents(statement, ctx);
    std::shared_ptr<LocalVariableSymbol> variable = symbolBuilder->visit(ctx);
    statement->setVariableSymbol(variable);
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *ctx) {
    auto statement = std::make_shared<IfStatement>();
    defineParents(statement, ctx);
    statement->setCondition(expressionBuilder->visit(ctx->condition()));
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitElseStatement(SlovenCLanguageParser::ElseStatementContext *ctx) {
    auto statement = std::make_shared<ElseStatement>();
    defineParents(statement, ctx);
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *ctx) {
    auto statement = std::make_shared<ForStatement>();
    defineParents(statement, ctx);
    for (auto variableContext : ctx->localVariableDeclaration()) {
        std::shared_ptr<LocalVariableSymbol> variable = expressionBuilder->visit(variableContext);
        statement->addVariable(variable);
    }
    statement->setCondition(expressionBuilder->visit(ctx->condition()));

    if (ctx->forUpdate()) {
        std::vector<std::shared_ptr<Expression>> updateExpressions = expressionBuilder->visit(
                ctx->forUpdate()->expressionList());
        for (auto expression : updateExpressions) {
            statement->addUpdateExpression(expression);
        }
    }

    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitWhileStatement(SlovenCLanguageParser::WhileStatementContext *ctx) {
    auto statement = std::make_shared<WhileStatement>();
    defineParents(statement, ctx);
    statement->setCondition(expressionBuilder->visit(ctx->condition()));
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitReturnStatement(SlovenCLanguageParser::ReturnStatementContext *ctx) {
    auto statement = std::make_shared<ReturnStatement>();
    defineParents(statement, ctx);
    statement->setExpression(expressionBuilder->visit(ctx->expression()));
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitThrowStatement(SlovenCLanguageParser::ThrowStatementContext *ctx) {
    auto statement = std::make_shared<ThrowStatement>();
    defineParents(statement, ctx);
    statement->setExpression(expressionBuilder->visit(ctx->expression()));
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitBreakStatement(SlovenCLanguageParser::BreakStatementContext *ctx) {
    auto statement = std::make_shared<BreakStatement>();
    defineParents(statement, ctx);
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitContinueStatement(SlovenCLanguageParser::ContinueStatementContext *ctx) {
    auto statement = std::make_shared<ContinueStatement>();
    defineParents(statement, ctx);
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *ctx) {
    auto statement = std::make_shared<EmptyStatement>();
    defineParents(statement, ctx);
    return TypeUtils::cast<Statement>(statement);
}

antlrcpp::Any StatementBuilder::visitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *ctx) {
    auto statement = std::make_shared<ExpressionStatement>();
    defineParents(statement, ctx);
    statement->setExpression(expressionBuilder->visit(ctx->expression()));
    return TypeUtils::cast<Statement>(statement);
}


void StatementBuilder::defineParents(std::shared_ptr<Statement> statement, tree::ParseTree *context) {
    auto parentFile = currentState->getFileSymbol();
    auto parentStatement = currentState->getCurrentStatement();
    auto parentMethod = currentState->getCurrentMethod();
    auto parentScope = currentState->getCurrentScope();
    auto parentClass = currentState->getCurrentClass();

    statement->setParentMethod(parentMethod);
    statement->setParentClass(parentClass);
    statement->setParentScope(parentScope);
    statement->setParentStatement(parentStatement);
    statement->setFileSymbol(parentFile);
    statement->setContext(context);

    if (parentScope) {
        parentScope->addStatement(statement);
    }
    if (parentStatement) {
        parentStatement->define(statement);
    }
}
