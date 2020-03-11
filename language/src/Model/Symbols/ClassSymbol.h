/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _CLASSSYMBOL_H
#define _CLASSSYMBOL_H

#include "base/TypeSymbol.h"
#include "model/symbols/base/FullyQualifiedSymbol.h"
#include "MethodSymbol.h"
#include "FieldSymbol.h"
#include "MemberSymbol.h"
#include <vector>
#include <string>


class ClassSymbol: public TypeSymbol, public FullyQualifiedSymbol, public MemberSymbol {
public: 
    
std::vector<ClassSymbol*> getClasses();
    
/**
 * @param name
 */
ClassSymbol* getClass(std::string name);
    
/**
 * @param name
 */
MethodSymbol* getMethod(std::string name);
    
/**
 * @param return
 */
std::vector<MethodSymbol*> getMethods();
    
/**
 * @param name
 */
FieldSymbol* getField(std::string name);
    
/**
 * @param return
 */
std::vector<FieldSymbol*> getFields();
};

#endif //_CLASSSYMBOL_H