//
// Created by andraz on 16/04/2020.
//

#ifndef SLOVENC_MODELVISITOR_H
#define SLOVENC_MODELVISITOR_H

#include <memory>
#include <model/Visitable.h>
#include "AbstractModelVisitor.h"

template<typename T>
class ModelVisitor: public AbstractModelVisitor {
private:
    T lastResult;

protected:
    void setLastResult(T lastResult) {
        ModelVisitor::lastResult = lastResult;
    }

public:
    T getLastResult() const {
        return lastResult;
    }

    void visitCompareExpression(std::shared_ptr<CompareExpression> visitable) override {

    }

    void visitNotExpression(std::shared_ptr<NotExpression> visitable) override {

    }

    void visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) override {

    }

    void visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) override {

    }

    void visitThisExpression(std::shared_ptr<ThisExpression> visitable) override {

    }

    void visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) override {

    }

    void visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) override {

    }

    void visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) override {

    }

    void visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) override {

    }

    void visitBooleanLiteral(std::shared_ptr<BooleanLiteral> visitable) override {

    }

    void visitDoubleLiteral(std::shared_ptr<DoubleLiteral> visitable) override {

    }

    void visitIntegerLiteral(std::shared_ptr<IntegerLiteral> visitableIntegerLiteral) override {

    }

    void visitNullLiteral(std::shared_ptr<NullLiteral> visitable) override {

    }

    void visitStringLiteral(std::shared_ptr<StringLiteral> visitable) override {

    }

    void visitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) override {

    }

    void visitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) override {

    }

    void visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) override {

    }

    void visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) override {

    }

    void visitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) override {

    }

    void visitBreakStatement(std::shared_ptr<BreakStatement> visitable) override {

    }

    void visitContinueStatement(std::shared_ptr<ContinueStatement> visitable) override {

    }

    void visitReturnStatement(std::shared_ptr<ReturnStatement> visitable) override {

    }

    void visitBlockStatement(std::shared_ptr<BlockStatement> visitable) override {

    }

    void visitElseStatement(std::shared_ptr<ElseStatement> visitable) override {

    }

    void visitEmptyStatement(std::shared_ptr<EmptyStatement> visitable) override {

    }

    void visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) override {

    }

    void visitForStatement(std::shared_ptr<ForStatement> visitable) override {

    }

    void visitIfStatement(std::shared_ptr<IfStatement> visitable) override {

    }

    void visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) override {

    }

    void visitWhileStatement(std::shared_ptr<WhileStatement> visitable) override {

    }

    void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override {

    }

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override {

    }

    void visitInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) override {

    }

    void visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) override {

    }

    void visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) override {

    }

    void visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) override {

    }

    void visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) override {

    }

    void visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) override {

    }

    void visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) override {

    }
};


#endif //SLOVENC_MODELVISITOR_H
