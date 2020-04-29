//
// Created by Andraz on 24/03/2020.
//

#include <model/symbols/variables/LocalVariableSymbol.h>
#include <future>
#include "SymbolBuilder.h"

SymbolBuilder::SymbolBuilder(const std::shared_ptr<CurrentState> &currentState, ReferenceBuilder *referenceBuilder,
                             ExpressionBuilder *expressionBuilder)
        : currentState(currentState), referenceBuilder(referenceBuilder), expressionBuilder(expressionBuilder) {}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// CLASS ////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
antlrcpp::Any SymbolBuilder::visitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *ctx) {
    // Obtain the file we are in
    auto fileSymbol = currentState->getFileSymbol();
    auto symbol = std::make_shared<ClassSymbol>(ctx->Identifier()->getText());
    symbol->setContext(ctx);

    // Set file symbol
    symbol->setFileSymbol(fileSymbol);

    // Obtain the object symbol of this class
    auto parentClass = currentState->getCurrentClass();
    if (parentClass) {
        parentClass->declareClass(symbol);
        symbol->setParentSymbol(parentClass);
    } else {
        symbol->setParentSymbol(fileSymbol);
        fileSymbol->addDeclaredClass(symbol);
    }

    // Build modifiers
    ModBuilder::buildModifiers(symbol, ctx->modifierContext);

    // Build inheritance references
    std::vector<std::shared_ptr<TypeReferenceExpression>> superClasses = referenceBuilder->visit(ctx->inheritance());
    for (auto superClass : superClasses) {
        symbol->addSuperClass(superClass);
    }

    return symbol;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// METHODS //////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
antlrcpp::Any SymbolBuilder::visitMethodDeclaration(SlovenCLanguageParser::MethodDeclarationContext *ctx) {
    // Obtain method symbol from the child contexts
    std::shared_ptr<MethodSymbol> symbol = visit(ctx->methodHeader());
    symbol->setContext(ctx);
    // Build modifiers
    ModBuilder::buildModifiers(symbol, ctx->modifierContext);

    // Obtain the object class
    auto parentClass = currentState->getCurrentClass();
    // Declared method in class
    parentClass->declareMethod(symbol);
    // Tell method where it belongs!
    symbol->setParentSymbol(parentClass);


    symbol->setFileSymbol(currentState->getFileSymbol());

    return symbol;
}

antlrcpp::Any SymbolBuilder::visitMethodHeader(SlovenCLanguageParser::MethodHeaderContext *ctx) {
    // Obtain method symbol from the child contexts
    std::shared_ptr<MethodSymbol> symbol = visit(ctx->methodDeclarator());
    // Build return reference
    std::shared_ptr<TypeReferenceExpression> result = referenceBuilder->visit(ctx->result());
    symbol->setResult(result);
    return symbol;
}

antlrcpp::Any SymbolBuilder::visitMethodDeclarator(SlovenCLanguageParser::MethodDeclaratorContext *ctx) {
    return std::make_shared<MethodSymbol>(ctx->Identifier()->getText(), false);
}

antlrcpp::Any SymbolBuilder::visitConstructorDeclaration(SlovenCLanguageParser::ConstructorDeclarationContext *ctx) {
    // Obtain method symbol from the child contexts
    std::shared_ptr<MethodSymbol> symbol = visit(ctx->constructorDeclarator());
    symbol->setContext(ctx);

    // Build modifiers
    ModBuilder::buildModifiers(symbol, ctx->modifierContext);

    // Obtain the object class
    auto parentClass = currentState->getCurrentClass();
    // Declare method in class
    parentClass->declareConstructor(symbol);
    // Tell method where it belongs!
    symbol->setParentSymbol(parentClass);

    symbol->setFileSymbol(currentState->getFileSymbol());

    return symbol;
}

antlrcpp::Any SymbolBuilder::visitConstructorDeclarator(SlovenCLanguageParser::ConstructorDeclaratorContext *ctx) {
    return std::make_shared<MethodSymbol>(ctx->CONSTRUCTOR()->getText(), true);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// VARIABLES ////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
antlrcpp::Any SymbolBuilder::visitFieldDeclaration(SlovenCLanguageParser::FieldDeclarationContext *ctx) {
    std::shared_ptr<FieldSymbol> symbol = visit(ctx->fieldDeclarator());

    symbol->setContext(ctx);
    symbol->setType(referenceBuilder->visit(ctx->type()));
    ModBuilder::buildModifiers(symbol, ctx->modifierContext);

    // Obtain the object class
    auto parentClass = currentState->getCurrentClass();
    // Declare method in class
    parentClass->declareField(symbol);
    // Tell field where it belongs!
    symbol->setParentSymbol(parentClass);

    symbol->setFileSymbol(currentState->getFileSymbol());

    return symbol;
}

antlrcpp::Any SymbolBuilder::visitFieldDeclarator(SlovenCLanguageParser::FieldDeclaratorContext *ctx) {
    auto symbol = std::make_shared<FieldSymbol>(ctx->Identifier()->getText());
    // Check if value is assigned to the symbol
    if (ctx->ASSIGN()) {
        std::shared_ptr<Expression> initialValue = expressionBuilder->visit(ctx->expression());
        if (initialValue) {
            symbol->setInitialValue(initialValue);
        }
    }
    return symbol;
}

antlrcpp::Any
SymbolBuilder::visitLocalVariableDeclaration(SlovenCLanguageParser::LocalVariableDeclarationContext *ctx) {
    std::shared_ptr<LocalVariableSymbol> symbol = visit(ctx->variableDeclarator());

    symbol->setContext(ctx);
    symbol->setType(referenceBuilder->visit(ctx->type()));

    // Obtain the parents
    auto parentScope = currentState->getCurrentScope();
    auto parentMethod = currentState->getCurrentMethod();
    auto parentClass = currentState->getCurrentClass();
    // Declare parents
    symbol->setParenScope(parentScope);
    symbol->setParentMethod(parentMethod);
    symbol->setParentClass(parentClass);
    symbol->setFileSymbol(currentState->getFileSymbol());

    return symbol;
}

antlrcpp::Any SymbolBuilder::visitVariableDeclarator(SlovenCLanguageParser::VariableDeclaratorContext *ctx) {
    auto symbol = std::make_shared<LocalVariableSymbol>(ctx->Identifier()->getText());
    // Check if value is assigned to the symbol
    if (ctx->ASSIGN()) {
        std::shared_ptr<Expression> initialValue = expressionBuilder->visit(ctx->expression());
        if (initialValue) {
            symbol->setInitialValue(initialValue);
        }
    }
    return symbol;
}


antlrcpp::Any SymbolBuilder::visitFormalParameter(SlovenCLanguageParser::FormalParameterContext *ctx) {
    std::shared_ptr<ParameterSymbol> symbol = std::make_shared<ParameterSymbol>(ctx->Identifier()->getText());
    symbol->setContext(ctx);
    symbol->setType(referenceBuilder->visit(ctx->type()));

    // Obtain the parents
    auto parentClass = currentState->getCurrentClass();
    auto parentMethod = currentState->getCurrentMethod();
    // Declare parents
    symbol->setParentClass(parentClass);
    symbol->setParentMethod(parentMethod);
    symbol->setFileSymbol(currentState->getFileSymbol());

    parentMethod->addParameter(symbol);

    return symbol;
}