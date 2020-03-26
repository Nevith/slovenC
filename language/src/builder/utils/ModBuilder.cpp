//
// Created by Andraz on 26/03/2020.
//

#include "ModBuilder.h"

short ModBuilder::buildModifiers(std::shared_ptr<MemberSymbol> memberSymbol, SlovenCLanguageParser::ModifierContext *modifierContext) {
    if (modifierContext->PRIVATE()) {
        memberSymbol->setPrivate();
    }
    if (modifierContext->PUBLIC()) {
        memberSymbol->setPublic();
    }
    if (modifierContext->STATIC()) {
        memberSymbol->setStatic();
    }
    return 0;
}
