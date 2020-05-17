//
// Created by andraz on 28/04/2020.
//

#ifndef SLOVENC_FRAMESTACK_H
#define SLOVENC_FRAMESTACK_H


#include <stack>
#include "Frame.h"

class FrameStack {
private:
    std::vector<Frame> frameStack;

public:

    std::shared_ptr<Symbol> getSymbol(std::string identifier);

    std::vector<std::shared_ptr<MethodSymbol>> getMethods(std::string identifier);

    void pushSymbol(std::shared_ptr<Symbol> symbol, std::string identifier);

    void createFrame();

    void popFrame();
};


#endif //SLOVENC_FRAMESTACK_H
