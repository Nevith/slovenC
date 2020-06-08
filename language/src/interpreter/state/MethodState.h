//
// Created by andraz on 28/05/2020.
//

#ifndef SLOVENC_METHODSTATE_H
#define SLOVENC_METHODSTATE_H


#include <interpreter/runtimevalues/Value.h>

class MethodState {
private:
    Value thisReference;

    std::shared_ptr<MethodSymbol> method;

    std::map<std::shared_ptr<Symbol>, Value> activeValues;

public:
    MethodState(const Value &thisReference, std::shared_ptr<MethodSymbol> method);

    Value getValue(std::shared_ptr<Symbol> key);

    void setValue(std::shared_ptr<Symbol> key, Value value);
};


#endif //SLOVENC_METHODSTATE_H
