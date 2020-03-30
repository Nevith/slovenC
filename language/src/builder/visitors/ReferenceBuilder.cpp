//
// Created by Andraz on 25/03/2020.
//

#include <model/symbols/main/PredefinedSymbol.h>
#include "ReferenceBuilder.h"

ReferenceBuilder::ReferenceBuilder(const std::shared_ptr<CurrentState> &currentState) : currentState(currentState) {}

antlrcpp::Any ReferenceBuilder::visitInheritance(SlovenCLanguageParser::InheritanceContext *ctx) {
    return visit(ctx->superclass());
}

antlrcpp::Any ReferenceBuilder::visitSuperclass(SlovenCLanguageParser::SuperclassContext *ctx) {
    return visit(ctx->classTypeList());
}

antlrcpp::Any ReferenceBuilder::visitClassTypeList(SlovenCLanguageParser::ClassTypeListContext *ctx) {
    std::vector<std::shared_ptr<TypeReferenceExpression>> superClasses;
    for (auto typeContext : ctx->classType()) {
        superClasses.push_back(visit(typeContext));
    }
    return superClasses;
}

antlrcpp::Any ReferenceBuilder::visitClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext *ctx) {
    auto result = std::make_shared<TypeReferenceExpression>(ctx->Identifier()->getText());
    std::shared_ptr<TypeReferenceExpression> parent = visit(ctx->classType());
    result->setParent(parent);
    result->setFileSymbol(currentState->getFileSymbol());
    result->setContext(ctx);
    return result;
}

antlrcpp::Any ReferenceBuilder::visitClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext *ctx) {
    auto result = std::make_shared<TypeReferenceExpression>(ctx->Identifier()->getText());
    result->setFileSymbol(currentState->getFileSymbol());
    result->setContext(ctx);
    return result;
}

antlrcpp::Any ReferenceBuilder::visitFileNameQual(SlovenCLanguageParser::FileNameQualContext *ctx) {
    return SlovenCLanguageParserBaseVisitor::visitFileNameQual(ctx);
}

antlrcpp::Any ReferenceBuilder::visitFileNameUnqual(SlovenCLanguageParser::FileNameUnqualContext *ctx) {
    return SlovenCLanguageParserBaseVisitor::visitFileNameUnqual(ctx);
}

antlrcpp::Any ReferenceBuilder::visitResult(SlovenCLanguageParser::ResultContext *ctx) {
    if (ctx->VOID()) {
        return std::make_shared<TypeReferenceExpression>(PredefinedSymbol::VOID.getName());
    }
    // TODO - error if both defined
    return visit(ctx->type());
}

antlrcpp::Any ReferenceBuilder::visitPrimitiveType(SlovenCLanguageParser::PrimitiveTypeContext *ctx) {
    if (ctx->BOOLEAN()) {
        return std::make_shared<TypeReferenceExpression>(PredefinedSymbol::BOOLEAN.getName());
    } else if (ctx->DOUBLE()) {
        return std::make_shared<TypeReferenceExpression>(PredefinedSymbol::DOUBLE.getName());
    }
    return std::make_shared<TypeReferenceExpression>(PredefinedSymbol::INT.getName());
}

antlrcpp::Any ReferenceBuilder::visitReferenceType(SlovenCLanguageParser::ReferenceTypeContext *ctx) {
    return visit(ctx->classType());
}

