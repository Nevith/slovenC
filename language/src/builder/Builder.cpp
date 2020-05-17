//
// Created by Andraz on 24/03/2020.
//

#include <model/statements/BlockStatement.h>
#include "Builder.h"

Builder::Builder(const std::shared_ptr<CurrentState> &currentState) : currentState(currentState),
                                                                      referenceBuilder(currentState),
                                                                      expressionBuilder(currentState,
                                                                                        &referenceBuilder),
                                                                      symbolBuilder(currentState, &referenceBuilder,
                                                                                    &expressionBuilder),
                                                                      statementBuilder(currentState, &referenceBuilder,
                                                                                       &expressionBuilder,
                                                                                       &symbolBuilder) {}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// SCOPE ///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Builder::enterBlockStatement(SlovenCLanguageParser::BlockStatementContext *context) {
    std::shared_ptr<BlockStatement> statement = statementBuilder.visit(context);

    std::cout << std::endl << "---------------------" << std::endl << "Scope: " << statement->getContext().getText() << std::endl << "---------------------" << std::endl;

    currentState->pushCurrentScope(statement);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitBlockStatement(SlovenCLanguageParser::BlockStatementContext *context) {
    std::cout << std::endl << "---------------------" << std::endl << "Exit Scope: " << context->getText() << std::endl << "---------------------" << std::endl;

    currentState->popCurrentScope();
    currentState->popCurrentStatement();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// Imports /////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Builder::enterImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *context) {
    std::shared_ptr<PackageOrFileReferenceExpression> import = referenceBuilder.visit(context->fileName());
    currentState->getFileSymbol()->addImport(import);
}

void Builder::exitImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *context) {

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// Declarations ////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Builder::enterNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *context) {
    std::shared_ptr<ClassSymbol> classSymbol = symbolBuilder.visit(context);
    currentState->pushCurrentClass(classSymbol);
}

void Builder::exitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *context) {
    currentState->popCurrentClass();
}

void Builder::enterMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *context) {
    std::shared_ptr<MethodSymbol> methodSymbol = symbolBuilder.visit(context);
    currentState->setCurrentMethod(methodSymbol);
}

void Builder::exitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *context) {
    currentState->setCurrentMethod(nullptr);
}

void Builder::enterConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *context) {
    std::shared_ptr<MethodSymbol> methodSymbol = symbolBuilder.visit(context);
    currentState->setCurrentMethod(methodSymbol);
}

void Builder::exitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *context) {
    currentState->setCurrentMethod(nullptr);
}

void Builder::enterLocalVariableDeclarationStatement(
        SlovenCLanguageParser::LocalVariableDeclarationStatementContext *context) {
    auto statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitLocalVariableDeclarationStatement(
        SlovenCLanguageParser::LocalVariableDeclarationStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *context) {
    symbolBuilder.visit(context);
}

void Builder::exitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *context) {
}

void Builder::enterFormalParameter(SlovenCLanguageParser::FormalParameterContext *context) {
    symbolBuilder.visit(context);
}

void Builder::exitFormalParameter(SlovenCLanguageParser::FormalParameterContext *context) {
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// Statements //////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Builder::enterIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterWhileStatement(SlovenCLanguageParser::WhileStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitWhileStatement(SlovenCLanguageParser::WhileStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterReturnStatement(SlovenCLanguageParser::ReturnStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitReturnStatement(SlovenCLanguageParser::ReturnStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterBreakStatement(SlovenCLanguageParser::BreakStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitBreakStatement(SlovenCLanguageParser::BreakStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterContinueStatement(SlovenCLanguageParser::ContinueStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitContinueStatement(SlovenCLanguageParser::ContinueStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *context) {
    currentState->popCurrentStatement();
}

void Builder::enterElseStatement(SlovenCLanguageParser::ElseStatementContext *context) {
    std::shared_ptr<Statement> statement = statementBuilder.visit(context);
    currentState->pushCurrentStatement(statement);
}

void Builder::exitElseStatement(SlovenCLanguageParser::ElseStatementContext *context) {
    currentState->popCurrentStatement();
}
