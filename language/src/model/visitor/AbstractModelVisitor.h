//
// Created by andraz on 17/04/2020.
//

#ifndef SLOVENC_ABSTRACTMODELVISITOR_H
#define SLOVENC_ABSTRACTMODELVISITOR_H

#include <model/Visitable.h>

class CompareExpression;

class NotExpression;

class IdentifierExpression;

class PackageOrFileReferenceExpression;

class ThisExpression;

class TypeReferenceExpression;

class ConstructorCallExpression;

class MethodCallExpression;

class ThisCallExpression;

class BooleanLiteral;

class DoubleLiteral;

class IntegerLiteral;

class NullLiteral;

class StringLiteral;

class AdditiveExpression;

class MultiplicationExpression;

class AssignmentExpression;

class IncrementDecrementExpression;

class ParenthesizedExpression;

class BreakStatement;

class ContinueStatement;

class ReturnStatement;

class ThrowStatement;

class BlockStatement;

class ElseStatement;

class EmptyStatement;

class ExpressionStatement;

class ForStatement;

class IfStatement;

class VariableDeclarationStatement;

class WhileStatement;

class ClassSymbol;

class FileSymbol;

class InvalidSymbol;

class MethodSymbol;

class PackageSymbol;

class PredefinedSymbol;

class FieldSymbol;

class LocalVariableSymbol;

class ParameterSymbol;

class AbstractModelVisitor {
public:
    virtual void visit(std::shared_ptr<Visitable> visitable);

    /**
     * Expressions
     **/
    virtual void visitCompareExpression(std::shared_ptr<CompareExpression> visitable) = 0;

    virtual void visitNotExpression(std::shared_ptr<NotExpression> visitable) = 0;

    virtual void visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) = 0;

    virtual void visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) = 0;

    virtual void visitThisExpression(std::shared_ptr<ThisExpression> visitable) = 0;

    virtual void visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) = 0;

    virtual void visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) = 0;

    virtual void visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) = 0;

    virtual void visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) = 0;

    virtual void visitBooleanLiteral(std::shared_ptr<BooleanLiteral> visitable) = 0;

    virtual void visitDoubleLiteral(std::shared_ptr<DoubleLiteral> visitable) = 0;

    virtual void visitIntegerLiteral(std::shared_ptr<IntegerLiteral> visitableIntegerLiteral) = 0;

    virtual void visitNullLiteral(std::shared_ptr<NullLiteral> visitable) = 0;

    virtual void visitStringLiteral(std::shared_ptr<StringLiteral> visitable) = 0;

    virtual void visitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) = 0;

    virtual void visitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) = 0;

    virtual void visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) = 0;

    virtual void visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) = 0;

    virtual void visitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) = 0;

    /**
     * Statements
     */
    virtual void visitBreakStatement(std::shared_ptr<BreakStatement> visitable) = 0;

    virtual void visitContinueStatement(std::shared_ptr<ContinueStatement> visitable) = 0;

    virtual void visitReturnStatement(std::shared_ptr<ReturnStatement> visitable) = 0;

    virtual void visitBlockStatement(std::shared_ptr<BlockStatement> visitable) = 0;

    virtual void visitElseStatement(std::shared_ptr<ElseStatement> visitable) = 0;

    virtual void visitEmptyStatement(std::shared_ptr<EmptyStatement> visitable) = 0;

    virtual void visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) = 0;

    virtual void visitForStatement(std::shared_ptr<ForStatement> visitable) = 0;

    virtual void visitIfStatement(std::shared_ptr<IfStatement> visitable) = 0;

    virtual void visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) = 0;

    /**
     * Symbols
     */
    virtual void visitWhileStatement(std::shared_ptr<WhileStatement> visitable) = 0;

    virtual void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) = 0;

    virtual void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) = 0;

    virtual void visitInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) = 0;

    virtual void visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) = 0;

    virtual void visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) = 0;

    virtual void visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) = 0;

    virtual void visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) = 0;

    virtual void visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) = 0;

    virtual void visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) = 0;
};


#endif //SLOVENC_ABSTRACTMODELVISITOR_H
