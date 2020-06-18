//
// Created by andraz on 09/06/2020.
//

#ifndef SLOVENC_PREDEFINEDINTERPRETER_H
#define SLOVENC_PREDEFINEDINTERPRETER_H


#include <model/symbols/main/MethodSymbol.h>
#include <interpreter/state/InterpreterState.h>

class PredefinedInterpreter : public ModelVisitor<Value> {
protected:
    InterpreterState interpreterState;

    void setValue(std::shared_ptr<IdentifierExpression> identifier, Value value);

    void getValue(std::shared_ptr<IdentifierExpression> identifier);

    std::string getString(Value value);

private:

    void TOSTRING(std::shared_ptr<MethodSymbol> method);

    void PRINT(std::shared_ptr<MethodSymbol> method);

    void READ(std::shared_ptr<MethodSymbol> method);

    void ADD(std::shared_ptr<MethodSymbol> method);

    void PUT(std::shared_ptr<MethodSymbol> method);

    void GET(std::shared_ptr<MethodSymbol> method);

    void REMOVE(std::shared_ptr<MethodSymbol> method);

    void SIZE(std::shared_ptr<MethodSymbol> method);

    void CONCATENATE(std::shared_ptr<MethodSymbol> method);

    void MAIN(std::shared_ptr<MethodSymbol> method);

    void RANDOM(std::shared_ptr<MethodSymbol> method);

    void LENGTH(std::shared_ptr<MethodSymbol> method);

public:
    PredefinedInterpreter();

    void runPredefinedMethod(std::shared_ptr<MethodSymbol> method);
};


#endif //SLOVENC_PREDEFINEDINTERPRETER_H
