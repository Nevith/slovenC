/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "ClassSymbol.h"

/**
 * ClassSymbol implementation
 */


/**
 * @return std::vector<ClassSymbol>
 */
std::vector<ClassSymbol*> ClassSymbol::getClasses() {
    return std::vector<ClassSymbol*>();
}

/**
 * @param name
 * @return ClassSymbol
 */
ClassSymbol* ClassSymbol::getClass(std::string  name) {
    return nullptr;
}

/**
 * @param name
 * @return MethodSymbol
 */
MethodSymbol* ClassSymbol::getMethod(std::string  name) {
    return nullptr;
}

/**
 * @param return
 */
std::vector<MethodSymbol*> ClassSymbol::getMethods() {
    return std::vector<MethodSymbol*>();
}

/**
 * @param name
 * @return FieldSymbol
 */
FieldSymbol* ClassSymbol::getField(std::string  name) {
    return nullptr;
}

/**
 * @param return
 */
std::vector<FieldSymbol*> ClassSymbol::getFields() {
    return std::vector<FieldSymbol*>();
}