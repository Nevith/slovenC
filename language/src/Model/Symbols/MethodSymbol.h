/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _METHODSYMBOL_H
#define _METHODSYMBOL_H

#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "MemberSymbol.h"
#include "ParameterSymbol.h"

#include <vector>

class MethodSymbol : public MemberSymbol {
public:

/**
 * @param return
 */
    std::vector<ParameterSymbol *> getParameters();

/**
 * @param name
 * @param return
 */
    ParameterSymbol *getParameter(std::string name);

/**
 * @param position
 * @param return
 */
    ParameterSymbol *getParameter(int position);
};

#endif //_METHODSYMBOL_H