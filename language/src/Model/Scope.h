/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _SCOPE_H
#define _SCOPE_H

#include "Visitable.h"
#include "statements/base/Statement.h"
#include <vector>
#include <memory>


class Scope : public Visitable {

private:
    std::vector<std::shared_ptr<Statement>> statements;

public:
    const std::vector<std::shared_ptr<Statement>> &getStatements() const;

    void setStatements(const std::vector<std::shared_ptr<Statement>> &statements);
};

#endif //_SCOPE_H