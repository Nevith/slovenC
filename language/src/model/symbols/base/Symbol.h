/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _SYMBOL_H
#define _SYMBOL_H

#include <string>
#include "../../Visitable.h"


class Symbol : public Visitable {
private:
    std::string name;
public:
    Symbol(const std::string &name);

    const std::string &getName() const;

};

#endif //_SYMBOL_H