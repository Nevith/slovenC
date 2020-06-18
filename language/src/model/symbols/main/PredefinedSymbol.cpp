/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "PredefinedSymbol.h"

/**
 * PredefinedSymbol implementation
 */

PredefinedSymbol::PredefinedSymbol(std::string name) : ClassSymbol(name) {
}

const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::OBJECT = std::make_shared<PredefinedSymbol>(constants::OBJECT);
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::BOOLEAN = std::make_shared<PredefinedSymbol>(constants::BOOLEAN);
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::INT = std::make_shared<PredefinedSymbol>(constants::INTEGER);
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::DOUBLE = std::make_shared<PredefinedSymbol>(constants::DOUBLE);
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::VOID = std::make_shared<PredefinedSymbol>(constants::VOID);
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::STRING = std::make_shared<PredefinedSymbol>(constants::STRING);
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::CONSOLE = std::make_shared<PredefinedSymbol>(constants::CONSOLE);
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::LIST = std::make_shared<PredefinedSymbol>(constants::LIST);

void PredefinedSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitPredefinedSymbol(TypeUtils::cast<PredefinedSymbol>(visitable));
}

std::shared_ptr<PredefinedSymbol> PredefinedSymbol::findPredefinedSymbol(std::string name) {
    if (name == BOOLEAN->getName()) {
        return BOOLEAN;
    } else if (name == INT->getName()) {
        return INT;
    } else if (name == DOUBLE->getName()) {
        return DOUBLE;
    } else if (name == VOID->getName()) {
        return VOID;
    } else if (name == CONSOLE->getName()) {
        return CONSOLE;
    } else if (name == STRING->getName()) {
        return STRING;
    } else if (name == LIST->getName()) {
        return LIST;
    } else if (name == OBJECT->getName()) {
        return OBJECT;
    }
    return nullptr;
}

void PredefinedSymbol::initPredefinedSymbols() {
    // TODO - Don't hard-code predefined classes, but write them in slovenC
    OBJECT->init();
    BOOLEAN->init();
    INT->init();
    DOUBLE->init();
    VOID->init();
    STRING->init();
    CONSOLE->init();
    LIST->init();
}

void PredefinedSymbol::init() {
    // TODO - Don't hard-code predefined classes, but write them in slovenC
    if (getName() == constants::OBJECT) {
        auto toString = std::make_shared<MethodSymbol>(constants::TOSTRING, false, true);
        auto parameter = std::make_shared<ParameterSymbol>("o");
        auto typeReference = std::make_shared<TypeReferenceExpression>(OBJECT->getName());
        auto returnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        typeReference->setResolve(OBJECT);
        typeReference->setParentClass(OBJECT);
        typeReference->setParentMethod(toString);
        parameter->setType(typeReference);
        parameter->setParentMethod(toString);
        parameter->setParentClass(OBJECT);
        returnType->setResolve(STRING);
        returnType->setParentClass(OBJECT);
        returnType->setParentMethod(toString);
        toString->addParameter(parameter);
        toString->setResult(returnType);
        toString->setPublic();
        declareMethod(toString);

        auto constructor = std::make_shared<MethodSymbol>(constants::CONSTRUCTOR, true, true);
        constructor->setParentSymbol(OBJECT);
        constructor->setPublic();
        declareConstructor(constructor);

    } else if (getName() == constants::BOOLEAN) {
        auto constructor = std::make_shared<MethodSymbol>(constants::CONSTRUCTOR, true, true);
        constructor->setParentSymbol(BOOLEAN);
        constructor->setPublic();
        declareConstructor(constructor);

    } else if (getName() == constants::INTEGER) {
        auto constructor = std::make_shared<MethodSymbol>(constants::CONSTRUCTOR, true, true);
        constructor->setParentSymbol(INT);
        constructor->setPublic();
        declareConstructor(constructor);

    } else if (getName() == constants::DOUBLE) {
        auto constructor = std::make_shared<MethodSymbol>(constants::CONSTRUCTOR, true, true);
        constructor->setParentSymbol(DOUBLE);
        constructor->setPublic();
        declareConstructor(constructor);

    } else if (getName() == constants::VOID) {
        auto constructor = std::make_shared<MethodSymbol>(constants::CONSTRUCTOR, true, true);
        constructor->setParentSymbol(VOID);
        constructor->setPublic();
        declareConstructor(constructor);

    } else if (getName() == constants::STRING) {
        auto constructor = std::make_shared<MethodSymbol>(constants::CONSTRUCTOR, true, true);
        constructor->setParentSymbol(STRING);
        constructor->setPublic();
        declareConstructor(constructor);

        auto concatenate = std::make_shared<MethodSymbol>(constants::CONCATENATE, false, true);
        auto parameter = std::make_shared<ParameterSymbol>("o");
        auto typeReference = std::make_shared<TypeReferenceExpression>(STRING->getName());
        auto returnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        typeReference->setResolve(STRING);
        typeReference->setParentClass(STRING);
        typeReference->setParentMethod(concatenate);
        parameter->setType(typeReference);
        parameter->setParentMethod(concatenate);
        parameter->setParentClass(STRING);
        returnType->setResolve(STRING);
        returnType->setParentClass(STRING);
        returnType->setParentMethod(concatenate);
        concatenate->addParameter(parameter);
        concatenate->setResult(returnType);
        concatenate->setPublic();
        declareMethod(concatenate);

        auto size = std::make_shared<MethodSymbol>(constants::LENGTH, false, true);
        auto sizeReturnType = std::make_shared<TypeReferenceExpression>(INT->getName());
        sizeReturnType->setResolve(INT);
        sizeReturnType->setParentClass(STRING);
        sizeReturnType->setParentMethod(concatenate);
        size->setResult(sizeReturnType);
        size->setPublic();
        declareMethod(size);


    } else if (getName() == constants::CONSOLE) {
        auto print = std::make_shared<MethodSymbol>(constants::PRINT, false, true);
        auto parameter = std::make_shared<ParameterSymbol>("o");
        auto typeReference = std::make_shared<TypeReferenceExpression>(OBJECT->getName());
        auto returnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        typeReference->setResolve(OBJECT);
        typeReference->setParentClass(CONSOLE);
        typeReference->setParentMethod(print);
        parameter->setType(typeReference);
        parameter->setParentMethod(print);
        parameter->setParentClass(CONSOLE);
        returnType->setResolve(VOID);
        returnType->setParentClass(CONSOLE);
        returnType->setParentMethod(print);
        print->addParameter(parameter);
        print->setResult(returnType);
        print->setStatic();
        print->setPublic();
        declareMethod(print);


        auto read = std::make_shared<MethodSymbol>(constants::READ, false, true);
        auto readReturnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        readReturnType->setResolve(STRING);
        readReturnType->setParentClass(CONSOLE);
        readReturnType->setParentMethod(read);
        read->setResult(readReturnType);
        read->setStatic();
        read->setPublic();
        declareMethod(read);

        auto random = std::make_shared<MethodSymbol>(constants::RANDOM, false, true);
        auto randomReturnType = std::make_shared<TypeReferenceExpression>(INT->getName());
        randomReturnType->setResolve(INT);
        randomReturnType->setParentClass(CONSOLE);
        randomReturnType->setParentMethod(read);
        random->setResult(randomReturnType);
        random->setStatic();
        random->setPublic();
        declareMethod(random);

    } else if (getName() == constants::LIST) {
        auto add = std::make_shared<MethodSymbol>(constants::ADD, false, true);
        auto parameter = std::make_shared<ParameterSymbol>("o");
        auto typeReference = std::make_shared<TypeReferenceExpression>(OBJECT->getName());
        auto returnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        typeReference->setResolve(OBJECT);
        typeReference->setParentClass(LIST);
        typeReference->setParentMethod(add);
        parameter->setType(typeReference);
        parameter->setParentMethod(add);
        parameter->setParentClass(LIST);
        returnType->setResolve(VOID);
        returnType->setParentClass(LIST);
        returnType->setParentMethod(add);
        add->addParameter(parameter);
        add->setResult(returnType);
        add->setPublic();
        declareMethod(add);

        auto addWithIndex = std::make_shared<MethodSymbol>(constants::PUT, false, true);
        auto addWithIndexParameterOne = std::make_shared<ParameterSymbol>("i");
        auto addWithIndexParameterTwo = std::make_shared<ParameterSymbol>("o");
        auto addWithIndexTypeReferenceOne = std::make_shared<TypeReferenceExpression>(INT->getName());
        auto addWithIndexTypeReferenceTwo = std::make_shared<TypeReferenceExpression>(OBJECT->getName());
        auto addWithIndexReturnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        addWithIndexTypeReferenceOne->setResolve(INT);
        addWithIndexTypeReferenceOne->setParentClass(LIST);
        addWithIndexTypeReferenceOne->setParentMethod(addWithIndex);
        addWithIndexTypeReferenceTwo->setResolve(OBJECT);
        addWithIndexTypeReferenceTwo->setParentClass(LIST);
        addWithIndexTypeReferenceTwo->setParentMethod(addWithIndex);
        addWithIndexParameterOne->setType(addWithIndexTypeReferenceOne);
        addWithIndexParameterOne->setParentMethod(addWithIndex);
        addWithIndexParameterOne->setParentClass(LIST);
        addWithIndexParameterTwo->setType(addWithIndexTypeReferenceTwo);
        addWithIndexParameterTwo->setParentMethod(addWithIndex);
        addWithIndexParameterTwo->setParentClass(LIST);
        addWithIndexReturnType->setResolve(VOID);
        addWithIndexReturnType->setParentClass(LIST);
        addWithIndexReturnType->setParentMethod(addWithIndex);
        addWithIndex->addParameter(addWithIndexParameterOne);
        addWithIndex->addParameter(addWithIndexParameterTwo);
        addWithIndex->setResult(addWithIndexReturnType);
        addWithIndex->setPublic();
        declareMethod(addWithIndex);

        auto get = std::make_shared<MethodSymbol>(constants::GET, false, true);
        auto getParameter = std::make_shared<ParameterSymbol>("o");
        auto getTypeReference = std::make_shared<TypeReferenceExpression>(INT->getName());
        auto getReturnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        getTypeReference->setResolve(INT);
        getTypeReference->setParentClass(LIST);
        getTypeReference->setParentMethod(get);
        getParameter->setType(getTypeReference);
        getParameter->setParentMethod(get);
        getParameter->setParentClass(LIST);
        getReturnType->setResolve(OBJECT);
        getReturnType->setParentClass(LIST);
        getReturnType->setParentMethod(get);
        get->addParameter(getParameter);
        get->setResult(getReturnType);
        get->setPublic();
        declareMethod(get);

        auto remove = std::make_shared<MethodSymbol>(constants::REMOVE, false, true);
        auto removeReturnType = std::make_shared<TypeReferenceExpression>(VOID->getName());
        removeReturnType->setResolve(VOID);
        removeReturnType->setParentClass(LIST);
        removeReturnType->setParentMethod(remove);
        remove->setResult(removeReturnType);
        remove->setPublic();
        declareMethod(remove);

        auto length = std::make_shared<MethodSymbol>(constants::SIZE, false, true);
        auto lengthReturnType = std::make_shared<TypeReferenceExpression>(STRING->getName());
        lengthReturnType->setResolve(INT);
        lengthReturnType->setParentClass(LIST);
        lengthReturnType->setParentMethod(length);
        length->setResult(lengthReturnType);
        length->setPublic();
        declareMethod(length);

        auto constructor = std::make_shared<MethodSymbol>(constants::CONSTRUCTOR, true, true);
        constructor->setParentSymbol(LIST);
        constructor->setPublic();
        declareConstructor(constructor);
    }

}
