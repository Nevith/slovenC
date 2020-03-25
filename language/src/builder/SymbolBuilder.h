//
// Created by Andraz on 24/03/2020.
//

#ifndef SLOVENC_SYMBOLBUILDER_H
#define SLOVENC_SYMBOLBUILDER_H


#include <memory>
#include "CurrentState.h"

class SymbolBuilder {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    SymbolBuilder(const std::shared_ptr<CurrentState> &currentState);
};


#endif //SLOVENC_SYMBOLBUILDER_H
