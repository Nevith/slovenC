//
// Created by andraz on 28/04/2020.
//

#include "TypeSearcher.h"

std::shared_ptr<Symbol>
TypeSearcher::findSymbol(std::shared_ptr<IdentifierExpression> expression, std::shared_ptr<Visitable> visitable) {
    searchIdentifier = expression;
    setLastResult(nullptr);
    visit(visitable);
    return getLastResult();
}

void TypeSearcher::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    // Check if we are looking for a method
    auto methodCall = TypeUtils::cast<CallExpression>(searchIdentifier);
    if (methodCall) {
        return;
    } else {
        for (auto symbol : visitable->getDeclaredClasses()) {
            if (symbol->getName() == searchIdentifier->getName()) {
                setLastResult(symbol);
                return;
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

void TypeSearcher::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    for (auto symbol : visitable->getDeclaredClasses()) {
        if (symbol->getName() == searchIdentifier->getName()) {
            setLastResult(symbol);
            return;
        }
    }
}

void TypeSearcher::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    for (auto symbol : visitable->getChildren()) {
        if (symbol->getName() == searchIdentifier->getName()) {
            setLastResult(symbol);
            return;
        }
    }
}

void TypeSearcher::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    // TODO - lookup table
    ModelVisitor::visitPredefinedSymbol(visitable);
}

void TypeSearcher::visitInvalidTypeSymbol(std::shared_ptr<InvalidTypeSymbol> visitable) {
    setLastResult(visitable);
}
