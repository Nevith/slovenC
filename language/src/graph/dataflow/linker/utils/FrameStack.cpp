//
// Created by andraz on 28/04/2020.
//

#include "FrameStack.h"

std::shared_ptr<Symbol> FrameStack::getSymbol(std::string identifier) {
    // Look up through the frames for the correct symbol
    for (int i = frameStack.size() - 1; i >= 0; --i) {
        auto frame = frameStack[i];

        auto symbol = frame.getSymbolByIdentifier(identifier);
        if (symbol) {
            return symbol;
        }
    }
    return InvalidSymbol::INVALID;
}

std::vector<std::shared_ptr<MethodSymbol>> FrameStack::getMethods(std::string identifier) {
    // Look up through the frames for the correct symbol
    for (int i = frameStack.size() - 1; i >= 0; --i) {
        auto frame = frameStack[i];

        auto symbols = frame.getMethodsByIdentifier(identifier);
        if (!symbols.empty()) {
            return symbols;
        }
    }
    return std::vector<std::shared_ptr<MethodSymbol>>();
}

void FrameStack::createFrame() {
    frameStack.push_back(Frame());
}

void FrameStack::popFrame() {
    frameStack.pop_back();
}

void FrameStack::pushSymbol(std::shared_ptr<Symbol> symbol, std::string identifier) {
    auto method = TypeUtils::cast<MethodSymbol>(symbol);
    if (method) {
        frameStack.back().addMethod(method, identifier);
    } else {
        frameStack.back().addSymbol(symbol, identifier);
    }
}
