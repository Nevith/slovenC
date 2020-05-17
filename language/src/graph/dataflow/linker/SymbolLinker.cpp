//
// Created by andraz on 25/04/2020.
//

#include <model/symbols/main/InvalidTypeSymbol.h>
#include "SymbolLinker.h"

SymbolLinker::SymbolLinker(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol) : project(project),
                                                                                                       fileSymbol(
                                                                                                               fileSymbol),
                                                                                                       graph(new DataFlowGraph()) {
}

void SymbolLinker::enterSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass) {
    for (auto super : aClass->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                enterSuperClassSymbol(superClass);
            }
        }
    }
    frameStack.createFrame();
    for (auto clazz: aClass->getDeclaredClasses()) {
        frameStack.pushSymbol(clazz, clazz->getName());
    }
    for (auto field: aClass->getDeclaredFields()) {
        frameStack.pushSymbol(field, field->getName());
    }
    for (auto method: aClass->getDeclaredMethods()) {
        frameStack.pushSymbol(method, method->getName());
    }
}

void SymbolLinker::exitSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass) {
    for (auto super : aClass->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                exitSuperClassSymbol(superClass);
            }
        }
    }
    frameStack.popFrame();
}

void SymbolLinker::enterFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    frameStack.createFrame();
}

void SymbolLinker::exitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    frameStack.popFrame();
}

void SymbolLinker::enterClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    for (auto super : visitable->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                enterSuperClassSymbol(superClass);
            }
        }
    }
    frameStack.createFrame();
}

void SymbolLinker::exitClassSymbol(std::shared_ptr<ClassSymbol> visitable) {
    for (auto super : visitable->getSuperClasses()) {
        auto resolve = super->getResolve();
        if (resolve) {
            auto superClass = TypeUtils::cast<ClassSymbol>(resolve);
            if (superClass) {
                exitSuperClassSymbol(superClass);
            }
        }
    }
    frameStack.popFrame();
}

void SymbolLinker::enterMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    frameStack.pushSymbol(visitable, visitable->getName());
    frameStack.createFrame();
}

void SymbolLinker::exitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) {
    frameStack.popFrame();
}

void SymbolLinker::enterBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    frameStack.createFrame();
}

void SymbolLinker::exitBlockStatement(std::shared_ptr<BlockStatement> visitable) {
    frameStack.popFrame();
}

void SymbolLinker::enterParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) {
    frameStack.pushSymbol(visitable, visitable->getName());
}

void SymbolLinker::enterLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) {
    frameStack.pushSymbol(visitable, visitable->getName());
}

void SymbolLinker::enterFieldSymbol(std::shared_ptr<FieldSymbol> visitable) {
    frameStack.pushSymbol(visitable, visitable->getName());
}