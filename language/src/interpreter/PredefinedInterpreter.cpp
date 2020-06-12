//
// Created by andraz on 09/06/2020.
//

#include <interpreter/runtimevalues/ClassInstance.h>
#include "PredefinedInterpreter.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

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
        throw RuntimeException("Nepodprte predefinirana metoda '" + methodName + "'");
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
}

void PredefinedInterpreter::READ(std::shared_ptr<MethodSymbol> method) {
    std::string value;
    std::cin >> value;
    setLastResult(value);
}

void PredefinedInterpreter::ADD(std::shared_ptr<MethodSymbol> method) {

}

void PredefinedInterpreter::PUT(std::shared_ptr<MethodSymbol> method) {

}

void PredefinedInterpreter::GET(std::shared_ptr<MethodSymbol> method) {

}

void PredefinedInterpreter::REMOVE(std::shared_ptr<MethodSymbol> method) {

}

void PredefinedInterpreter::SIZE(std::shared_ptr<MethodSymbol> method) {

}

void PredefinedInterpreter::CONCATENATE(std::shared_ptr<MethodSymbol> method) {

}

void PredefinedInterpreter::MAIN(std::shared_ptr<MethodSymbol> method) {
    visit(method->getScope());
}

void PredefinedInterpreter::RANDOM(std::shared_ptr<MethodSymbol> method) {
    int randomNumber = rand() % 100;
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
            auto instance = std::static_pointer_cast<ClassInstance>(getLastResult().getValue());
            instance->setFieldValue(field, value);
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
            auto instance = std::static_pointer_cast<ClassInstance>(getLastResult().getValue());
            setLastResult(instance->getFieldValue(field));
            return;
        }
    }

    setLastResult(interpreterState.getValue(identifier->getResolve()));
}

std::string PredefinedInterpreter::getString(Value value) {
    // Parse value obj to string
    return std::string();
}

PredefinedInterpreter::PredefinedInterpreter() {
    srand((unsigned) time(0));
}






