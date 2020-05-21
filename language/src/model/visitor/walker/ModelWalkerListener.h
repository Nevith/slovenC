//
// Created by andraz on 12/05/2020.
//

#ifndef SLOVENC_MODELWALKERLISTENER_H
#define SLOVENC_MODELWALKERLISTENER_H

#include "model/Model.h"

class ModelWalkerListener {
public:
    virtual void enterEveryVisitable(std::shared_ptr<Visitable> visitable) {};

    virtual void enterCompareExpression(std::shared_ptr<CompareExpression> visitable) {};

    virtual void enterNotExpression(std::shared_ptr<NotExpression> visitable) {};

    virtual void enterIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {};

    virtual void enterPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {};

    virtual void enterThisExpression(std::shared_ptr<ThisExpression> visitable) {};

    virtual void enterTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {};

    virtual void enterConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {};

    virtual void enterMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {};

    virtual void enterThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {};

    virtual void enterBooleanLiteral(std::shared_ptr<BooleanLiteral> visitable) {};

    virtual void enterDoubleLiteral(std::shared_ptr<DoubleLiteral> visitable) {};

    virtual void enterIntegerLiteral(std::shared_ptr<IntegerLiteral> visitableIntegerLiteral) {};

    virtual void enterNullLiteral(std::shared_ptr<NullLiteral> visitable) {};

    virtual void enterStringLiteral(std::shared_ptr<StringLiteral> visitable) {};

    virtual void enterAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) {};

    virtual void enterMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) {};

    virtual void enterAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) {};

    virtual void enterIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) {};

    virtual void enterParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) {};

    virtual void enterBreakStatement(std::shared_ptr<BreakStatement> visitable) {};

    virtual void enterContinueStatement(std::shared_ptr<ContinueStatement> visitable) {};

    virtual void enterReturnStatement(std::shared_ptr<ReturnStatement> visitable) {};

    virtual void enterBlockStatement(std::shared_ptr<BlockStatement> visitable) {};

    virtual void enterElseStatement(std::shared_ptr<ElseStatement> visitable) {};

    virtual void enterEmptyStatement(std::shared_ptr<EmptyStatement> visitable) {};

    virtual void enterExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) {};

    virtual void enterForStatement(std::shared_ptr<ForStatement> visitable) {};

    virtual void enterIfStatement(std::shared_ptr<IfStatement> visitable) {};

    virtual void enterVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) {};

    virtual void enterWhileStatement(std::shared_ptr<WhileStatement> visitable) {};

    virtual void enterClassSymbol(std::shared_ptr<ClassSymbol> visitable) {};

    virtual void enterFileSymbol(std::shared_ptr<FileSymbol> visitable) {};

    virtual void enterInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) {};

    virtual void enterMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {};

    virtual void enterPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {};

    virtual void enterPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {};

    virtual void enterFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {};

    virtual void enterLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {};

    virtual void enterParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {};

    virtual void exitEveryVisitable(std::shared_ptr<Visitable> visitable) {};

    virtual void exitCompareExpression(std::shared_ptr<CompareExpression> visitable) {};

    virtual void exitNotExpression(std::shared_ptr<NotExpression> visitable) {};

    virtual void exitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {};

    virtual void exitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {};

    virtual void exitThisExpression(std::shared_ptr<ThisExpression> visitable) {};

    virtual void exitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {};

    virtual void exitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {};

    virtual void exitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {};

    virtual void exitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {};

    virtual void exitBooleanLiteral(std::shared_ptr<BooleanLiteral> visitable) {};

    virtual void exitDoubleLiteral(std::shared_ptr<DoubleLiteral> visitable) {};

    virtual void exitIntegerLiteral(std::shared_ptr<IntegerLiteral> visitableIntegerLiteral) {};

    virtual void exitNullLiteral(std::shared_ptr<NullLiteral> visitable) {};

    virtual void exitStringLiteral(std::shared_ptr<StringLiteral> visitable) {};

    virtual void exitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) {};

    virtual void exitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) {};

    virtual void exitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) {};

    virtual void exitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) {};

    virtual void exitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) {};

    virtual void exitBreakStatement(std::shared_ptr<BreakStatement> visitable) {};

    virtual void exitContinueStatement(std::shared_ptr<ContinueStatement> visitable) {};

    virtual void exitReturnStatement(std::shared_ptr<ReturnStatement> visitable) {};

    virtual void exitBlockStatement(std::shared_ptr<BlockStatement> visitable) {};

    virtual void exitElseStatement(std::shared_ptr<ElseStatement> visitable) {};

    virtual void exitEmptyStatement(std::shared_ptr<EmptyStatement> visitable) {};

    virtual void exitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) {};

    virtual void exitForStatement(std::shared_ptr<ForStatement> visitable) {};

    virtual void exitIfStatement(std::shared_ptr<IfStatement> visitable) {};

    virtual void exitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) {};

    virtual void exitWhileStatement(std::shared_ptr<WhileStatement> visitable) {};

    virtual void exitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {};

    virtual void exitFileSymbol(std::shared_ptr<FileSymbol> visitable) {};

    virtual void exitInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) {};

    virtual void exitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {};

    virtual void exitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {};

    virtual void exitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {};

    virtual void exitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {};

    virtual void exitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {};

    virtual void exitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {};
};


#endif //SLOVENC_MODELWALKERLISTENER_H
