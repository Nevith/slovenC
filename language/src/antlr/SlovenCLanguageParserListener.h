
// Generated from SlovenCLanguageParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SlovenCLanguageParser.h"


namespace antlr {

/**
 * This interface defines an abstract listener for a parse tree produced by SlovenCLanguageParser.
 */
class  SlovenCLanguageParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterParseWhole(SlovenCLanguageParser::ParseWholeContext *ctx) = 0;
  virtual void exitParseWhole(SlovenCLanguageParser::ParseWholeContext *ctx) = 0;

  virtual void enterLiteralInteger(SlovenCLanguageParser::LiteralIntegerContext *ctx) = 0;
  virtual void exitLiteralInteger(SlovenCLanguageParser::LiteralIntegerContext *ctx) = 0;

  virtual void enterLiteralFloatingPoint(SlovenCLanguageParser::LiteralFloatingPointContext *ctx) = 0;
  virtual void exitLiteralFloatingPoint(SlovenCLanguageParser::LiteralFloatingPointContext *ctx) = 0;

  virtual void enterLiteralBoolean(SlovenCLanguageParser::LiteralBooleanContext *ctx) = 0;
  virtual void exitLiteralBoolean(SlovenCLanguageParser::LiteralBooleanContext *ctx) = 0;

  virtual void enterLiteralString(SlovenCLanguageParser::LiteralStringContext *ctx) = 0;
  virtual void exitLiteralString(SlovenCLanguageParser::LiteralStringContext *ctx) = 0;

  virtual void enterLiteralNULLLITERAL(SlovenCLanguageParser::LiteralNULLLITERALContext *ctx) = 0;
  virtual void exitLiteralNULLLITERAL(SlovenCLanguageParser::LiteralNULLLITERALContext *ctx) = 0;

  virtual void enterPrimitiveType(SlovenCLanguageParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(SlovenCLanguageParser::PrimitiveTypeContext *ctx) = 0;

  virtual void enterReferenceType(SlovenCLanguageParser::ReferenceTypeContext *ctx) = 0;
  virtual void exitReferenceType(SlovenCLanguageParser::ReferenceTypeContext *ctx) = 0;

  virtual void enterClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext *ctx) = 0;
  virtual void exitClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext *ctx) = 0;

  virtual void enterClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext *ctx) = 0;
  virtual void exitClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext *ctx) = 0;

  virtual void enterModifier(SlovenCLanguageParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(SlovenCLanguageParser::ModifierContext *ctx) = 0;

  virtual void enterFileNameQual(SlovenCLanguageParser::FileNameQualContext *ctx) = 0;
  virtual void exitFileNameQual(SlovenCLanguageParser::FileNameQualContext *ctx) = 0;

  virtual void enterFileNameUnqual(SlovenCLanguageParser::FileNameUnqualContext *ctx) = 0;
  virtual void exitFileNameUnqual(SlovenCLanguageParser::FileNameUnqualContext *ctx) = 0;

  virtual void enterCompilationUnit(SlovenCLanguageParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(SlovenCLanguageParser::CompilationUnitContext *ctx) = 0;

  virtual void enterImportDeclarations(SlovenCLanguageParser::ImportDeclarationsContext *ctx) = 0;
  virtual void exitImportDeclarations(SlovenCLanguageParser::ImportDeclarationsContext *ctx) = 0;

  virtual void enterImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *ctx) = 0;
  virtual void exitImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *ctx) = 0;

  virtual void enterTypeDeclarations(SlovenCLanguageParser::TypeDeclarationsContext *ctx) = 0;
  virtual void exitTypeDeclarations(SlovenCLanguageParser::TypeDeclarationsContext *ctx) = 0;

  virtual void enterTypeDeclaration(SlovenCLanguageParser::TypeDeclarationContext *ctx) = 0;
  virtual void exitTypeDeclaration(SlovenCLanguageParser::TypeDeclarationContext *ctx) = 0;

  virtual void enterNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *ctx) = 0;
  virtual void exitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *ctx) = 0;

  virtual void enterInheritance(SlovenCLanguageParser::InheritanceContext *ctx) = 0;
  virtual void exitInheritance(SlovenCLanguageParser::InheritanceContext *ctx) = 0;

  virtual void enterSuperclass(SlovenCLanguageParser::SuperclassContext *ctx) = 0;
  virtual void exitSuperclass(SlovenCLanguageParser::SuperclassContext *ctx) = 0;

  virtual void enterClassTypeList(SlovenCLanguageParser::ClassTypeListContext *ctx) = 0;
  virtual void exitClassTypeList(SlovenCLanguageParser::ClassTypeListContext *ctx) = 0;

  virtual void enterClassBody(SlovenCLanguageParser::ClassBodyContext *ctx) = 0;
  virtual void exitClassBody(SlovenCLanguageParser::ClassBodyContext *ctx) = 0;

  virtual void enterClassBodyDeclaration(SlovenCLanguageParser::ClassBodyDeclarationContext *ctx) = 0;
  virtual void exitClassBodyDeclaration(SlovenCLanguageParser::ClassBodyDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *ctx) = 0;
  virtual void exitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *ctx) = 0;

  virtual void enterFieldDeclarator(SlovenCLanguageParser::FieldDeclaratorContext *ctx) = 0;
  virtual void exitFieldDeclarator(SlovenCLanguageParser::FieldDeclaratorContext *ctx) = 0;

  virtual void enterVariableDeclarator(SlovenCLanguageParser::VariableDeclaratorContext *ctx) = 0;
  virtual void exitVariableDeclarator(SlovenCLanguageParser::VariableDeclaratorContext *ctx) = 0;

  virtual void enterMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterMethodHeader(SlovenCLanguageParser::MethodHeaderContext *ctx) = 0;
  virtual void exitMethodHeader(SlovenCLanguageParser::MethodHeaderContext *ctx) = 0;

  virtual void enterResult(SlovenCLanguageParser::ResultContext *ctx) = 0;
  virtual void exitResult(SlovenCLanguageParser::ResultContext *ctx) = 0;

  virtual void enterMethodDeclarator(SlovenCLanguageParser::MethodDeclaratorContext *ctx) = 0;
  virtual void exitMethodDeclarator(SlovenCLanguageParser::MethodDeclaratorContext *ctx) = 0;

  virtual void enterFormalParameterList(SlovenCLanguageParser::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(SlovenCLanguageParser::FormalParameterListContext *ctx) = 0;

  virtual void enterFormalParameter(SlovenCLanguageParser::FormalParameterContext *ctx) = 0;
  virtual void exitFormalParameter(SlovenCLanguageParser::FormalParameterContext *ctx) = 0;

  virtual void enterMethodBody(SlovenCLanguageParser::MethodBodyContext *ctx) = 0;
  virtual void exitMethodBody(SlovenCLanguageParser::MethodBodyContext *ctx) = 0;

  virtual void enterConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterConstructorDeclarator(SlovenCLanguageParser::ConstructorDeclaratorContext *ctx) = 0;
  virtual void exitConstructorDeclarator(SlovenCLanguageParser::ConstructorDeclaratorContext *ctx) = 0;

  virtual void enterConstructorBody(SlovenCLanguageParser::ConstructorBodyContext *ctx) = 0;
  virtual void exitConstructorBody(SlovenCLanguageParser::ConstructorBodyContext *ctx) = 0;

  virtual void enterBlock(SlovenCLanguageParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SlovenCLanguageParser::BlockContext *ctx) = 0;

  virtual void enterBlockStatement(SlovenCLanguageParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(SlovenCLanguageParser::BlockStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclarationStatement(SlovenCLanguageParser::LocalVariableDeclarationStatementContext *ctx) = 0;
  virtual void exitLocalVariableDeclarationStatement(SlovenCLanguageParser::LocalVariableDeclarationStatementContext *ctx) = 0;

  virtual void enterLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext *ctx) = 0;
  virtual void exitLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext *ctx) = 0;

  virtual void enterStatement(SlovenCLanguageParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SlovenCLanguageParser::StatementContext *ctx) = 0;

  virtual void enterBlock_(SlovenCLanguageParser::Block_Context *ctx) = 0;
  virtual void exitBlock_(SlovenCLanguageParser::Block_Context *ctx) = 0;

  virtual void enterIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *ctx) = 0;
  virtual void exitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *ctx) = 0;

  virtual void enterBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *ctx) = 0;
  virtual void exitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *ctx) = 0;

  virtual void enterWhileStatement(SlovenCLanguageParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(SlovenCLanguageParser::WhileStatementContext *ctx) = 0;

  virtual void enterReturnStatement(SlovenCLanguageParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(SlovenCLanguageParser::ReturnStatementContext *ctx) = 0;

  virtual void enterThrowStatement(SlovenCLanguageParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(SlovenCLanguageParser::ThrowStatementContext *ctx) = 0;

  virtual void enterBreakStatement(SlovenCLanguageParser::BreakStatementContext *ctx) = 0;
  virtual void exitBreakStatement(SlovenCLanguageParser::BreakStatementContext *ctx) = 0;

  virtual void enterContinueStatement(SlovenCLanguageParser::ContinueStatementContext *ctx) = 0;
  virtual void exitContinueStatement(SlovenCLanguageParser::ContinueStatementContext *ctx) = 0;

  virtual void enterEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterCondition(SlovenCLanguageParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(SlovenCLanguageParser::ConditionContext *ctx) = 0;

  virtual void enterElseStatement(SlovenCLanguageParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(SlovenCLanguageParser::ElseStatementContext *ctx) = 0;

  virtual void enterForUpdate(SlovenCLanguageParser::ForUpdateContext *ctx) = 0;
  virtual void exitForUpdate(SlovenCLanguageParser::ForUpdateContext *ctx) = 0;

  virtual void enterPostIncrementDecrementExpression(SlovenCLanguageParser::PostIncrementDecrementExpressionContext *ctx) = 0;
  virtual void exitPostIncrementDecrementExpression(SlovenCLanguageParser::PostIncrementDecrementExpressionContext *ctx) = 0;

  virtual void enterInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext *ctx) = 0;
  virtual void exitInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(SlovenCLanguageParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(SlovenCLanguageParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(SlovenCLanguageParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(SlovenCLanguageParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterThisCallExpression(SlovenCLanguageParser::ThisCallExpressionContext *ctx) = 0;
  virtual void exitThisCallExpression(SlovenCLanguageParser::ThisCallExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterConstructorCallExpression(SlovenCLanguageParser::ConstructorCallExpressionContext *ctx) = 0;
  virtual void exitConstructorCallExpression(SlovenCLanguageParser::ConstructorCallExpressionContext *ctx) = 0;

  virtual void enterCompareExpression(SlovenCLanguageParser::CompareExpressionContext *ctx) = 0;
  virtual void exitCompareExpression(SlovenCLanguageParser::CompareExpressionContext *ctx) = 0;

  virtual void enterNegateExpression(SlovenCLanguageParser::NegateExpressionContext *ctx) = 0;
  virtual void exitNegateExpression(SlovenCLanguageParser::NegateExpressionContext *ctx) = 0;

  virtual void enterDottedConstructorCallExpression(SlovenCLanguageParser::DottedConstructorCallExpressionContext *ctx) = 0;
  virtual void exitDottedConstructorCallExpression(SlovenCLanguageParser::DottedConstructorCallExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(SlovenCLanguageParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(SlovenCLanguageParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterConditionalAndExpression(SlovenCLanguageParser::ConditionalAndExpressionContext *ctx) = 0;
  virtual void exitConditionalAndExpression(SlovenCLanguageParser::ConditionalAndExpressionContext *ctx) = 0;

  virtual void enterDottedExpression(SlovenCLanguageParser::DottedExpressionContext *ctx) = 0;
  virtual void exitDottedExpression(SlovenCLanguageParser::DottedExpressionContext *ctx) = 0;

  virtual void enterCallExpression(SlovenCLanguageParser::CallExpressionContext *ctx) = 0;
  virtual void exitCallExpression(SlovenCLanguageParser::CallExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext *ctx) = 0;
  virtual void exitDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext *ctx) = 0;

  virtual void enterConditionalOrExpression(SlovenCLanguageParser::ConditionalOrExpressionContext *ctx) = 0;
  virtual void exitConditionalOrExpression(SlovenCLanguageParser::ConditionalOrExpressionContext *ctx) = 0;

  virtual void enterCreatorExpression(SlovenCLanguageParser::CreatorExpressionContext *ctx) = 0;
  virtual void exitCreatorExpression(SlovenCLanguageParser::CreatorExpressionContext *ctx) = 0;

  virtual void enterParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterThis(SlovenCLanguageParser::ThisContext *ctx) = 0;
  virtual void exitThis(SlovenCLanguageParser::ThisContext *ctx) = 0;

  virtual void enterPrimaryLiteral(SlovenCLanguageParser::PrimaryLiteralContext *ctx) = 0;
  virtual void exitPrimaryLiteral(SlovenCLanguageParser::PrimaryLiteralContext *ctx) = 0;

  virtual void enterPrimaryIdentifier(SlovenCLanguageParser::PrimaryIdentifierContext *ctx) = 0;
  virtual void exitPrimaryIdentifier(SlovenCLanguageParser::PrimaryIdentifierContext *ctx) = 0;

  virtual void enterExpressionList(SlovenCLanguageParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(SlovenCLanguageParser::ExpressionListContext *ctx) = 0;


};

}  // namespace antlr
