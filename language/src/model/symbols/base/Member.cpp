/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Member.h"

/**
 * MemberSymbol implementation
 */

void Member::setStatic() {
    modifiers |= STATIC_FLAG;
}

void Member::setPublic() {
    modifiers |= PUBLIC_FLAG;
}

void Member::setPrivate() {
    modifiers |= PRIVATE_FLAG;
}

bool Member::isStatic() {
    return modifiers & STATIC_FLAG;
}

bool Member::isPublic() {
    return modifiers & PUBLIC_FLAG;
}

bool Member::isPrivate() {
    return modifiers & PRIVATE_FLAG;
}
