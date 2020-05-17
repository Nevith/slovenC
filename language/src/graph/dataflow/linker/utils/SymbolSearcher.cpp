//
// Created by andraz on 28/04/2020.
//

#include "SymbolSearcher.h"

std::shared_ptr<Symbol>
SymbolSearcher::findSymbol(std::shared_ptr<IdentifierExpression> expression, std::shared_ptr<Visitable> visitable) {
    searchIdentifier = expression;
    setLastResult(nullptr);
    staticContext = true;
    visit(visitable);
    return getLastResult();
}

void SymbolSearcher::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    // Check if we are looking for a method
    auto methodCall = TypeUtils::cast<CallExpression>(searchIdentifier);
    if (!methodCall) {
        for (auto symbol : visitable->getDeclaredClasses()) {
            if (symbol->getName() == searchIdentifier->getName()) {
                if (!staticContext || (staticContext && symbol->isStatic())) {
                    setLastResult(symbol);
                    return;
                } else {
                    // TODO - report instanced in static context error here?
                }
            }
        }
        for (auto symbol : visitable->getDeclaredFields()) {
            if (symbol->getName() == searchIdentifier->getName()) {
                if (!staticContext || (staticContext && symbol->isStatic())) {
                    setLastResult(symbol);
                    return;
                } else {
                    // TODO - report instanced in static context error here?
                }
            }
        }
    }

    for (auto superClass : visitable->getSuperClasses()) {
        if (getLastResult()) {
            return;
        }
        auto resolve = superClass->getResolve();
        if (resolve) {
            visit(resolve);
        }
    }
}

void SymbolSearcher::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    for (auto symbol : visitable->getDeclaredClasses()) {
        if (symbol->getName() == searchIdentifier->getName()) {
            setLastResult(symbol);
            return;
        }
    }
}

void SymbolSearcher::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    for (auto symbol : visitable->getChildren()) {
        if (symbol->getName() == searchIdentifier->getName()) {
            setLastResult(symbol);
            return;
        }
    }
}

void SymbolSearcher::visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    staticContext = false;
    auto resolvedType = visitable->getType()->getResolve();
    if (resolvedType) {
        visit(resolvedType);
    }
}

void SymbolSearcher::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    staticContext = false;
    auto resolvedType = visitable->getResult()->getResolve();
    if (resolvedType) {
        visit(resolvedType);
    }
}

void SymbolSearcher::visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    staticContext = false;
    auto resolvedType = visitable->getType()->getResolve();
    if (resolvedType) {
        visit(resolvedType);
    }
}

void SymbolSearcher::visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    staticContext = false;
    auto resolvedType = visitable->getType()->getResolve();
    if (resolvedType) {
        visit(resolvedType);
    }
}

void SymbolSearcher::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    // TODO - lookup table
    ModelVisitor::visitPredefinedSymbol(visitable);
}

void SymbolSearcher::visitInvalidTypeSymbol(std::shared_ptr<InvalidTypeSymbol> visitable) {
    setLastResult(visitable);
}
