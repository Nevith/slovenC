//
// Created by andraz on 25/04/2020.
//

#ifndef SLOVENC_SYMBOLLINKER_H
#define SLOVENC_SYMBOLLINKER_H


#include <model/visitor/ModelVisitor.h>
#include <graph/base/GraphOrNode.h>
#include <graph/type/TypeGraph.h>
#include <model/symbols/main/FileSymbol.h>
#include <project/Project.h>
#include <graph/dataflow/linker/utils/FrameStack.h>
#include <graph/dataflow/linker/utils/SymbolSearcher.h>
#include <model/visitor/walker/ModelWalkerListener.h>

class SymbolLinker: public ModelWalkerListener {
private:
    const std::shared_ptr<DataFlowGraph> graph;
    const std::shared_ptr<Project> project;
    const std::shared_ptr<FileSymbol> fileSymbol;

    FrameStack frameStack;
    SymbolSearcher searcher;

    void enterSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass);
    void exitSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass);
public:
    SymbolLinker(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol);

    void enterBlockStatement(std::shared_ptr<BlockStatement> visitable) override;

    void enterClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;

    void enterMethodSymbol(std::shared_ptr<MethodSymbol> visitable) override;

    void exitClassSymbol(std::shared_ptr<ClassSymbol> visitable) override;

    void exitMethodSymbol(std::shared_ptr<MethodSymbol> visitable) override;

    void exitBlockStatement(std::shared_ptr<BlockStatement> visitable) override;

    void enterFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void exitFileSymbol(std::shared_ptr<FileSymbol> visitable) override;

    void enterParameterSymbol(std::shared_ptr<ParameterSymbol> visitable) override;

    void enterLocalVariableSymbol(std::shared_ptr<LocalVariableSymbol> visitable) override;

    void enterFieldSymbol(std::shared_ptr<FieldSymbol> visitable) override;
};


#endif //SLOVENC_SYMBOLLINKER_H
