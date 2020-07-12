//
// Created by andraz on 28/05/2020.
//

#ifndef SLOVENC_INTERPRETERSTATE_H
#define SLOVENC_INTERPRETERSTATE_H


#include "MethodState.h"

class InterpreterState {

private:
    std::vector<MethodState> methodStates;

    std::vector<std::shared_ptr<MethodSymbol>> methods;

    MethodState staticState;

public:
    Value getValue(std::shared_ptr<Symbol> key);

    void setValue(std::shared_ptr<Symbol> key, Value value);

    void setStaticValue(std::shared_ptr<Symbol> key, Value value);

    Value getStaticValue(std::shared_ptr<Symbol> key);

    MethodState getCurrentState();

    std::shared_ptr<MethodSymbol> getCurrentMethod();

    void enterMethod(std::shared_ptr<MethodSymbol> method, MethodState state);

    void exitMethod();

    Value &getThisReference();

    void setThisReference(const Value &thisReference);
};


#endif //SLOVENC_INTERPRETERSTATE_H
