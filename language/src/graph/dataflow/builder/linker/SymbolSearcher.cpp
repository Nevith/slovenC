//
// Created by andraz on 28/04/2020.
//

#include "SymbolSearcher.h"

std::shared_ptr<Symbol> SymbolSearcher::findSymbol(std::shared_ptr<IdentifierExpression> expression, std::shared_ptr<Visitable> visitable) {
    searchIdentifier = expression;
    visit(visitable);
    return getLastResult();
}

void SymbolSearcher::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    if (TypeUtils::cast<CallExpression>(searchIdentifier)) {
        for (auto symbol : visitable->getDeclaredMethods()) {
            if (symbol->getName() == searchIdentifier->getName()) {
                setLastResult(symbol);
                return;
            }
        }
    } else {
        for (auto symbol : visitable->getDeclaredClasses()) {
            if (symbol->getName() == searchIdentifier->getName()) {
                setLastResult(symbol);
                return;
            }
        }
        for (auto symbol : visitable->getDeclaredFields()) {
            if (symbol->getName() == searchIdentifier->getName()) {
                setLastResult(symbol);
                return;
            }
        }
    }

    ModelVisitor::visitClassSymbol(visitable);
}

void SymbolSearcher::visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    ModelVisitor::visitLocalVariableSymbol(visitable);
}

void SymbolSearcher::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    ModelVisitor::visitFileSymbol(visitable);
}

void SymbolSearcher::visitInvalidTypeSymbol(std::shared_ptr<InvalidTypeSymbol> visitable) {
    ModelVisitor::visitInvalidTypeSymbol(visitable);
}

void SymbolSearcher::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    ModelVisitor::visitMethodSymbol(visitable);
}

void SymbolSearcher::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    ModelVisitor::visitPackageSymbol(visitable);
}

void SymbolSearcher::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    ModelVisitor::visitPredefinedSymbol(visitable);
}

void SymbolSearcher::visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    ModelVisitor::visitFieldSymbol(visitable);
}

void SymbolSearcher::visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    ModelVisitor::visitParameterSymbol(visitable);
}
