//
// Created by Habibur Rahman on 15/5/22.
//

#include "promiVisitorImpl.h"

antlrcpp::Any promiVisitorImpl::visitPrimitiveExpression(promiParser::PrimitiveExpressionContext *ctx) {
    std::cout << ctx->getText() << std::endl;
    return promiBaseVisitor::visitPrimitiveExpression(ctx);
}
