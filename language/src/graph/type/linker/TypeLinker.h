//
// Created by andraz on 28/04/2020.
//

#ifndef SLOVENC_TYPELINKER_H
#define SLOVENC_TYPELINKER_H


#include <graph/base/GraphOrNode.h>
#include <graph/type/TypeGraph.h>
#include "model/Model.h"
#include <project/Project.h>
#include "graph/SymbolSearcher.h"
#include "graph/dataflow/linker/utils/FrameStack.h"

class TypeLinker : public ModelVisitor<GraphOrNode> {
private:
    std::shared_ptr<TypeGraph> graph;
    const std::shared_ptr<Project> project;
    const std::shared_ptr<FileSymbol> fileSymbol;

    SymbolSearcher searcher;

    std::shared_ptr<Symbol> getSymbol(std::shared_ptr<TypeReferenceExpression> expression);

public:
    TypeLinker(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol);

    std::shared_ptr<TypeGraph> link();

    void visitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) override;

    void visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;

    void visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) override;

    void visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) override;

    void visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) override;

    void visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) override;

    void visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) override;

    void visitBlockStatement(std::shared_ptr<BlockStatement> visitable) override;

    void visitElseStatement(std::shared_ptr<ElseStatement> visitable) override;

    void visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) override;

    void visitForStatement(std::shared_ptr<ForStatement> visitable) override;

    void visitIfStatement(std::shared_ptr<IfStatement> visitable) override;

    void visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) override;

    void visitWhileStatement(std::shared_ptr<WhileStatement> visitable) override;

    void visitCompareExpression(std::shared_ptr<CompareExpression> visitable) override;

    void visitNotExpression(std::shared_ptr<NotExpression> visitable) override;

    void visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) override;

    void visitThisExpression(std::shared_ptr<ThisExpression> visitable) override;

    void visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) override;

    void visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) override;

    void visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) override;

    void visitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) override;

    void visitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) override;

    void visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) override;

    void visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) override;

    void visitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) override;

    void visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) override;
};


#endif //SLOVENC_TYPELINKER_H
