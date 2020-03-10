/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _IFSTATEMENT_H
#define _IFSTATEMENT_H

#include "Base/StatementContainingStatement.h"
#include "Base/ConditionalStatement.h"
#include "ElseStatement.h"


class IfStatement: public StatementContainingStatement, public ConditionalStatement {
public: 
    
ElseStatement* getElseStatement();
};

#endif //_IFSTATEMENT_H