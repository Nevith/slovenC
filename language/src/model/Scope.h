/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _SCOPE_H
#define _SCOPE_H

#include <vector>
#include <memory>


class Statement;

class Scope {

private:
    std::vector<std::shared_ptr<Statement>> statements;

public:
    const std::vector<std::shared_ptr<Statement>> &getStatements() const;

    void addStatement(const std::shared_ptr<Statement> &statement);
};

#endif //_SCOPE_H