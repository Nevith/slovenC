//
// Created by Andraz on 26/03/2020.
//

#ifndef SLOVENC_MODBUILDER_H
#define SLOVENC_MODBUILDER_H


#include <antlr/SlovenCLanguageParser.h>
#include <model/symbols/base/Member.h>

using namespace antlr;

class ModBuilder {
public:
    static short
    buildModifiers(std::shared_ptr<Member> memberSymbol, SlovenCLanguageParser::ModifierContext *modifierContext);
};


#endif //SLOVENC_MODBUILDER_H
