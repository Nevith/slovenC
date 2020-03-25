//
// Created by Andraz on 25/03/2020.
//

#ifndef SLOVENC_EXPRESSIONBUILDER_H
#define SLOVENC_EXPRESSIONBUILDER_H


#include <memory>
#include "CurrentState.h"

class ExpressionBuilder {
private:
    const std::shared_ptr<CurrentState> currentState;

public:
    ExpressionBuilder(const std::shared_ptr<CurrentState> &currentState);
};


#endif //SLOVENC_EXPRESSIONBUILDER_H
