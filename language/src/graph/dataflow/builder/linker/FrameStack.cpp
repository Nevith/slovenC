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
    return nullptr;
}

void FrameStack::createFrame() {
    frameStack.push_back(Frame());
}

void FrameStack::popFrame() {
    frameStack.pop_back();
}

void FrameStack::pushSymbol(std::shared_ptr<Symbol> symbol, std::string identifier) {
    frameStack.back().addSymbol(symbol, identifier);
}
