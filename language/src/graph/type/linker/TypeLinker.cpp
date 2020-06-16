//
// Created by andraz on 28/04/2020.
//

#include "TypeLinker.h"

std::shared_ptr<Symbol> TypeLinker::getSymbol(std::shared_ptr<IdentifierExpression> expression) {
    auto object = expression->getObject();
    if (object) {
        // Resolve parent object first
        visit(object);
        // Obtain the resolved type
        auto node = graph->getNode(object);
        auto parentSymbol = node->getSymbolEdge()->getStartingVertex()->getVisitable();
        // Try to find the identifier inside the object
        return searcher.findSymbol(expression, parentSymbol);
    } else {
        std::shared_ptr<Symbol> resolve;
        // Check if predefinedSymbol
        resolve = PredefinedSymbol::findPredefinedSymbol(expression->getName());
        if (resolve) {
            return resolve;
        }
        // Look inside this file and inside imported files
        resolve = searcher.findSymbol(expression, fileSymbol);
        // As soon as we find a match, return it
        if (resolve) {
            return resolve;
        }
        for (auto import : fileSymbol->getImports()) {
            auto importedFile = import->getResolve();
            if (importedFile) {
                resolve = searcher.findSymbol(expression, importedFile);
            }
            // As soon as we find a match, return it
            if (resolve) {
                return resolve;
            }
        }
    }
    // If nothing is found return invalid type
    return InvalidSymbol::INVALID;
}

TypeLinker::TypeLinker(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol) : project(project),
                                                                                                   fileSymbol(
                                                                                                           fileSymbol) {
    graph = std::make_shared<TypeGraph>();

    auto node = std::make_shared<TypeNode>(InvalidSymbol::INVALID);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::BOOLEAN);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::DOUBLE);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::INT);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::VOID);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::CONSOLE);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::OBJECT);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::STRING);
    graph->addNode(node);
    node = std::make_shared<TypeNode>(PredefinedSymbol::LIST);
    graph->addNode(node);
}

std::shared_ptr<TypeGraph> TypeLinker::link() {
    visit(fileSymbol);
    return graph;
}

void TypeLinker::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    auto fileNode = std::make_shared<TypeNode>(visitable);
    graph->addNode(fileNode);
    visit(visitable->getParentSymbol());

    for (auto import : visitable->getImports()) {
        visit(import);
    }
    for (auto clazz : visitable->getDeclaredClasses()) {
        visit(clazz);
    }
}

void TypeLinker::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    auto fileNode = std::make_shared<TypeNode>(visitable);
    graph->addNode(fileNode);
    visit(visitable->getParentSymbol());
}

void TypeLinker::visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {
    auto node = std::make_shared<TypeNode>(visitable);
    graph->addNode(node);

    auto symbol = project->getSymbolByFullyQualifiedName(visitable->getFullyQualifiedName());
    std::shared_ptr<TypeNode> parentNode;
    if (symbol) {
        visitable->setResolve(symbol);
        // Correct import
        parentNode = graph->getNode(symbol);
        if (!parentNode) {
            parentNode = std::make_shared<TypeNode>(symbol);
            graph->addNode(parentNode);
        }
    } else {
        // Invalid import
        parentNode = graph->getNode(InvalidSymbol::INVALID);
    }

    graph->addEdge(parentNode, node, std::make_shared<TypeEdge>(true));
    if (visitable->getObject()) {
        visit(visitable->getObject());
    }
}

void TypeLinker::visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {
    auto node = std::make_shared<TypeNode>(visitable);
    graph->addNode(node);
    auto symbol = getSymbol(visitable);

    visitable->setResolve(symbol);
    // Correct import
    std::shared_ptr<TypeNode> parentNode = graph->getNode(symbol);
    if (!parentNode) {
        parentNode = std::make_shared<TypeNode>(symbol);
        graph->addNode(parentNode);
    }
    graph->addEdge(parentNode, node, std::make_shared<TypeEdge>(true));
}

void TypeLinker::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    auto classNode = std::make_shared<TypeNode>(visitable);
    graph->addNode(classNode);

    for (auto superClass : visitable->getSuperClasses()) {
        visit(superClass);
    }
    for (auto field : visitable->getDeclaredFields()) {
        visit(field);
    }
    for (auto declaredClass : visitable->getDeclaredClasses()) {
        visit(declaredClass);
    }
    for (auto method : visitable->getDeclaredMethods()) {
        visit(method);
    }
    for (auto constructor : visitable->getConstructors()) {
        visit(constructor);
    }

}

void TypeLinker::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    visit(visitable->getResult());
    for (auto param : visitable->getParameters()) {
        visit(param);
    }
    visit(visitable->getScope());
}

void TypeLinker::visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    visit(visitable->getType());
}

void TypeLinker::visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    auto initialValue = visitable->getInitialValue();
    if (initialValue) {
        visit(initialValue);
    }
    visit(visitable->getType());
}

void TypeLinker::visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    visit(visitable->getType());
}

void TypeLinker::visitBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    for (auto statement : visitable->getStatements()) {
        visit(statement);
    }
}

void TypeLinker::visitElseStatement(std::shared_ptr<ElseStatement> visitable) {
    visit(visitable->getNestedStatement());
}

void TypeLinker::visitExpressionStatement(std::shared_ptr<ExpressionStatement> visitable) {
    visit(visitable->getExpression());
}

void TypeLinker::visitForStatement(std::shared_ptr<ForStatement> visitable) {
    for (auto variable : visitable->getVariables()) {
        visit(variable);
    }
    for (auto variable : visitable->getUpdateExpressions()) {
        visit(variable);
    }
    visit(visitable->getCondition());
    visit(visitable->getNestedStatement());
}

void TypeLinker::visitIfStatement(std::shared_ptr<IfStatement> visitable) {
    visit(visitable->getCondition());
    visit(visitable->getNestedStatement());
}

void TypeLinker::visitVariableDeclarationStatement(std::shared_ptr<VariableDeclarationStatement> visitable) {
    visit(visitable->getVariableSymbol());
}

void TypeLinker::visitWhileStatement(std::shared_ptr<WhileStatement> visitable) {
    visit(visitable->getCondition());
    visit(visitable->getNestedStatement());
}

void TypeLinker::visitCompareExpression(std::shared_ptr<CompareExpression> visitable) {
    visit(visitable->getLeftExpression());
    visit(visitable->getRightExpression());
}

void TypeLinker::visitNotExpression(std::shared_ptr<NotExpression> visitable) {
    visit(visitable->getExpression());
}

void TypeLinker::visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {
    auto symbol = getSymbol(visitable);
    if (symbol == InvalidSymbol::INVALID) {
        return;
    }

    auto node = std::make_shared<TypeNode>(visitable);
    graph->addNode(node);
    visitable->setResolve(symbol);
    // Correct import
    std::shared_ptr<TypeNode> parentNode = graph->getNode(symbol);
    if (!parentNode) {
        parentNode = std::make_shared<TypeNode>(symbol);
        graph->addNode(parentNode);
    }
    graph->addEdge(parentNode, node, std::make_shared<TypeEdge>(true));
}

void TypeLinker::visitThisExpression(std::shared_ptr<ThisExpression> visitable) {
    visit(visitable->getObject());
}

void TypeLinker::visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {
    auto constructionClass = getSymbol(visitable);
    for (auto argument : visitable->getArguments()) {
        visit(argument);
    }
    if (constructionClass) {
        auto clazz = TypeUtils::cast<ClassSymbol>(constructionClass);
        if (clazz) {
            visitable->setConstructionClass(clazz);
        }
    }

}

void TypeLinker::visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {
    visit(visitable->getObject());
    for (auto argument : visitable->getArguments()) {
        visit(argument);
    }
}

void TypeLinker::visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {
    visit(visitable->getObject());
    for (auto argument : visitable->getArguments()) {
        visit(argument);
    }
}

void TypeLinker::visitAdditiveExpression(std::shared_ptr<AdditiveExpression> visitable) {
    visit(visitable->getLeftExpression());
    visit(visitable->getRightExpression());
}

void TypeLinker::visitMultiplicationExpression(std::shared_ptr<MultiplicationExpression> visitable) {
    visit(visitable->getLeftExpression());
    visit(visitable->getRightExpression());
}

void TypeLinker::visitAssignmentExpression(std::shared_ptr<AssignmentExpression> visitable) {
    visit(visitable->getIdentifier());
    visit(visitable->getExpression());
}

void TypeLinker::visitIncrementDecrementExpression(std::shared_ptr<IncrementDecrementExpression> visitable) {
    visit(visitable->getExpression());
}

void TypeLinker::visitParenthesizedExpression(std::shared_ptr<ParenthesizedExpression> visitable) {
    visit(visitable->getExpression());
}
