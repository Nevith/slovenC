/**
 * Project SlovenC
 * @author Andraz Kralj
 */


#include "Visitable.h"

/**
 * Visitable implementation
 */
const Context Visitable::getContext() const {
    return context;
}

void Visitable::setContext(ParserRuleContext *ctx) {
    context.setText(ctx->getText());
    context.setOffset(ctx->getStart()->getStartIndex());
    context.setLength(ctx->getStart()->getStopIndex() - context.getOffset());
    context.setColumn(ctx->getStart()->getCharPositionInLine());
    context.setRow(ctx->getStart()->getLine());
}

const std::shared_ptr<FileSymbol> &Visitable::getFileSymbol() const {
    return fileSymbol;
}

void Visitable::setFileSymbol(const std::shared_ptr<FileSymbol> &fileSymbol) {
    Visitable::fileSymbol = fileSymbol;
}