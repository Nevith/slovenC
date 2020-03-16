
// Generated from SlovenCLanguageParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SlovenCLanguageParser.h"


namespace antlr {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by SlovenCLanguageParser.
 */
    class SlovenCLanguageParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
    public:

        /**
         * Visit parse trees produced by SlovenCLanguageParser.
         */
        virtual antlrcpp::Any visitParseWhole(SlovenCLanguageParser::ParseWholeContext *context) = 0;

        virtual antlrcpp::Any visitLiteralInteger(SlovenCLanguageParser::LiteralIntegerContext *context) = 0;

        virtual antlrcpp::Any
        visitLiteralFloatingPoint(SlovenCLanguageParser::LiteralFloatingPointContext *context) = 0;

        virtual antlrcpp::Any visitLiteralBoolean(SlovenCLanguageParser::LiteralBooleanContext *context) = 0;

        virtual antlrcpp::Any visitLiteralString(SlovenCLanguageParser::LiteralStringContext *context) = 0;

        virtual antlrcpp::Any visitLiteralNULLLITERAL(SlovenCLanguageParser::LiteralNULLLITERALContext *context) = 0;

        virtual antlrcpp::Any visitPrimitiveType(SlovenCLanguageParser::PrimitiveTypeContext *context) = 0;

        virtual antlrcpp::Any visitReferenceType(SlovenCLanguageParser::ReferenceTypeContext *context) = 0;

        virtual antlrcpp::Any visitClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext *context) = 0;

        virtual antlrcpp::Any visitClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext *context) = 0;

        virtual antlrcpp::Any visitModifier(SlovenCLanguageParser::ModifierContext *context) = 0;

        virtual antlrcpp::Any visitTypeNameQual(SlovenCLanguageParser::TypeNameQualContext *context) = 0;

        virtual antlrcpp::Any visitTypeNameUnqual(SlovenCLanguageParser::TypeNameUnqualContext *context) = 0;

        virtual antlrcpp::Any
        visitPackageOrTypeNameUnqual(SlovenCLanguageParser::PackageOrTypeNameUnqualContext *context) = 0;

        virtual antlrcpp::Any
        visitPackageOrTypeNameQual(SlovenCLanguageParser::PackageOrTypeNameQualContext *context) = 0;

        virtual antlrcpp::Any visitCompilationUnit(SlovenCLanguageParser::CompilationUnitContext *context) = 0;

        virtual antlrcpp::Any visitImportDeclarations(SlovenCLanguageParser::ImportDeclarationsContext *context) = 0;

        virtual antlrcpp::Any visitImportDeclaration(SlovenCLanguageParser::ImportDeclarationContext *context) = 0;

        virtual antlrcpp::Any visitTypeDeclarations(SlovenCLanguageParser::TypeDeclarationsContext *context) = 0;

        virtual antlrcpp::Any
        visitSingleTypeImportDeclaration(SlovenCLanguageParser::SingleTypeImportDeclarationContext *context) = 0;

        virtual antlrcpp::Any
        visitTypeImportOnDemandDeclaration(SlovenCLanguageParser::TypeImportOnDemandDeclarationContext *context) = 0;

        virtual antlrcpp::Any visitTypeDeclaration(SlovenCLanguageParser::TypeDeclarationContext *context) = 0;

        virtual antlrcpp::Any
        visitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *context) = 0;

        virtual antlrcpp::Any visitInheritance(SlovenCLanguageParser::InheritanceContext *context) = 0;

        virtual antlrcpp::Any visitSuperclass(SlovenCLanguageParser::SuperclassContext *context) = 0;

        virtual antlrcpp::Any visitClassTypeList(SlovenCLanguageParser::ClassTypeListContext *context) = 0;

        virtual antlrcpp::Any visitClassBody(SlovenCLanguageParser::ClassBodyContext *context) = 0;

        virtual antlrcpp::Any
        visitClassBodyDeclaration(SlovenCLanguageParser::ClassBodyDeclarationContext *context) = 0;

        virtual antlrcpp::Any visitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *context) = 0;

        virtual antlrcpp::Any
        visitVariableDeclaratorList(SlovenCLanguageParser::VariableDeclaratorListContext *context) = 0;

        virtual antlrcpp::Any visitVariableDeclarator(SlovenCLanguageParser::VariableDeclaratorContext *context) = 0;

        virtual antlrcpp::Any visitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *context) = 0;

        virtual antlrcpp::Any visitMethodHeader(SlovenCLanguageParser::MethodHeaderContext *context) = 0;

        virtual antlrcpp::Any visitResult(SlovenCLanguageParser::ResultContext *context) = 0;

        virtual antlrcpp::Any visitMethodDeclarator(SlovenCLanguageParser::MethodDeclaratorContext *context) = 0;

        virtual antlrcpp::Any visitFormalParameterList(SlovenCLanguageParser::FormalParameterListContext *context) = 0;

        virtual antlrcpp::Any visitFormalParameter(SlovenCLanguageParser::FormalParameterContext *context) = 0;

        virtual antlrcpp::Any visitMethodBody(SlovenCLanguageParser::MethodBodyContext *context) = 0;

        virtual antlrcpp::Any
        visitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *context) = 0;

        virtual antlrcpp::Any
        visitConstructorDeclarator(SlovenCLanguageParser::ConstructorDeclaratorContext *context) = 0;

        virtual antlrcpp::Any visitConstructorBody(SlovenCLanguageParser::ConstructorBodyContext *context) = 0;

        virtual antlrcpp::Any
        visitDestructorDeclaration(SlovenCLanguageParser::DestructorDeclarationContext *context) = 0;

        virtual antlrcpp::Any
        visitDestructorDeclarator(SlovenCLanguageParser::DestructorDeclaratorContext *context) = 0;

        virtual antlrcpp::Any visitDestructorBody(SlovenCLanguageParser::DestructorBodyContext *context) = 0;

        virtual antlrcpp::Any visitBlock(SlovenCLanguageParser::BlockContext *context) = 0;

        virtual antlrcpp::Any visitBlockStatement(SlovenCLanguageParser::BlockStatementContext *context) = 0;

        virtual antlrcpp::Any visitLocalVariableDeclarationStatement(
                SlovenCLanguageParser::LocalVariableDeclarationStatementContext *context) = 0;

        virtual antlrcpp::Any
        visitLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext *context) = 0;

        virtual antlrcpp::Any visitStatement(SlovenCLanguageParser::StatementContext *context) = 0;

        virtual antlrcpp::Any visitBlock_(SlovenCLanguageParser::Block_Context *context) = 0;

        virtual antlrcpp::Any visitIfThenStatement(SlovenCLanguageParser::IfThenStatementContext *context) = 0;

        virtual antlrcpp::Any visitBasicForStatement(SlovenCLanguageParser::BasicForStatementContext *context) = 0;

        virtual antlrcpp::Any visitWhileStatement(SlovenCLanguageParser::WhileStatementContext *context) = 0;

        virtual antlrcpp::Any visitTryCatchesFinally(SlovenCLanguageParser::TryCatchesFinallyContext *context) = 0;

        virtual antlrcpp::Any visitTryBlock(SlovenCLanguageParser::TryBlockContext *context) = 0;

        virtual antlrcpp::Any visitReturnStatement(SlovenCLanguageParser::ReturnStatementContext *context) = 0;

        virtual antlrcpp::Any visitThrowStatement(SlovenCLanguageParser::ThrowStatementContext *context) = 0;

        virtual antlrcpp::Any visitBreakStatement(SlovenCLanguageParser::BreakStatementContext *context) = 0;

        virtual antlrcpp::Any visitContinueStatement(SlovenCLanguageParser::ContinueStatementContext *context) = 0;

        virtual antlrcpp::Any visitEmptyStatement(SlovenCLanguageParser::EmptyStatementContext *context) = 0;

        virtual antlrcpp::Any visitExpressionStatement(SlovenCLanguageParser::ExpressionStatementContext *context) = 0;

        virtual antlrcpp::Any visitFinallyBlock(SlovenCLanguageParser::FinallyBlockContext *context) = 0;

        virtual antlrcpp::Any visitCatchClause(SlovenCLanguageParser::CatchClauseContext *context) = 0;

        virtual antlrcpp::Any visitCatchBlock(SlovenCLanguageParser::CatchBlockContext *context) = 0;

        virtual antlrcpp::Any visitCondition(SlovenCLanguageParser::ConditionContext *context) = 0;

        virtual antlrcpp::Any visitElseStatement(SlovenCLanguageParser::ElseStatementContext *context) = 0;

        virtual antlrcpp::Any visitForInit(SlovenCLanguageParser::ForInitContext *context) = 0;

        virtual antlrcpp::Any visitForUpdate(SlovenCLanguageParser::ForUpdateContext *context) = 0;

        virtual antlrcpp::Any visitPostIncrementDecrementExpression(
                SlovenCLanguageParser::PostIncrementDecrementExpressionContext *context) = 0;

        virtual antlrcpp::Any visitThisCallExpression(SlovenCLanguageParser::ThisCallExpressionContext *context) = 0;

        virtual antlrcpp::Any visitPrimaryExpression(SlovenCLanguageParser::PrimaryExpressionContext *context) = 0;

        virtual antlrcpp::Any visitUnaryExpression(SlovenCLanguageParser::UnaryExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitDottedSuperCallExpression(SlovenCLanguageParser::DottedSuperCallExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitAssignmentExpression(SlovenCLanguageParser::AssignmentExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitDottedThisCallExpression(SlovenCLanguageParser::DottedThisCallExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitInstanceofExpression(SlovenCLanguageParser::InstanceofExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitConditionalAndExpression(SlovenCLanguageParser::ConditionalAndExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitDottedThisExpression(SlovenCLanguageParser::DottedThisExpressionContext *context) = 0;

        virtual antlrcpp::Any visitEqualityExpression(SlovenCLanguageParser::EqualityExpressionContext *context) = 0;

        virtual antlrcpp::Any visitCallExpression(SlovenCLanguageParser::CallExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitMultiplicativeExpression(SlovenCLanguageParser::MultiplicativeExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitDottedCallExpression(SlovenCLanguageParser::DottedCallExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitDottedSuperExpression(SlovenCLanguageParser::DottedSuperExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitInvalidDottedExpression(SlovenCLanguageParser::InvalidDottedExpressionContext *context) = 0;

        virtual antlrcpp::Any visitAdditiveExpression(SlovenCLanguageParser::AdditiveExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitRelationalExpression(SlovenCLanguageParser::RelationalExpressionContext *context) = 0;

        virtual antlrcpp::Any visitPreIncrementDecrementExpression(
                SlovenCLanguageParser::PreIncrementDecrementExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitConstructorCallExpression(SlovenCLanguageParser::ConstructorCallExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitConditionalExpression(SlovenCLanguageParser::ConditionalExpressionContext *context) = 0;

        virtual antlrcpp::Any visitNegateExpression(SlovenCLanguageParser::NegateExpressionContext *context) = 0;

        virtual antlrcpp::Any visitDottedConstructorCallExpression(
                SlovenCLanguageParser::DottedConstructorCallExpressionContext *context) = 0;

        virtual antlrcpp::Any visitSuperCallExpression(SlovenCLanguageParser::SuperCallExpressionContext *context) = 0;

        virtual antlrcpp::Any visitCastExpression(SlovenCLanguageParser::CastExpressionContext *context) = 0;

        virtual antlrcpp::Any visitDottedExpression(SlovenCLanguageParser::DottedExpressionContext *context) = 0;

        virtual antlrcpp::Any
        visitConditionalOrExpression(SlovenCLanguageParser::ConditionalOrExpressionContext *context) = 0;

        virtual antlrcpp::Any visitCreatorExpression(SlovenCLanguageParser::CreatorExpressionContext *context) = 0;

        virtual antlrcpp::Any visitCreatedName(SlovenCLanguageParser::CreatedNameContext *context) = 0;

        virtual antlrcpp::Any
        visitParenthesizedExpression(SlovenCLanguageParser::ParenthesizedExpressionContext *context) = 0;

        virtual antlrcpp::Any visitThis(SlovenCLanguageParser::ThisContext *context) = 0;

        virtual antlrcpp::Any visitSuper(SlovenCLanguageParser::SuperContext *context) = 0;

        virtual antlrcpp::Any visitPrimaryLiteral(SlovenCLanguageParser::PrimaryLiteralContext *context) = 0;

        virtual antlrcpp::Any visitPrimaryIdentifier(SlovenCLanguageParser::PrimaryIdentifierContext *context) = 0;

        virtual antlrcpp::Any visitPrimaryTypeClass(SlovenCLanguageParser::PrimaryTypeClassContext *context) = 0;

        virtual antlrcpp::Any visitPrimaryVoidClass(SlovenCLanguageParser::PrimaryVoidClassContext *context) = 0;

        virtual antlrcpp::Any visitExpressionList(SlovenCLanguageParser::ExpressionListContext *context) = 0;


    };

}  // namespace antlr
