//
// Created by andraz on 25/04/2020.
//

#include "DfgStageOneBuilder.h"

DfgStageOneBuilder::DfgStageOneBuilder(): graph(new DataFlowGraph()) {

}

void DfgStageOneBuilder::visitFileSymbol(std::shared_ptr<FileSymbol> visitable) {
    for (auto import : visitable->getImports()) {
        visit(import);
    }
}

void
DfgStageOneBuilder::visitPackageOrFileReferenceExpression(std::shared_ptr<PackageOrFileReferenceExpression> visitable) {

}
