//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_STATEMENTBUILDER_H
#define SLOVENC_STATEMENTBUILDER_H


#include "CurrentState.h"

class StatementBuilder {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    StatementBuilder(const std::shared_ptr<CurrentState> &currentState);
};


#endif //SLOVENC_STATEMENTBUILDER_H
