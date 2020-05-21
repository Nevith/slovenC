//
// Created by andraz on 21/05/2020.
//

#ifndef SLOVENC_INHERITANCEUTIL_H
#define SLOVENC_INHERITANCEUTIL_H

#include "model/Model.h"
#include "utils/TypeUtils.h"

class InheritanceUtil {
private:
    static bool isInstanceOfRecursive(std::shared_ptr<ClassSymbol> base, std::shared_ptr<ClassSymbol> super);
public:
    static bool isInstanceOf(std::shared_ptr<Symbol> base, std::shared_ptr<Symbol> super);
};


#endif //SLOVENC_INHERITANCEUTIL_H
