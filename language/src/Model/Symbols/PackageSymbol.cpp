/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "model/symbols/PackageSymbol.h"

/**
 * PackageSymbol implementation
 */


/**
 * @param name
 * @return FileSymbol
 */
FileSymbol* PackageSymbol::getFile(std::string name) {
    return nullptr;
}

/**
 * @return std::vector<FileSymbol>
 */
std::vector<FileSymbol*> PackageSymbol::getFiles() {
    return std::vector<FileSymbol*>();
}