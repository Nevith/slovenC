//
// Created by Andraz on 24/03/2020.
//

#include "SymbolBuilder.h"

SymbolBuilder::SymbolBuilder(const std::shared_ptr<CurrentState> &currentState, TypeReferenceBuilder* typeBuilder)
        : currentState(currentState), typeBuilder(typeBuilder) {}

antlrcpp::Any SymbolBuilder::visitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *ctx) {
    // Obtain the file we are in
    auto fileSymbol = currentState->getFileSymbol();
    auto symbol = std::make_shared<ClassSymbol>(ctx->Identifier()->getText());
    symbol->setContext(ctx);

    // Set file symbol
    symbol->setFileSymbol(fileSymbol);

    // Obtain the parent symbol of this class
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
    std::vector<std::shared_ptr<TypeReferenceExpression>> superClasses = typeBuilder->visit(ctx->inheritance());
    for (auto superClass : superClasses) {
        symbol->addSuperClass(superClass);
    }

    return symbol;
}
