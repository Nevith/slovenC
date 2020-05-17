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
    context.setOffset(ctx->getStart()->getStartIndex());
    context.setAnEnd(ctx->getStop()->getStopIndex());
    context.setLength(context.getAnEnd() - context.getOffset());
    context.setColumn(ctx->getStart()->getCharPositionInLine());
    context.setRow(ctx->getStart()->getLine());
    context.setText(
            ctx->getStart()->getInputStream()->getText(misc::Interval(context.getOffset(), context.getAnEnd())));
}

const std::shared_ptr<FileSymbol> &Visitable::getFileSymbol() const {
    return fileSymbol;
}

void Visitable::setFileSymbol(const std::shared_ptr<FileSymbol> &fileSymbol) {
    Visitable::fileSymbol = fileSymbol;
}