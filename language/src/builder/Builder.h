//
// Created by Andraz on 24/03/2020.
//

#ifndef SLOVENC_BUILDER_H
#define SLOVENC_BUILDER_H


#include <antlr/SlovenCLanguageParserBaseListener.h>
#include "builder/utils/CurrentState.h"
#include "builder/visitors/SymbolBuilder.h"
#include "builder/visitors/StatementBuilder.h"
#include "builder/visitors/ExpressionBuilder.h"
#include "builder/visitors/ReferenceBuilder.h"

using namespace antlr;

class Builder : public SlovenCLanguageParserBaseListener {
private:
    const std::shared_ptr<CurrentState> currentState;
    ReferenceBuilder referenceBuilder;
    ExpressionBuilder expressionBuilder;
    StatementBuilder statementBuilder;
    SymbolBuilder symbolBuilder;

public:
    Builder(const std::shared_ptr<CurrentState> &currentState);

    void enterMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *context) override;

    void exitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *context) override;

    void enterNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *context) override;

    void exitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *context) override;

    void enterConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *context) override;

    void exitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *context) override;

    void enterBlockStatement(SlovenCLanguageParser::BlockStatementContext *context) override;

    void exitBlockStatement(SlovenCLanguageParser::BlockStatementContext *context) override;

    void enterLocalVariableDeclarationStatement(
            SlovenCLanguageParser::LocalVariableDeclarationStatementContext *context) override;

    void exitLocalVariableDeclarationStatement(
            SlovenCLanguageParser::LocalVariableDeclarationStatementContext *context) override;

    void enterImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *context) override;

    void exitImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *context) override;

    void enterFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *context) override;

    void exitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *context) override;

    void enterFormalParameter(SlovenCLanguageParser::FormalParameterContext *context) override;

    void exitFormalParameter(SlovenCLanguageParser::FormalParameterContext *context) override;

    void enterIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *context) override;

    void exitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *context) override;

    void enterBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *context) override;

    void exitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *context) override;

    void enterWhileStatement(SlovenCLanguageParser::WhileStatementContext *context) override;

    void exitWhileStatement(SlovenCLanguageParser::WhileStatementContext *context) override;

    void enterReturnStatement(SlovenCLanguageParser::ReturnStatementContext *context) override;

    void exitReturnStatement(SlovenCLanguageParser::ReturnStatementContext *context) override;

    void enterBreakStatement(SlovenCLanguageParser::BreakStatementContext *context) override;

    void exitBreakStatement(SlovenCLanguageParser::BreakStatementContext *context) override;

    void enterContinueStatement(SlovenCLanguageParser::ContinueStatementContext *context) override;

    void exitContinueStatement(SlovenCLanguageParser::ContinueStatementContext *context) override;

    void enterEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *context) override;

    void exitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *context) override;

    void enterExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *context) override;

    void exitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *context) override;

    void enterElseStatement(SlovenCLanguageParser::ElseStatementContext *context) override;

    void exitElseStatement(SlovenCLanguageParser::ElseStatementContext *context) override;
};


#endif //SLOVENC_BUILDER_H
