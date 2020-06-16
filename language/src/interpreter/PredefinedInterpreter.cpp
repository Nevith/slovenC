//
// Created by andraz on 09/06/2020.
//

#include <interpreter/runtimevalues/ClassInstance.h>
#include "PredefinedInterpreter.h"
#include "SlovenCRuntimeException.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

PredefinedInterpreter::PredefinedInterpreter() {
    srand((unsigned) time(0));
}

void PredefinedInterpreter::runPredefinedMethod(std::shared_ptr<MethodSymbol> method) {
    auto methodName = method->getName();

    if (methodName == constants::TOSTRING) {
        TOSTRING(method);
    } else if (methodName == constants::PRINT) {
        PRINT(method);
    } else if (methodName == constants::READ) {
        READ(method);
    } else if (methodName == constants::ADD) {
        ADD(method);
    } else if (methodName == constants::PUT) {
        PUT(method);
    } else if (methodName == constants::GET) {
        GET(method);
    } else if (methodName == constants::REMOVE) {
        REMOVE(method);
    } else if (methodName == constants::SIZE) {
        SIZE(method);
    } else if (methodName == constants::CONCATENATE) {
        CONCATENATE(method);
    } else if (methodName == constants::MAIN) {
        MAIN(method);
    } else if (methodName == constants::RANDOM) {
        RANDOM(method);
    } else {
        throw SlovenCRuntimeException("Nepodprte predefinirana metoda '" + methodName + "'");
    }
}

void PredefinedInterpreter::TOSTRING(std::shared_ptr<MethodSymbol> method) {
    auto parameter = method->getParameters()[0];
    auto value = interpreterState.getValue(parameter);
    setLastResult(getString(value));
}

void PredefinedInterpreter::PRINT(std::shared_ptr<MethodSymbol> method) {
    auto parameter = method->getParameters()[0];
    auto value = interpreterState.getValue(parameter);
    std::cout << (getString(value)) << std::endl;
    setLastResult(Value());
}

void PredefinedInterpreter::READ(std::shared_ptr<MethodSymbol> method) {
    std::string value;
    std::cin >> value;
    setLastResult(value);
}

void PredefinedInterpreter::ADD(std::shared_ptr<MethodSymbol> method) {
    auto thisValue = interpreterState.getThisReference();
    auto thisInstance = std::static_pointer_cast<std::vector<Value>>(thisValue.getValue());
    auto object = interpreterState.getValue(method->getParameters()[0]);
    thisInstance->push_back(object);
    setLastResult(Value());
}

void PredefinedInterpreter::PUT(std::shared_ptr<MethodSymbol> method) {
    auto thisValue = interpreterState.getThisReference();
    auto thisInstance = std::static_pointer_cast<std::vector<Value>>(thisValue.getValue());
    auto object = interpreterState.getValue(method->getParameters()[0]);
    auto index = interpreterState.getValue(method->getParameters()[0]);
    int indexValue = *(int *) index.getValue().get();
    if (indexValue > thisInstance->size()) {
        throw SlovenCRuntimeException("Preveliki index");
    }
    thisInstance->insert(thisInstance->begin() + indexValue, object);
    setLastResult(Value());
}

void PredefinedInterpreter::GET(std::shared_ptr<MethodSymbol> method) {
    auto thisValue = interpreterState.getThisReference();
    auto thisInstance = std::static_pointer_cast<std::vector<Value>>(thisValue.getValue());
    auto object = interpreterState.getValue(method->getParameters()[0]);
    auto index = interpreterState.getValue(method->getParameters()[0]);
    int indexValue = *(int *) index.getValue().get();
    if (indexValue >= thisInstance->size()) {
        throw SlovenCRuntimeException("Preveliki index");
    }
    setLastResult(thisInstance->at(indexValue));
}

void PredefinedInterpreter::REMOVE(std::shared_ptr<MethodSymbol> method) {
    auto thisValue = interpreterState.getThisReference();
    auto thisInstance = std::static_pointer_cast<std::vector<Value>>(thisValue.getValue());
    if (thisInstance->empty()) {
        throw SlovenCRuntimeException("Lista je že prazna");
    }
    thisInstance->pop_back();
    setLastResult(Value());
}

void PredefinedInterpreter::SIZE(std::shared_ptr<MethodSymbol> method) {
    auto thisValue = interpreterState.getThisReference();
    auto thisInstance = std::static_pointer_cast<std::vector<Value>>(thisValue.getValue());
    setLastResult((int) (thisInstance->size()));
}

void PredefinedInterpreter::CONCATENATE(std::shared_ptr<MethodSymbol> method) {
    auto thisValue = interpreterState.getThisReference();
    auto thisInstance = std::static_pointer_cast<std::string>(thisValue.getValue());
    auto object = interpreterState.getValue(method->getParameters()[0]);
    auto secondInstance = std::static_pointer_cast<std::string>(object.getValue());
    setLastResult(thisInstance->append(*secondInstance.get()));
}

void PredefinedInterpreter::MAIN(std::shared_ptr<MethodSymbol> method) {
    visit(method->getScope());
    setLastResult(Value());
}

void PredefinedInterpreter::RANDOM(std::shared_ptr<MethodSymbol> method) {
    int randomNumber = rand();
    setLastResult(randomNumber);
}

void PredefinedInterpreter::setValue(std::shared_ptr<IdentifierExpression> identifier, Value value) {
    auto object = identifier->getObject();
    if (object) {
        visit(identifier->getObject());
    }
    auto symbol = identifier->getResolve();
    auto field = TypeUtils::cast<FieldSymbol>(symbol);
    auto variable = TypeUtils::cast<LocalVariableSymbol>(symbol);
    auto parameter = TypeUtils::cast<ParameterSymbol>(symbol);
    if (field) {
        if (!field->isStatic()) {
            if (object) {
                auto instance = std::static_pointer_cast<ClassInstance>(getLastResult().getValue());
                instance->setFieldValue(field, value);
            } else {
                auto instance = interpreterState.getThisReference();
                auto classInstance = std::static_pointer_cast<ClassInstance>(value.getValue());
                classInstance->setFieldValue(field, value);
            }
            return;
        }
    }
    interpreterState.setValue(symbol, value);
}

void PredefinedInterpreter::getValue(std::shared_ptr<IdentifierExpression> identifier) {
    auto object = identifier->getObject();
    if (object) {
        visit(identifier->getObject());
    }
    auto symbol = identifier->getResolve();
    auto field = TypeUtils::cast<FieldSymbol>(symbol);
    auto variable = TypeUtils::cast<LocalVariableSymbol>(symbol);
    auto parameter = TypeUtils::cast<ParameterSymbol>(symbol);
    if (field) {
        if (!field->isStatic()) {
            if (object) {
                auto instance = std::static_pointer_cast<ClassInstance>(getLastResult().getValue());
                setLastResult(instance->getFieldValue(field));
                return;
            } else {
                auto instance = interpreterState.getThisReference();
                auto classInstance = std::static_pointer_cast<ClassInstance>(instance.getValue());
                setLastResult(classInstance->getFieldValue(field));
                return;
            }
        }
    }

    setLastResult(interpreterState.getValue(identifier->getResolve()));
}

std::string PredefinedInterpreter::getString(Value value) {
    auto type = value.getType();
    std::string result;

    if (type == PredefinedSymbol::BOOLEAN) {
        if (*(bool *) value.getValue().get()) {
            result = constants::TRUE;
        } else {
            result = constants::FALSE;
        }
    } else if (type == PredefinedSymbol::INT) {
        int integer = *(int *) value.getValue().get();
        result = std::to_string(integer);
    } else if (type == PredefinedSymbol::DOUBLE) {
        double floatingPoint = *(double *) value.getValue().get();
        result = std::to_string(floatingPoint);
    } else if (type == PredefinedSymbol::STRING) {
        result = *(std::string *) value.getValue().get();
    } else if (type == PredefinedSymbol::LIST) {
        result = "Lista";
    } else if (type == PredefinedSymbol::VOID) {
        throw SlovenCRuntimeException("Nedovoljena operacija!");
    } else {
        result = "TODO";
    }

    return result;
}




