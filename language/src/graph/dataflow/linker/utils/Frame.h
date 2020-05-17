//
// Created by andraz on 28/04/2020.
//

#ifndef SLOVENC_FRAME_H
#define SLOVENC_FRAME_H


#include <map>
#include <string>
#include "vector"
#include <model/Model.h>

class Frame {
    std::map<std::string, std::shared_ptr<Symbol>> identifierMap;
    std::map<std::string, std::vector<std::shared_ptr<MethodSymbol>>> methodMap;

public:
    const std::shared_ptr<Symbol> getSymbolByIdentifier(std::string identifier);

    const std::vector<std::shared_ptr<MethodSymbol>> getMethodsByIdentifier(std::string identifier);

    void addSymbol(std::shared_ptr<Symbol> symbol, std::string identifier);

    void addMethod(std::shared_ptr<MethodSymbol> symbol, std::string identifier);
};


#endif //SLOVENC_FRAME_H
