//
// Created by andraz on 28/04/2020.
//

#ifndef SLOVENC_FRAME_H
#define SLOVENC_FRAME_H


#include <map>
#include <string>
#include <model/symbols/base/Symbol.h>

class Frame {
    std::map<std::string, std::shared_ptr<Symbol>> identifierMap;

public:
    const std::shared_ptr<Symbol> getSymbolByIdentifier(std::string identifier);

    void addSymbol(std::shared_ptr<Symbol> symbol, std::string identifier);
};


#endif //SLOVENC_FRAME_H
