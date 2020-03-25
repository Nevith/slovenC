/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VISITABLE_H
#define _VISITABLE_H

#include <tree/ParseTree.h>

using namespace antlr4;

class Visitable {
private:
    tree::ParseTree* context;
public:
    tree::ParseTree *getContext() const;

    void setContext(tree::ParseTree *context);
/**
 * Double dispatch method used to correctly visit the derived symbol.
 * @param visitor
 */
};

#endif //_VISITABLE_H