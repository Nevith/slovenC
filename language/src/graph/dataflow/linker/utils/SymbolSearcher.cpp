//
// Created by andraz on 28/04/2020.
//

#include "SymbolSearcher.h"

std::shared_ptr<Symbol>
SymbolSearcher::findSymbol(std::shared_ptr<IdentifierExpression> expression, std::shared_ptr<Visitable> visitable) {
    searchIdentifier = expression;
    setLastResult(nullptr);
    possibleMethods.clear();
    staticContext = false;
    visit(visitable);
    return getLastResult();
}

std::vector<std::shared_ptr<MethodSymbol>>
SymbolSearcher::findMethods(std::shared_ptr<CallExpression> expression, std::shared_ptr<Visitable> visitable) {
    searchIdentifier = expression;
    setLastResult(nullptr);
    possibleMethods.clear();
    staticContext = false;
    visit(visitable);
    return possibleMethods;
}


void SymbolSearcher::visitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    // Check if we are looking for a method
    auto methodCall = TypeUtils::cast<CallExpression>(searchIdentifier);
    if (methodCall) {
        for (auto symbol : visitable->getDeclaredMethods()) {
            if (symbol->getName() == searchIdentifier->getName()) {
                if (!staticContext || (staticContext && symbol->isStatic())) {
                    possibleMethods.push_back(symbol);
                }
            }
        }
    } else {
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

void SymbolSearcher::visitPredefinedSymbol(std::shared_ptr<PredefinedSymbol> visitable) {
    // TODO - lookup table or what?
    ModelVisitor::visitPredefinedSymbol(visitable);
}

void SymbolSearcher::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    // Static context
    staticContext = true;
    for (auto symbol : visitable->getDeclaredClasses()) {
        if (symbol->getName() == searchIdentifier->getName()) {
            setLastResult(symbol);
            return;
        }
    }
}

void SymbolSearcher::visitPackageSymbol(std::shared_ptr<PackageSymbol> visitable) {
    // Static context
    staticContext = true;
    for (auto symbol : visitable->getChildren()) {
        if (symbol->getName() == searchIdentifier->getName()) {
            setLastResult(symbol);
            return;
        }
    }
}

void SymbolSearcher::visitTypeReferenceExpression(std::shared_ptr<TypeReferenceExpression> visitable) {
    // Static context
    staticContext = true;
    visit(visitable->getResolve());
}

void
SymbolSearcher::visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {
    // Static context
    staticContext = true;
    visit(visitable->getResolve());
}


void SymbolSearcher::visitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) {
    staticContext = false;
    auto resolve = visitable->getResolve();
    if (resolve) {
        auto methodSymbol = TypeUtils::cast<MethodSymbol>(resolve);
        if (methodSymbol) {
            auto clazz = methodSymbol->getParentSymbol();
            if (clazz) {
                staticContext = false;
                visit(clazz);
            }
        }
    }
}

void SymbolSearcher::visitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) {
    auto resolve = visitable->getResolve();
    if (resolve) {
        auto methodSymbol = TypeUtils::cast<MethodSymbol>(resolve);
        if (methodSymbol) {
            auto methodResult = methodSymbol->getResult();
            if (methodResult) {
                staticContext = false;
                visit(methodResult->getResolve());
            }
        }
    }
}

void SymbolSearcher::visitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) {
    staticContext = false;
    auto resolve = visitable->getResolve();
    if (resolve) {
        staticContext = false;
        visit(visitable->getParentClass());
    }
}

void SymbolSearcher::visitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) {
    auto resolve = visitable->getResolve();
    if (resolve) {
        auto clazz = TypeUtils::cast<ClassSymbol>(resolve);
        auto file = TypeUtils::cast<FileSymbol>(resolve);
        auto package = TypeUtils::cast<PackageSymbol>(resolve);
        staticContext = clazz || file || package;
        visit(resolve);
    }
}

void SymbolSearcher::visitThisExpression(std::shared_ptr<ThisExpression> visitable) {
    auto resolve = visitable->getResolve();
    if (resolve) {
        staticContext = false;
        visit(visitable->getParentClass());
    }
}

void SymbolSearcher::visitInvalidTypeSymbol(std::shared_ptr<InvalidSymbol> visitable) {
    setLastResult(visitable);
}

void SymbolSearcher::visitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    if (visitable->getIsConstructor()) {
        visit(visitable->getParentSymbol());
    } else {
        auto result = visitable->getResult();
        if (result) {
            visit(result->getResolve());
        } else {
            visit(InvalidSymbol::INVALID);
        }
    }
}

void SymbolSearcher::visitFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    staticContext = false;
    auto type = visitable->getType();
    if (type) {
        visit(type->getResolve());
    } else {
        visit(InvalidSymbol::INVALID);
    }
}

void SymbolSearcher::visitLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    staticContext = false;
    auto type = visitable->getType();
    if (type) {
        visit(type->getResolve());
    } else {
        visit(InvalidSymbol::INVALID);
    }
}

void SymbolSearcher::visitParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    staticContext = false;
    auto type = visitable->getType();
    if (type) {
        visit(type->getResolve());
    } else {
        visit(InvalidSymbol::INVALID);
    }
}
