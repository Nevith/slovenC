//
// Created by andraz on 28/04/2020.
//

#include "Frame.h"



const std::shared_ptr<Symbol> Frame::getSymbolByIdentifier(std::string identifier) {
    return identifierMap[identifier];
}

void Frame::addSymbol(std::shared_ptr<Symbol> symbol, std::string identifier) {
    identifierMap[identifier] = symbol;
}

const std::vector<std::shared_ptr<MethodSymbol>> Frame::getMethodsByIdentifier(std::string identifier) {
    return methodMap[identifier];
}

void Frame::addMethod(std::shared_ptr<MethodSymbol> symbol, std::string identifier) {
    methodMap[identifier].push_back(symbol);
}
