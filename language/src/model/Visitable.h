/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VISITABLE_H
#define _VISITABLE_H

#include <tree/ParseTree.h>

using namespace antlr4;

class FileSymbol;

class AbstractModelVisitor;

class Visitable {
private:
    tree::ParseTree *context;
    std::shared_ptr<FileSymbol> fileSymbol;
public:
    tree::ParseTree *getContext() const;

    void setContext(tree::ParseTree *context);

    const std::shared_ptr<FileSymbol> &getFileSymbol() const;

    void setFileSymbol(const std::shared_ptr<FileSymbol> &fileSymbol);

    /**
     * Double dispatch method used to correctly visit the derived symbol.
     * @param visitor
     */
    virtual void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) = 0;

};

#endif //_VISITABLE_H