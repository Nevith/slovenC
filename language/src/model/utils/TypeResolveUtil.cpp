//
// Created by andraz on 21/05/2020.
//

#include <model/symbols/main/PredefinedSymbol.h>
#include "TypeResolveUtil.h"


std::shared_ptr<Symbol> TypeResolveUtil::getType(std::shared_ptr<Visitable> visitable) {
    TypeResolveUtil util;
    util.setLastResult(nullptr);
    util.visit(visitable);
    return util.getLastResult();
}


void TypeResolveUtil::visitCompareExpression(std::shared_ptr<CompareExpression> visitable) {
    setLastResult(PredefinedSymbol::BOOLEAN);
}

void TypeResolveUtil::visitNotExpression(std::shared_ptr<NotExpression> visitable) {
    setLastResult(PredefinedSymbol::BOOLEAN);
}

void TypeResolveUtil::visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {
    auto resolve = visitable->getResolve();
    visit(resolve);
}

void TypeResolveUtil::visitPackageOrFileReferenceExpression(
        std::shared_ptr<PackageOrFileReferenceExpression> visitable) {
    auto resolve = visitable->getResolve();
    visit(resolve);
}

void TypeResolveUtil::visitThisExpression(std::shared_ptr<ThisExpression> visitable) {
    visit(visitable->getParentClass());
}

void TypeResolveUtil::visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {
    auto resolve = visitable->getResolve();
    visit(resolve);
}

void TypeResolveUtil::visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {
    auto resolve = visitable->getConstructionClass();
    visit(resolve);
}

void TypeResolveUtil::visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {
    auto resolve = visitable->getResolve();
    if (resolve) {
        visit(resolve);
    } else {
        setLastResult(InvalidSymbol::INVALID);
    }
}

void TypeResolveUtil::visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {
    visit(visitable->getParentClass());
}

void TypeResolveUtil::visitBooleanLiteral(std::shared_ptr<BooleanLiteral> visitable) {
    setLastResult(PredefinedSymbol::BOOLEAN);
}

void TypeResolveUtil::visitDoubleLiteral(std::shared_ptr<DoubleLiteral> visitable) {
    setLastResult(PredefinedSymbol::DOUBLE);
}

void TypeResolveUtil::visitIntegerLiteral(std::shared_ptr<IntegerLiteral> visitableIntegerLiteral) {
    setLastResult(PredefinedSymbol::INT);
}

void TypeResolveUtil::visitNullLiteral(std::shared_ptr<NullLiteral> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitStringLiteral(std::shared_ptr<StringLiteral> visitable) {
    setLastResult(PredefinedSymbol::STRING);
}

void TypeResolveUtil::visitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) {
    visit(visitable->getLeftExpression());
    auto leftType = getLastResult();
    visit(visitable->getRightExpression());
    auto rightType = getLastResult();

    if (leftType == PredefinedSymbol::DOUBLE &&
        (rightType == PredefinedSymbol::DOUBLE || rightType == PredefinedSymbol::INT)) {
        setLastResult(PredefinedSymbol::DOUBLE);
    } else if (rightType == PredefinedSymbol::DOUBLE &&
               (leftType == PredefinedSymbol::DOUBLE || leftType == PredefinedSymbol::INT)) {
        setLastResult(PredefinedSymbol::DOUBLE);
    } else {
        setLastResult(PredefinedSymbol::INT);
    }
}

void TypeResolveUtil::visitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) {
    visit(visitable->getLeftExpression());
    auto leftType = getLastResult();
    visit(visitable->getRightExpression());
    auto rightType = getLastResult();

    if (leftType == PredefinedSymbol::DOUBLE &&
        (rightType == PredefinedSymbol::DOUBLE || rightType == PredefinedSymbol::INT)) {
        setLastResult(PredefinedSymbol::DOUBLE);
    } else if (rightType == PredefinedSymbol::DOUBLE &&
               (leftType == PredefinedSymbol::DOUBLE || leftType == PredefinedSymbol::INT)) {
        setLastResult(PredefinedSymbol::DOUBLE);
    } else {
        setLastResult(PredefinedSymbol::INT);
    }
}

void TypeResolveUtil::visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) {
    visit(visitable->getIdentifier());
}

void
TypeResolveUtil::visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) {
    setLastResult(PredefinedSymbol::INT);
}

void TypeResolveUtil::visitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) {
    visit(visitable->getExpression());
}

void TypeResolveUtil::visitBreakStatement(std::shared_ptr<BreakStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitContinueStatement(std::shared_ptr<ContinueStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitReturnStatement(std::shared_ptr<ReturnStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitElseStatement(std::shared_ptr<ElseStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitEmptyStatement(std::shared_ptr<EmptyStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitForStatement(std::shared_ptr<ForStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitIfStatement(std::shared_ptr<IfStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void
TypeResolveUtil::visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitWhileStatement(std::shared_ptr<WhileStatement> visitable) {
    setLastResult(PredefinedSymbol::VOID);
}

void TypeResolveUtil::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    setLastResult(visitable);
}

void TypeResolveUtil::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    setLastResult(visitable);
}

void TypeResolveUtil::visitInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) {
    setLastResult(visitable);
}

void TypeResolveUtil::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    auto result = visitable->getResult();
    if (result) {
        visit(result);
    } else {
        setLastResult(InvalidSymbol::INVALID);
    }
}

void TypeResolveUtil::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    setLastResult(visitable);
}

void TypeResolveUtil::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    setLastResult(visitable);
}

void TypeResolveUtil::visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    auto type = visitable->getType();
    if (type) {
        visit(type);
    } else {
        setLastResult(InvalidSymbol::INVALID);
    }
}

void TypeResolveUtil::visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    auto type = visitable->getType();
    if (type) {
        visit(type);
    } else {
        setLastResult(InvalidSymbol::INVALID);
    }
}

void TypeResolveUtil::visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    auto type = visitable->getType();
    if (type) {
        visit(type);
    } else {
        setLastResult(InvalidSymbol::INVALID);
    }
}