/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _EMPTYSTATEMENT_H
#define _EMPTYSTATEMENT_H

#include "base/Statement.h"


class EmptyStatement : public Statement {
public:
    void define(std::shared_ptr<Visitable> object) override;
};

#endif //_EMPTYSTATEMENT_H