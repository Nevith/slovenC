//
// Created by Andraz on 24/03/2020.
//

#include "Builder.h"

Builder::Builder(const std::shared_ptr<CurrentState> &currentState) : currentState(currentState),
                                                                      symbolBuilder(currentState),
                                                                      statementBuilder(currentState),
                                                                      expressionBuilder(currentState),
                                                                      typeBuilder(currentState) {}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// Imports /////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Builder::exitImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::exitImportDeclaration(context);
}

void Builder::enterSingleTypeImportDeclaration(SlovenCLanguageParser::SingleTypeImportDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::enterSingleTypeImportDeclaration(context);
}

void Builder::exitSingleTypeImportDeclaration(SlovenCLanguageParser::SingleTypeImportDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::exitSingleTypeImportDeclaration(context);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// Declarations ////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Builder::enterNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::enterNormalClassDeclaration(context);
}

void Builder::exitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::exitNormalClassDeclaration(context);
}

void Builder::enterMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::enterMethodDeclaration(context);
}

void Builder::exitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::exitMethodDeclaration(context);
}

void Builder::enterConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::enterConstructorDeclaration(context);
}

void Builder::exitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::exitConstructorDeclaration(context);
}

void Builder::enterLocalVariableDeclarationStatement(
        SlovenCLanguageParser::LocalVariableDeclarationStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterLocalVariableDeclarationStatement(context);
}

void Builder::exitLocalVariableDeclarationStatement(
        SlovenCLanguageParser::LocalVariableDeclarationStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitLocalVariableDeclarationStatement(context);
}

void Builder::enterFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::enterFieldDeclaration(context);
}

void Builder::exitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::exitFieldDeclaration(context);
}

void Builder::enterLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::enterLocalVariableDeclaration(context);
}

void Builder::exitLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::exitLocalVariableDeclaration(context);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// Statements //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Builder::enterStatement(SlovenCLanguageParser::StatementContext *context) {
    SlovenCLanguageParserBaseListener::enterStatement(context);
}

void Builder::exitStatement(SlovenCLanguageParser::StatementContext *context) {
    SlovenCLanguageParserBaseListener::exitStatement(context);
}

void Builder::enterBlockStatement(SlovenCLanguageParser::BlockStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterBlockStatement(context);
}

void Builder::exitBlockStatement(SlovenCLanguageParser::BlockStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitBlockStatement(context);
}

void Builder::enterImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *context) {
    SlovenCLanguageParserBaseListener::enterImportDeclaration(context);
}

void Builder::enterIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterIfThenStatement(context);
}

void Builder::exitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitIfThenStatement(context);
}

void Builder::enterBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterBasicForStatement(context);
}

void Builder::exitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitBasicForStatement(context);
}

void Builder::enterWhileStatement(SlovenCLanguageParser::WhileStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterWhileStatement(context);
}

void Builder::exitWhileStatement(SlovenCLanguageParser::WhileStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitWhileStatement(context);
}

void Builder::enterExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterExpressionStatement(context);
}

void Builder::exitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitExpressionStatement(context);
}

void Builder::enterElseStatement(SlovenCLanguageParser::ElseStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterElseStatement(context);
}

void Builder::exitElseStatement(SlovenCLanguageParser::ElseStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitElseStatement(context);
}

void Builder::enterReturnStatement(SlovenCLanguageParser::ReturnStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterReturnStatement(context);
}

void Builder::exitReturnStatement(SlovenCLanguageParser::ReturnStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitReturnStatement(context);
}

void Builder::enterThrowStatement(SlovenCLanguageParser::ThrowStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterThrowStatement(context);
}

void Builder::exitThrowStatement(SlovenCLanguageParser::ThrowStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitThrowStatement(context);
}

void Builder::enterBreakStatement(SlovenCLanguageParser::BreakStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterBreakStatement(context);
}

void Builder::enterContinueStatement(SlovenCLanguageParser::ContinueStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterContinueStatement(context);
}

void Builder::exitContinueStatement(SlovenCLanguageParser::ContinueStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitContinueStatement(context);
}

void Builder::enterEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *context) {
    SlovenCLanguageParserBaseListener::enterEmptyStatement(context);
}

void Builder::exitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *context) {
    SlovenCLanguageParserBaseListener::exitEmptyStatement(context);
}
