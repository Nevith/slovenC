/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#ifndef _VISITABLE_H
#define _VISITABLE_H

#include <tree/ParseTree.h>
#include <antlr/SlovenCLanguageParserVisitor.h>
#include "Context.h"

using namespace antlr4;

class FileSymbol;

class AbstractModelVisitor;

class Visitable {
private:
    Context context;
    std::shared_ptr<FileSymbol> fileSymbol;
public:
    const Context getContext() const;

    virtual void setContext(ParserRuleContext *context);
    virtual void setContext(Context context);

    const std::shared_ptr<FileSymbol> &getFileSymbol() const;

    void setFileSymbol(const std::shared_ptr<FileSymbol> &fileSymbol);

    /**
     * Double dispatch method used to correctly visit the derived symbol.
     * @param visitor
     */
    virtual void accept(AbstractModelVisitor *visitor, std::shared_ptr<Visitable> visitable) = 0;

};

#endif //_VISITABLE_H