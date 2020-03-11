/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _SCOPE_H
#define _SCOPE_H

#include "Visitable.h"
#include "statements/base/Statement.h"
#include <vector>


class Scope: public Visitable {

private:
    std::vector<Statement*> statements;

public:
    const std::vector<Statement *> &getStatements() const;

    void setStatements(const std::vector<Statement *> &statements);
};

#endif //_SCOPE_H