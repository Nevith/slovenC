//
// Created by Andraz on 26/03/2020.
//

#include "ModBuilder.h"

void ModBuilder::buildModifiers(std::shared_ptr<Member> memberSymbol,
                                 SlovenCLanguageParser::ModifierContext *modifierContext) {
    if (!modifierContext) {
        return;
    }
    if (modifierContext->PRIVATE()) {
        memberSymbol->setPrivate();
    }
    if (modifierContext->PUBLIC()) {
        memberSymbol->setPublic();
    }
    if (modifierContext->STATIC()) {
        memberSymbol->setStatic();
    }
}
