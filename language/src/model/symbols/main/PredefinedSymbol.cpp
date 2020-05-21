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

const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::BOOLEAN = std::make_shared<PredefinedSymbol>("bit");
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::INT = std::make_shared<PredefinedSymbol>("celo");
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::DOUBLE = std::make_shared<PredefinedSymbol>("decimalno");
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::VOID = std::make_shared<PredefinedSymbol>("praznost");
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::STRING = std::make_shared<PredefinedSymbol>("Niz");
const std::shared_ptr<PredefinedSymbol> PredefinedSymbol::CONSOLE = std::make_shared<PredefinedSymbol>("Konzola");

void PredefinedSymbol::accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) {
    visitor->visitPredefinedSymbol(TypeUtils::cast<PredefinedSymbol>(visitable));
}

std::shared_ptr<PredefinedSymbol> PredefinedSymbol::findPredefinedSymbol(std::string name) {
    if (name == "bit") {
        return BOOLEAN;
    } else if (name == "celo") {
        return INT;
    } else if (name == "decimalno") {
        return DOUBLE;
    } else if (name == "praznost") {
        return VOID;
    } else if (name == "Konzola") {
        return CONSOLE;
    } else if (name == "Niz") {
        return STRING;
    }
    return nullptr;
}
