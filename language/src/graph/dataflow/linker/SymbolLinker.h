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
#include <model/symbols/main/InvalidSymbol.h>
#include <model/utils/TypeResolveUtil.h>
#include <model/utils/InheritanceUtil.h>
#include <model/visitor/walker/ModelWalker.h>

class SymbolLinker : public ModelWalkerListener {
private:
    const std::shared_ptr<DataFlowGraph> graph;
    const std::shared_ptr<Project> project;
    const std::shared_ptr<FileSymbol> fileSymbol;

    FrameStack frameStack;
    SymbolSearcher searcher;

    std::shared_ptr<Symbol> resolveMethods(std::vector<std::shared_ptr<MethodSymbol>> possibleMethods,
                                           std::shared_ptr<CallExpression> expression);

    std::vector<std::shared_ptr<MethodSymbol>> findPossibleMethods(std::shared_ptr<CallExpression> callExpression);

    std::shared_ptr<Symbol> findSymbol(std::shared_ptr<IdentifierExpression> identifierExpression);

    void enterSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass);

    void exitSuperClassSymbol(std::shared_ptr<ClassSymbol> aClass);

public:
    SymbolLinker(std::shared_ptr<Project> project, std::shared_ptr<FileSymbol> fileSymbol, std::shared_ptr<DataFlowGraph> graph);

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

    void exitIdentifierExpression(std::shared_ptr<IdentifierExpression> visitable) override;

    void exitConstructorCallExpression(std::shared_ptr<ConstructorCallExpression> visitable) override;

    void exitMethodCallExpression(std::shared_ptr<MethodCallExpression> visitable) override;

    void exitThisCallExpression(std::shared_ptr<ThisCallExpression> visitable) override;
};


#endif //SLOVENC_SYMBOLLINKER_H
