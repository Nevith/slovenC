/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VISITABLE_H
#define _VISITABLE_H

class Visitable {
public:

/**
 * Double dispatch method used to correctly visit the derived symbol.
 * @param visitor
 */
    virtual void visit(void *visitor) = 0;
};

#endif //_VISITABLE_H