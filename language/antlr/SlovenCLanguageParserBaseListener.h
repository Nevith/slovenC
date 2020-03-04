
// Generated from SlovenCLanguageParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SlovenCLanguageParserListener.h"


namespace antlr {

/**
 * This class provides an empty implementation of SlovenCLanguageParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SlovenCLanguageParserBaseListener : public SlovenCLanguageParserListener {
public:

  virtual void enterParseWhole(SlovenCLanguageParser::ParseWholeContext * /*ctx*/) override { }
  virtual void exitParseWhole(SlovenCLanguageParser::ParseWholeContext * /*ctx*/) override { }

  virtual void enterLiteralInteger(SlovenCLanguageParser::LiteralIntegerContext * /*ctx*/) override { }
  virtual void exitLiteralInteger(SlovenCLanguageParser::LiteralIntegerContext * /*ctx*/) override { }

  virtual void enterLiteralFloatingPoint(SlovenCLanguageParser::LiteralFloatingPointContext * /*ctx*/) override { }
  virtual void exitLiteralFloatingPoint(SlovenCLanguageParser::LiteralFloatingPointContext * /*ctx*/) override { }

  virtual void enterLiteralBoolean(SlovenCLanguageParser::LiteralBooleanContext * /*ctx*/) override { }
  virtual void exitLiteralBoolean(SlovenCLanguageParser::LiteralBooleanContext * /*ctx*/) override { }

  virtual void enterLiteralString(SlovenCLanguageParser::LiteralStringContext * /*ctx*/) override { }
  virtual void exitLiteralString(SlovenCLanguageParser::LiteralStringContext * /*ctx*/) override { }

  virtual void enterLiteralNULLLITERAL(SlovenCLanguageParser::LiteralNULLLITERALContext * /*ctx*/) override { }
  virtual void exitLiteralNULLLITERAL(SlovenCLanguageParser::LiteralNULLLITERALContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(SlovenCLanguageParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(SlovenCLanguageParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterReferenceType(SlovenCLanguageParser::ReferenceTypeContext * /*ctx*/) override { }
  virtual void exitReferenceType(SlovenCLanguageParser::ReferenceTypeContext * /*ctx*/) override { }

  virtual void enterClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext * /*ctx*/) override { }
  virtual void exitClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext * /*ctx*/) override { }

  virtual void enterClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext * /*ctx*/) override { }
  virtual void exitClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext * /*ctx*/) override { }

  virtual void enterModifier(SlovenCLanguageParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(SlovenCLanguageParser::ModifierContext * /*ctx*/) override { }

  virtual void enterTypeNameQual(SlovenCLanguageParser::TypeNameQualContext * /*ctx*/) override { }
  virtual void exitTypeNameQual(SlovenCLanguageParser::TypeNameQualContext * /*ctx*/) override { }

  virtual void enterTypeNameUnqual(SlovenCLanguageParser::TypeNameUnqualContext * /*ctx*/) override { }
  virtual void exitTypeNameUnqual(SlovenCLanguageParser::TypeNameUnqualContext * /*ctx*/) override { }

  virtual void enterPackageOrTypeNameUnqual(SlovenCLanguageParser::PackageOrTypeNameUnqualContext * /*ctx*/) override { }
  virtual void exitPackageOrTypeNameUnqual(SlovenCLanguageParser::PackageOrTypeNameUnqualContext * /*ctx*/) override { }

  virtual void enterPackageOrTypeNameQual(SlovenCLanguageParser::PackageOrTypeNameQualContext * /*ctx*/) override { }
  virtual void exitPackageOrTypeNameQual(SlovenCLanguageParser::PackageOrTypeNameQualContext * /*ctx*/) override { }

  virtual void enterCompilationUnit(SlovenCLanguageParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(SlovenCLanguageParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterImportDeclarations(SlovenCLanguageParser::ImportDeclarationsContext * /*ctx*/) override { }
  virtual void exitImportDeclarations(SlovenCLanguageParser::ImportDeclarationsContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclarations(SlovenCLanguageParser::TypeDeclarationsContext * /*ctx*/) override { }
  virtual void exitTypeDeclarations(SlovenCLanguageParser::TypeDeclarationsContext * /*ctx*/) override { }

  virtual void enterSingleTypeImportDeclaration(SlovenCLanguageParser::SingleTypeImportDeclarationContext * /*ctx*/) override { }
  virtual void exitSingleTypeImportDeclaration(SlovenCLanguageParser::SingleTypeImportDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeImportOnDemandDeclaration(SlovenCLanguageParser::TypeImportOnDemandDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeImportOnDemandDeclaration(SlovenCLanguageParser::TypeImportOnDemandDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(SlovenCLanguageParser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(SlovenCLanguageParser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext * /*ctx*/) override { }
  virtual void exitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext * /*ctx*/) override { }

  virtual void enterInheritance(SlovenCLanguageParser::InheritanceContext * /*ctx*/) override { }
  virtual void exitInheritance(SlovenCLanguageParser::InheritanceContext * /*ctx*/) override { }

  virtual void enterSuperclass(SlovenCLanguageParser::SuperclassContext * /*ctx*/) override { }
  virtual void exitSuperclass(SlovenCLanguageParser::SuperclassContext * /*ctx*/) override { }

  virtual void enterClassTypeList(SlovenCLanguageParser::ClassTypeListContext * /*ctx*/) override { }
  virtual void exitClassTypeList(SlovenCLanguageParser::ClassTypeListContext * /*ctx*/) override { }

  virtual void enterClassBody(SlovenCLanguageParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(SlovenCLanguageParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterClassBodyDeclaration(SlovenCLanguageParser::ClassBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitClassBodyDeclaration(SlovenCLanguageParser::ClassBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableDeclaratorList(SlovenCLanguageParser::VariableDeclaratorListContext * /*ctx*/) override { }
  virtual void exitVariableDeclaratorList(SlovenCLanguageParser::VariableDeclaratorListContext * /*ctx*/) override { }

  virtual void enterVariableDeclarator(SlovenCLanguageParser::VariableDeclaratorContext * /*ctx*/) override { }
  virtual void exitVariableDeclarator(SlovenCLanguageParser::VariableDeclaratorContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodHeader(SlovenCLanguageParser::MethodHeaderContext * /*ctx*/) override { }
  virtual void exitMethodHeader(SlovenCLanguageParser::MethodHeaderContext * /*ctx*/) override { }

  virtual void enterResult(SlovenCLanguageParser::ResultContext * /*ctx*/) override { }
  virtual void exitResult(SlovenCLanguageParser::ResultContext * /*ctx*/) override { }

  virtual void enterMethodDeclarator(SlovenCLanguageParser::MethodDeclaratorContext * /*ctx*/) override { }
  virtual void exitMethodDeclarator(SlovenCLanguageParser::MethodDeclaratorContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(SlovenCLanguageParser::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(SlovenCLanguageParser::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterFormalParameter(SlovenCLanguageParser::FormalParameterContext * /*ctx*/) override { }
  virtual void exitFormalParameter(SlovenCLanguageParser::FormalParameterContext * /*ctx*/) override { }

  virtual void enterMethodBody(SlovenCLanguageParser::MethodBodyContext * /*ctx*/) override { }
  virtual void exitMethodBody(SlovenCLanguageParser::MethodBodyContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructorDeclarator(SlovenCLanguageParser::ConstructorDeclaratorContext * /*ctx*/) override { }
  virtual void exitConstructorDeclarator(SlovenCLanguageParser::ConstructorDeclaratorContext * /*ctx*/) override { }

  virtual void enterConstructorBody(SlovenCLanguageParser::ConstructorBodyContext * /*ctx*/) override { }
  virtual void exitConstructorBody(SlovenCLanguageParser::ConstructorBodyContext * /*ctx*/) override { }

  virtual void enterDestructorDeclaration(SlovenCLanguageParser::DestructorDeclarationContext * /*ctx*/) override { }
  virtual void exitDestructorDeclaration(SlovenCLanguageParser::DestructorDeclarationContext * /*ctx*/) override { }

  virtual void enterDestructorDeclarator(SlovenCLanguageParser::DestructorDeclaratorContext * /*ctx*/) override { }
  virtual void exitDestructorDeclarator(SlovenCLanguageParser::DestructorDeclaratorContext * /*ctx*/) override { }

  virtual void enterDestructorBody(SlovenCLanguageParser::DestructorBodyContext * /*ctx*/) override { }
  virtual void exitDestructorBody(SlovenCLanguageParser::DestructorBodyContext * /*ctx*/) override { }

  virtual void enterBlock(SlovenCLanguageParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SlovenCLanguageParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStatement(SlovenCLanguageParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(SlovenCLanguageParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclarationStatement(SlovenCLanguageParser::LocalVariableDeclarationStatementContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclarationStatement(SlovenCLanguageParser::LocalVariableDeclarationStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterStatement(SlovenCLanguageParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SlovenCLanguageParser::StatementContext * /*ctx*/) override { }

  virtual void enterBlock_(SlovenCLanguageParser::Block_Context * /*ctx*/) override { }
  virtual void exitBlock_(SlovenCLanguageParser::Block_Context * /*ctx*/) override { }

  virtual void enterIfThenStatement(SlovenCLanguageParser::IfThenStatementContext * /*ctx*/) override { }
  virtual void exitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext * /*ctx*/) override { }

  virtual void enterBasicForStatement(SlovenCLanguageParser::BasicForStatementContext * /*ctx*/) override { }
  virtual void exitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(SlovenCLanguageParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(SlovenCLanguageParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterTryCatchesFinally(SlovenCLanguageParser::TryCatchesFinallyContext * /*ctx*/) override { }
  virtual void exitTryCatchesFinally(SlovenCLanguageParser::TryCatchesFinallyContext * /*ctx*/) override { }

  virtual void enterTryBlock(SlovenCLanguageParser::TryBlockContext * /*ctx*/) override { }
  virtual void exitTryBlock(SlovenCLanguageParser::TryBlockContext * /*ctx*/) override { }

  virtual void enterReturnStatement(SlovenCLanguageParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(SlovenCLanguageParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterThrowStatement(SlovenCLanguageParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(SlovenCLanguageParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterBreakStatement(SlovenCLanguageParser::BreakStatementContext * /*ctx*/) override { }
  virtual void exitBreakStatement(SlovenCLanguageParser::BreakStatementContext * /*ctx*/) override { }

  virtual void enterContinueStatement(SlovenCLanguageParser::ContinueStatementContext * /*ctx*/) override { }
  virtual void exitContinueStatement(SlovenCLanguageParser::ContinueStatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(SlovenCLanguageParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterFinallyBlock(SlovenCLanguageParser::FinallyBlockContext * /*ctx*/) override { }
  virtual void exitFinallyBlock(SlovenCLanguageParser::FinallyBlockContext * /*ctx*/) override { }

  virtual void enterCatchClause(SlovenCLanguageParser::CatchClauseContext * /*ctx*/) override { }
  virtual void exitCatchClause(SlovenCLanguageParser::CatchClauseContext * /*ctx*/) override { }

  virtual void enterCatchBlock(SlovenCLanguageParser::CatchBlockContext * /*ctx*/) override { }
  virtual void exitCatchBlock(SlovenCLanguageParser::CatchBlockContext * /*ctx*/) override { }

  virtual void enterCondition(SlovenCLanguageParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(SlovenCLanguageParser::ConditionContext * /*ctx*/) override { }

  virtual void enterElseStatement(SlovenCLanguageParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(SlovenCLanguageParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterForInit(SlovenCLanguageParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(SlovenCLanguageParser::ForInitContext * /*ctx*/) override { }

  virtual void enterForUpdate(SlovenCLanguageParser::ForUpdateContext * /*ctx*/) override { }
  virtual void exitForUpdate(SlovenCLanguageParser::ForUpdateContext * /*ctx*/) override { }

  virtual void enterPostIncrementDecrementExpression(SlovenCLanguageParser::PostIncrementDecrementExpressionContext * /*ctx*/) override { }
  virtual void exitPostIncrementDecrementExpression(SlovenCLanguageParser::PostIncrementDecrementExpressionContext * /*ctx*/) override { }

  virtual void enterThisCallExpression(SlovenCLanguageParser::ThisCallExpressionContext * /*ctx*/) override { }
  virtual void exitThisCallExpression(SlovenCLanguageParser::ThisCallExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(SlovenCLanguageParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(SlovenCLanguageParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterDottedSuperCallExpression(SlovenCLanguageParser::DottedSuperCallExpressionContext * /*ctx*/) override { }
  virtual void exitDottedSuperCallExpression(SlovenCLanguageParser::DottedSuperCallExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(SlovenCLanguageParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(SlovenCLanguageParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterDottedThisCallExpression(SlovenCLanguageParser::DottedThisCallExpressionContext * /*ctx*/) override { }
  virtual void exitDottedThisCallExpression(SlovenCLanguageParser::DottedThisCallExpressionContext * /*ctx*/) override { }

  virtual void enterInstanceofExpression(SlovenCLanguageParser::InstanceofExpressionContext * /*ctx*/) override { }
  virtual void exitInstanceofExpression(SlovenCLanguageParser::InstanceofExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalAndExpression(SlovenCLanguageParser::ConditionalAndExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalAndExpression(SlovenCLanguageParser::ConditionalAndExpressionContext * /*ctx*/) override { }

  virtual void enterDottedThisExpression(SlovenCLanguageParser::DottedThisExpressionContext * /*ctx*/) override { }
  virtual void exitDottedThisExpression(SlovenCLanguageParser::DottedThisExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(SlovenCLanguageParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(SlovenCLanguageParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterCallExpression(SlovenCLanguageParser::CallExpressionContext * /*ctx*/) override { }
  virtual void exitCallExpression(SlovenCLanguageParser::CallExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext * /*ctx*/) override { }
  virtual void exitDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext * /*ctx*/) override { }

  virtual void enterDottedSuperExpression(SlovenCLanguageParser::DottedSuperExpressionContext * /*ctx*/) override { }
  virtual void exitDottedSuperExpression(SlovenCLanguageParser::DottedSuperExpressionContext * /*ctx*/) override { }

  virtual void enterInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext * /*ctx*/) override { }
  virtual void exitInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(SlovenCLanguageParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(SlovenCLanguageParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(SlovenCLanguageParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(SlovenCLanguageParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterPreIncrementDecrementExpression(SlovenCLanguageParser::PreIncrementDecrementExpressionContext * /*ctx*/) override { }
  virtual void exitPreIncrementDecrementExpression(SlovenCLanguageParser::PreIncrementDecrementExpressionContext * /*ctx*/) override { }

  virtual void enterConstructorCallExpression(SlovenCLanguageParser::ConstructorCallExpressionContext * /*ctx*/) override { }
  virtual void exitConstructorCallExpression(SlovenCLanguageParser::ConstructorCallExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(SlovenCLanguageParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(SlovenCLanguageParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterNegateExpression(SlovenCLanguageParser::NegateExpressionContext * /*ctx*/) override { }
  virtual void exitNegateExpression(SlovenCLanguageParser::NegateExpressionContext * /*ctx*/) override { }

  virtual void enterDottedConstructorCallExpression(SlovenCLanguageParser::DottedConstructorCallExpressionContext * /*ctx*/) override { }
  virtual void exitDottedConstructorCallExpression(SlovenCLanguageParser::DottedConstructorCallExpressionContext * /*ctx*/) override { }

  virtual void enterSuperCallExpression(SlovenCLanguageParser::SuperCallExpressionContext * /*ctx*/) override { }
  virtual void exitSuperCallExpression(SlovenCLanguageParser::SuperCallExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(SlovenCLanguageParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(SlovenCLanguageParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterDottedExpression(SlovenCLanguageParser::DottedExpressionContext * /*ctx*/) override { }
  virtual void exitDottedExpression(SlovenCLanguageParser::DottedExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalOrExpression(SlovenCLanguageParser::ConditionalOrExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalOrExpression(SlovenCLanguageParser::ConditionalOrExpressionContext * /*ctx*/) override { }

  virtual void enterCreatorExpression(SlovenCLanguageParser::CreatorExpressionContext * /*ctx*/) override { }
  virtual void exitCreatorExpression(SlovenCLanguageParser::CreatorExpressionContext * /*ctx*/) override { }

  virtual void enterCreatedName(SlovenCLanguageParser::CreatedNameContext * /*ctx*/) override { }
  virtual void exitCreatedName(SlovenCLanguageParser::CreatedNameContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterThis(SlovenCLanguageParser::ThisContext * /*ctx*/) override { }
  virtual void exitThis(SlovenCLanguageParser::ThisContext * /*ctx*/) override { }

  virtual void enterSuper(SlovenCLanguageParser::SuperContext * /*ctx*/) override { }
  virtual void exitSuper(SlovenCLanguageParser::SuperContext * /*ctx*/) override { }

  virtual void enterPrimaryLiteral(SlovenCLanguageParser::PrimaryLiteralContext * /*ctx*/) override { }
  virtual void exitPrimaryLiteral(SlovenCLanguageParser::PrimaryLiteralContext * /*ctx*/) override { }

  virtual void enterPrimaryIdentifier(SlovenCLanguageParser::PrimaryIdentifierContext * /*ctx*/) override { }
  virtual void exitPrimaryIdentifier(SlovenCLanguageParser::PrimaryIdentifierContext * /*ctx*/) override { }

  virtual void enterPrimaryTypeClass(SlovenCLanguageParser::PrimaryTypeClassContext * /*ctx*/) override { }
  virtual void exitPrimaryTypeClass(SlovenCLanguageParser::PrimaryTypeClassContext * /*ctx*/) override { }

  virtual void enterPrimaryVoidClass(SlovenCLanguageParser::PrimaryVoidClassContext * /*ctx*/) override { }
  virtual void exitPrimaryVoidClass(SlovenCLanguageParser::PrimaryVoidClassContext * /*ctx*/) override { }

  virtual void enterExpressionList(SlovenCLanguageParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(SlovenCLanguageParser::ExpressionListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlr
