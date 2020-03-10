/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "MethodSymbol.h"

/**
 * MethodSymbol implementation
 */

std::vector<ParameterSymbol*> MethodSymbol::getParameters()
{
    return std::vector<ParameterSymbol*>();
}

ParameterSymbol* MethodSymbol::getParameter(std::string name)
{
    return nullptr;
}

ParameterSymbol* MethodSymbol::getParameter(int position)
{
    return nullptr;
}
