//
// Created by Andraz on 24/03/2020.
//

#include "SymbolBuilder.h"

SymbolBuilder::SymbolBuilder(const std::shared_ptr<CurrentState> &currentState) : currentState(currentState) {}

antlrcpp::Any SymbolBuilder::visitNormalClassDeclaration(SlovenCLanguageParser::NormalClassDeclarationContext *ctx) {
    // Obtain the file we are in
    auto fileSymbol = currentState->getFileSymbol();
    auto symbol = std::make_shared<ClassSymbol>(ctx->Identifier()->getText());
    symbol->setContext(ctx);


    auto parentClass = currentState->getCurrentClass();
    if (parentClass) {
        parentClass->declareClass(symbol);
        symbol->setParentSymbol(parentClass);
    } else {
        symbol->setParentSymbol(fileSymbol);
        fileSymbol->addDeclaredClass(symbol);
    }

    return symbol;
}
