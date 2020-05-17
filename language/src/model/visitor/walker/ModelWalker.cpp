//
// Created by andraz on 12/05/2020.
//

#include "ModelWalker.h"

const std::vector<std::shared_ptr<ModelWalkerListener>> &ModelWalker::getListeners() const {
    return listeners;
}

void ModelWalker::addListener(const std::shared_ptr<ModelWalkerListener> &listener) {
    listeners.push_back(listener);
}

void ModelWalker::visit(std::shared_ptr<Visitable> visitable) {
    for (auto listener : listeners) {
        listener->enterEveryVisitable(visitable);
    }

    AbstractModelVisitor::visit(visitable);

    for (auto listener : listeners) {
        listener->exitEveryVisitable(visitable);
    }
}

void ModelWalker::visitCompareExpression(std::shared_ptr<CompareExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterCompareExpression(visitable);
    }

    visit(visitable->getLeftExpression());
    visit(visitable->getRightExpression());

    for (auto listener : listeners) {
        listener->exitCompareExpression(visitable);
    }
}

void ModelWalker::visitNotExpression(std::shared_ptr<NotExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterNotExpression(visitable);
    }

    visit(visitable->getExpression());

    for (auto listener : listeners) {
        listener->exitNotExpression(visitable);
    }
}

void ModelWalker::visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterIdentifierExpression(visitable);
    }

    visit(visitable->getObject());

    for (auto listener : listeners) {
        listener->exitIdentifierExpression(visitable);
    }
}

void ModelWalker::visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterPackageOrFileReferenceExpression(visitable);
    }

    visit(visitable->getObject());

    for (auto listener : listeners) {
        listener->exitPackageOrFileReferenceExpression(visitable);
    }
}

void ModelWalker::visitThisExpression(std::shared_ptr<ThisExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterThisExpression(visitable);
    }

    visit(visitable->getObject());

    for (auto listener : listeners) {
        listener->exitThisExpression(visitable);
    }
}

void ModelWalker::visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterTypeReferenceExpression(visitable);
    }

    visit(visitable->getObject());

    for (auto listener : listeners) {
        listener->exitTypeReferenceExpression(visitable);
    }
}

void ModelWalker::visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterConstructorCallExpression(visitable);
    }

    for (auto argument : visitable->getArguments()) {
        visit(argument);
    }
    visit(visitable->getObject());

    for (auto listener : listeners) {
        listener->exitConstructorCallExpression(visitable);
    }
}

void ModelWalker::visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterMethodCallExpression(visitable);
    }

    for (auto argument : visitable->getArguments()) {
        visit(argument);
    }
    visit(visitable->getObject());

    for (auto listener : listeners) {
        listener->exitMethodCallExpression(visitable);
    }
}

void ModelWalker::visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterThisCallExpression(visitable);
    }

    for (auto argument : visitable->getArguments()) {
        visit(argument);
    }
    visit(visitable->getObject());

    for (auto listener : listeners) {
        listener->exitThisCallExpression(visitable);
    }
}

void ModelWalker::visitBooleanLiteral(std::shared_ptr<BooleanLiteral> visitable) {
    for (auto listener : listeners) {
        listener->enterBooleanLiteral(visitable);
    }
    for (auto listener : listeners) {
        listener->exitBooleanLiteral(visitable);
    }
}

void ModelWalker::visitDoubleLiteral(std::shared_ptr<DoubleLiteral> visitable) {
    for (auto listener : listeners) {
        listener->enterDoubleLiteral(visitable);
    }
    for (auto listener : listeners) {
        listener->exitDoubleLiteral(visitable);
    }
}

void ModelWalker::visitIntegerLiteral(std::shared_ptr<IntegerLiteral> visitable) {
    for (auto listener : listeners) {
        listener->enterIntegerLiteral(visitable);
    }
    for (auto listener : listeners) {
        listener->exitIntegerLiteral(visitable);
    }
}

void ModelWalker::visitNullLiteral(std::shared_ptr<NullLiteral> visitable) {
    for (auto listener : listeners) {
        listener->enterNullLiteral(visitable);
    }
    for (auto listener : listeners) {
        listener->exitNullLiteral(visitable);
    }
}

void ModelWalker::visitStringLiteral(std::shared_ptr<StringLiteral> visitable) {
    for (auto listener : listeners) {
        listener->enterStringLiteral(visitable);
    }
    for (auto listener : listeners) {
        listener->exitStringLiteral(visitable);
    }
}

void ModelWalker::visitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterAdditiveExpression(visitable);
    }

    visit(visitable->getLeftExpression());
    visit(visitable->getRightExpression());

    for (auto listener : listeners) {
        listener->exitAdditiveExpression(visitable);
    }
}

void ModelWalker::visitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterMultiplicationExpression(visitable);
    }

    visit(visitable->getLeftExpression());
    visit(visitable->getRightExpression());

    for (auto listener : listeners) {
        listener->exitMultiplicationExpression(visitable);
    }
}

void ModelWalker::visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterAssignmentExpression(visitable);
    }

    visit(visitable->getIdentifier());
    visit(visitable->getExpression());

    for (auto listener : listeners) {
        listener->exitAssignmentExpression(visitable);
    }
}

void ModelWalker::visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterIncrementDecrementExpression(visitable);
    }

    visit(visitable->getExpression());

    for (auto listener : listeners) {
        listener->exitIncrementDecrementExpression(visitable);
    }
}

void ModelWalker::visitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) {
    for (auto listener : listeners) {
        listener->enterParenthesizedExpression(visitable);
    }

    visit(visitable->getExpression());

    for (auto listener : listeners) {
        listener->exitParenthesizedExpression(visitable);
    }
}

void ModelWalker::visitBreakStatement(std::shared_ptr<BreakStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterBreakStatement(visitable);
    }
    for (auto listener : listeners) {
        listener->exitBreakStatement(visitable);
    }
}

void ModelWalker::visitContinueStatement(std::shared_ptr<ContinueStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterContinueStatement(visitable);
    }
    for (auto listener : listeners) {
        listener->exitContinueStatement(visitable);
    }
}

void ModelWalker::visitReturnStatement(std::shared_ptr<ReturnStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterReturnStatement(visitable);
    }

    auto expression = visitable->getExpression();
    if (expression) {
        visit(expression);
    }

    for (auto listener : listeners) {
        listener->exitReturnStatement(visitable);
    }
}

void ModelWalker::visitBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterBlockStatement(visitable);
    }

    for (auto statement : visitable->getStatements()) {
        visit(statement);
    }

    for (auto listener : listeners) {
        listener->exitBlockStatement(visitable);
    }
}

void ModelWalker::visitElseStatement(std::shared_ptr<ElseStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterElseStatement(visitable);
    }

    auto statement = visitable->getNestedStatement();
    if (statement) {
        visit(statement);
    }

    for (auto listener : listeners) {
        listener->exitElseStatement(visitable);
    }
}

void ModelWalker::visitEmptyStatement(std::shared_ptr<EmptyStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterEmptyStatement(visitable);
    }
    for (auto listener : listeners) {
        listener->exitEmptyStatement(visitable);
    }
}

void ModelWalker::visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterExpressionStatement(visitable);
    }

    auto expression = visitable->getExpression();
    if (expression) {
        visit(expression);
    }

    for (auto listener : listeners) {
        listener->exitExpressionStatement(visitable);
    }
}

void ModelWalker::visitForStatement(std::shared_ptr<ForStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterForStatement(visitable);
    }

    auto variables = visitable->getVariables();
    for (auto variable : variables) {
        visit(variable);
    }

    auto condition = visitable->getCondition();
    if (condition) {
        visit(condition);
    }

    auto updateExpressions = visitable->getUpdateExpressions();
    for (auto updateExpression : updateExpressions) {
        visit(updateExpression);
    }

    auto statement = visitable->getNestedStatement();
    if (statement) {
        visit(statement);
    }

    for (auto listener : listeners) {
        listener->exitForStatement(visitable);
    }
}

void ModelWalker::visitIfStatement(std::shared_ptr<IfStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterIfStatement(visitable);
    }

    auto condition = visitable->getCondition();
    if (condition) {
        visit(condition);
    }
    auto statement = visitable->getNestedStatement();
    if (statement) {
        visit(statement);
    }

    for (auto listener : listeners) {
        listener->exitIfStatement(visitable);
    }
}

void ModelWalker::visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterVariableDeclarationStatement(visitable);
    }

    auto variable = visitable->getVariableSymbol();
    if (variable) {
        visit(variable);
    }

    for (auto listener : listeners) {
        listener->exitVariableDeclarationStatement(visitable);
    }
}

void ModelWalker::visitWhileStatement(std::shared_ptr<WhileStatement> visitable) {
    for (auto listener : listeners) {
        listener->enterWhileStatement(visitable);
    }

    auto condition = visitable->getCondition();
    if (condition) {
        visit(condition);
    }
    auto statement = visitable->getNestedStatement();
    if (statement) {
        visit(statement);
    }

    for (auto listener : listeners) {
        listener->exitWhileStatement(visitable);
    }
}

void ModelWalker::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterClassSymbol(visitable);
    }

    auto superClasses = visitable->getSuperClasses();
    for (auto elem : superClasses) {
        visit(elem);
    }

    auto declaredFields = visitable->getDeclaredFields();
    for (auto elem : declaredFields) {
        visit(elem);
    }

    auto declaredMethods = visitable->getDeclaredMethods();
    for (auto elem : declaredMethods) {
        visit(elem);
    }

    auto declaredClasses = visitable->getDeclaredClasses();
    for (auto elem : declaredClasses) {
        visit(elem);
    }

    for (auto listener : listeners) {
        listener->exitClassSymbol(visitable);
    }
}

void ModelWalker::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterFileSymbol(visitable);
    }

    auto imports = visitable->getImports();
    for (auto elem : imports) {
        visit(elem);
    }

    auto declaredClasses = visitable->getDeclaredClasses();
    for (auto elem : declaredClasses) {
        visit(elem);
    }

    for (auto listener : listeners) {
        listener->exitFileSymbol(visitable);
    }
}

void ModelWalker::visitInvalidTypeSymbol(std::shared_ptr<InvalidTypeSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterInvalidTypeSymbol(visitable);
    }
    for (auto listener : listeners) {
        listener->exitInvalidTypeSymbol(visitable);
    }
}

void ModelWalker::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterMethodSymbol(visitable);
    }

    auto result = visitable->getResult();
    if (result) {
        visit(result);
    }

    auto parameters = visitable->getParameters();
    for (auto elem : parameters) {
        visit(elem);
    }

    auto scope = visitable->getScope();
    if (scope) {
        visit(scope);
    }

    for (auto listener : listeners) {
        listener->exitMethodSymbol(visitable);
    }
}

void ModelWalker::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterPackageSymbol(visitable);
    }

    auto children = visitable->getChildren();
    for (auto elem : children) {
        visit(elem);
    }

    for (auto listener : listeners) {
        listener->exitPackageSymbol(visitable);
    }
}

void ModelWalker::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterPredefinedSymbol(visitable);
    }

    // TODO

    for (auto listener : listeners) {
        listener->exitPredefinedSymbol(visitable);
    }
}

void ModelWalker::visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterFieldSymbol(visitable);
    }

    auto expression = visitable->getInitialValue();
    if (expression) {
        visit(expression);
    }
    auto type = visitable->getType();
    if (type) {
        visit(type);
    }

    for (auto listener : listeners) {
        listener->exitFieldSymbol(visitable);
    }
}

void ModelWalker::visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterLocalVariableSymbol(visitable);
    }

    auto expression = visitable->getInitialValue();
    if (expression) {
        visit(expression);
    }
    auto type = visitable->getType();
    if (type) {
        visit(type);
    }

    for (auto listener : listeners) {
        listener->exitLocalVariableSymbol(visitable);
    }
}

void ModelWalker::visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    for (auto listener : listeners) {
        listener->enterParameterSymbol(visitable);
    }

    auto type = visitable->getType();
    if (type) {
        visit(type);
    }

    for (auto listener : listeners) {
        listener->exitParameterSymbol(visitable);
    }
}
