/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _SYMBOL_H
#define _SYMBOL_H

#include <string>
#include "../../Visitable.h"


class Symbol: public Visitable {
private:
    std::string name;
public:
    const std::string &getName() const;

    void setName(const std::string &name);
};

#endif //_SYMBOL_H