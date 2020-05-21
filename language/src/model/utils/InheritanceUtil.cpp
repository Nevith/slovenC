//
// Created by andraz on 21/05/2020.
//

#include "InheritanceUtil.h"

bool InheritanceUtil::isInstanceOf(std::shared_ptr<Symbol> base, std::shared_ptr<Symbol> super) {
    auto baseType = TypeUtils::cast<ClassSymbol>(base);
    auto superType = TypeUtils::cast<ClassSymbol>(super);

    if (!baseType || !superType) {
        return false;
    }

    return isInstanceOfRecursive(baseType, superType);
}

bool InheritanceUtil::isInstanceOfRecursive(std::shared_ptr<ClassSymbol> base, std::shared_ptr<ClassSymbol> super) {
    if (base == super) {
        return true;
    }

    for (auto superClass : base->getSuperClasses()) {
        bool result = isInstanceOf(superClass->getResolve(), super);
        if (result) {
            return true;
        }
    }

    return false;
}
