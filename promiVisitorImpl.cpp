//
// Created by Habibur Rahman on 15/5/22.
//

#include "promiVisitorImpl.h"

antlrcpp::Any promiVisitorImpl::visitPrimitiveExpression(promiParser::PrimitiveExpressionContext *ctx) {
    // TODO: Error handling
    // Add error handling to check if the value is `Int` or not
    return stoi(ctx->getText());
}

antlrcpp::Any promiVisitorImpl::visitAddDivExpression(promiParser::AddDivExpressionContext *ctx) {
    // TODO: Error handling
    auto left = visit(ctx->left).as<int>();
    auto op = ctx->op->getText();
    auto right = visit(ctx->right).as<int>();

    assert(op.length() == 1);

    int result = 0;

    switch (op[0]) {
        case '+':
            result = left + right;
            break;
        case '-':
            result = left - right;
            break;
        default:
            assert(false);
    }

    std::cout << result << std::endl;
    return result;
}
