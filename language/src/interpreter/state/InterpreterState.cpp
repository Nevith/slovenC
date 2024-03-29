//
// Created by andraz on 28/05/2020.
//

#include "InterpreterState.h"

Value InterpreterState::getValue(std::shared_ptr<Symbol> key) {
    return methodStates.back().getValue(key);
}

void InterpreterState::setValue(std::shared_ptr<Symbol> key, Value value) {
    methodStates.back().setValue(key, value);
}

MethodState InterpreterState::getCurrentState() {
    return  methodStates.back();
}

std::shared_ptr<MethodSymbol> InterpreterState::getCurrentMethod() {
    return methods.back();
}

void InterpreterState::enterMethod(std::shared_ptr<MethodSymbol> method, MethodState state) {
    methods.push_back(method);
    methodStates.push_back(state);
}

void InterpreterState::exitMethod() {
    methods.pop_back();
    methodStates.pop_back();
}

Value &InterpreterState::getThisReference() {
    return methodStates.back().getThisReference();
}

void InterpreterState::setThisReference(const Value &thisReference) {
    methodStates.back().setThisReference(thisReference);
}

void InterpreterState::setStaticValue(std::shared_ptr<Symbol> key, Value value) {
    staticState.setValue(key, value);
}

Value InterpreterState::getStaticValue(std::shared_ptr<Symbol> key) {
    return staticState.getValue(key);
}
