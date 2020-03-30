/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "PredefinedSymbol.h"
#include "ClassSymbol.h"

/**
 * PredefinedSymbol implementation
 */

PredefinedSymbol::PredefinedSymbol(std::string name) : ClassSymbol(name) {

}

const PredefinedSymbol PredefinedSymbol::BOOLEAN = PredefinedSymbol("bit");
const PredefinedSymbol PredefinedSymbol::INT = PredefinedSymbol("celo");
const PredefinedSymbol PredefinedSymbol::DOUBLE = PredefinedSymbol("decimalno");
const PredefinedSymbol PredefinedSymbol::VOID = PredefinedSymbol("praznost");