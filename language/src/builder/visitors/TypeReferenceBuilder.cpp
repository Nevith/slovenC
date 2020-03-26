//
// Created by Andraz on 25/03/2020.
//

#include "TypeReferenceBuilder.h"

TypeReferenceBuilder::TypeReferenceBuilder(const std::shared_ptr<CurrentState> &currentState) : currentState(currentState) {}

antlrcpp::Any TypeReferenceBuilder::visitInheritance(SlovenCLanguageParser::InheritanceContext *ctx) {
    return visit(ctx->superclass());
}

antlrcpp::Any TypeReferenceBuilder::visitSuperclass(SlovenCLanguageParser::SuperclassContext *ctx) {
    return visit(ctx->classTypeList());
}

antlrcpp::Any TypeReferenceBuilder::visitClassTypeList(SlovenCLanguageParser::ClassTypeListContext *ctx) {
    std::vector<std::shared_ptr<TypeReferenceExpression>> superClasses;
    for (auto typeContext : ctx->classType()) {
        superClasses.push_back(visit(typeContext));
    }
    return superClasses;
}

antlrcpp::Any TypeReferenceBuilder::visitClassTypeQual(SlovenCLanguageParser::ClassTypeQualContext *ctx) {
    auto result = std::make_shared<TypeReferenceExpression>(ctx->Identifier()->getText());
    std::shared_ptr<TypeReferenceExpression> parent = visit(ctx->classType());
    result->setExpression(parent);
    result->setFileSymbol(currentState->getFileSymbol());
    result->setContext(ctx);
    return result;
}

antlrcpp::Any TypeReferenceBuilder::visitClassTypeUnqual(SlovenCLanguageParser::ClassTypeUnqualContext *ctx) {
    auto result = std::make_shared<TypeReferenceExpression>(ctx->Identifier()->getText());
    result->setFileSymbol(currentState->getFileSymbol());
    result->setContext(ctx);
    return result;
}

