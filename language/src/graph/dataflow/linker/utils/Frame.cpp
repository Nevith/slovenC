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
