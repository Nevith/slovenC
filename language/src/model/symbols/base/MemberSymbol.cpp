/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MemberSymbol.h"

/**
 * MemberSymbol implementation
 */

void MemberSymbol::setStatic() {
    modifiers |= STATIC_FLAG;
}

void MemberSymbol::setPublic() {
    modifiers |= PUBLIC_FLAG;
}

void MemberSymbol::setPrivate() {
    modifiers |= PRIVATE_FLAG;
}

bool MemberSymbol::isStatic() {
    return modifiers & STATIC_FLAG;
}

bool MemberSymbol::isPublic() {
    return modifiers & PUBLIC_FLAG;
}

bool MemberSymbol::isPrivate() {
    return modifiers & PRIVATE_FLAG;
}
