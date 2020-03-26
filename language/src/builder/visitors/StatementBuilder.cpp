//
// Created by Andraz on 25/03/2020.
//

#include "StatementBuilder.h"

StatementBuilder::StatementBuilder(const std::shared_ptr<CurrentState> &currentState, TypeReferenceBuilder* typeBuilder)
        : currentState(currentState), typeBuilder(typeBuilder) {}
