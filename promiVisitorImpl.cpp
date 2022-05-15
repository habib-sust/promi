//
// Created by Habibur Rahman on 15/5/22.
//

#include "promiVisitorImpl.h"

antlrcpp::Any promiVisitorImpl::visitPrimitiveExpression(promiParser::PrimitiveExpressionContext *ctx) {
    // TODO: Error handling
    // Add error handling to check if the value is `Int` or not
    auto type = ctx->prim->getType();

    if (type == promiParser::INT) {
        return stoi(ctx->getText());
    } else if (type == promiParser::IDENTIFIER) {
        auto var_name = ctx->prim->getText();
        return scope_values_.at(var_name);
    }
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

    return result;
}

antlrcpp::Any promiVisitorImpl::visitReturnStatement(promiParser::ReturnStatementContext *ctx) {
    auto result = visit(ctx->expr).as<int>();
    return_value_ = result;
    return result;
}

antlrcpp::Any promiVisitorImpl::visitProgram(promiParser::ProgramContext *ctx) {
    promiBaseVisitor::visitProgram(ctx);
    return return_value_;
}

antlrcpp::Any promiVisitorImpl::visitMulSubExpression(promiParser::MulSubExpressionContext *ctx) {
    auto left = visit(ctx->left).as<int>();
    auto op = ctx->op->getText();
    auto right = visit(ctx->right).as<int>();

    assert(op.length() == 1);

    int result = 0;

    switch(op[0]) {
        case '*':
            result = left * right;
            break;
        case '/':
            result = left / right; //TODO: handle divided by zero
            break;
        default:
            assert(false);
    }

    return result;
}

antlrcpp::Any promiVisitorImpl::visitParenEnclosedExpression(promiParser::ParenEnclosedExpressionContext *ctx) {
    return visit(ctx->expr).as<int>();
}

antlrcpp::Any promiVisitorImpl::visitComparisonExpression(promiParser::ComparisonExpressionContext *ctx) {
    auto left = visit(ctx->left).as<int>();
    auto op = ctx->op->getType();
    auto right = visit(ctx->right).as<int>();

    bool result;

    switch (op) {
        case promiParser::EQ:
            result = left == right;
            break;
        case promiParser::NE:
            result = left != right;
            break;
        case promiParser::GT:
            result = left > right;
            break;
        case promiParser::GTQ:
            result = left >= right;
            break;
        case promiParser::LT:
            result = left < right;
            break;
        case promiParser::LTQ:
            result = left <= right;
            break;
        default:
            assert(false);
    }

    return result;
}

antlrcpp::Any promiVisitorImpl::visitIfBlock(promiParser::IfBlockContext *ctx) {
    auto result = visit(ctx->cond).as<bool>();

    if (result)
    {
        visit(ctx->blk);
    }

    return result;
}

antlrcpp::Any promiVisitorImpl::visitVariableExpression(promiParser::VariableExpressionContext *ctx) {
    auto var = ctx->var->getText();
    auto val = visit(ctx->val).as<int>();

    scope_values_[var] = val;
    return val;
}

antlrcpp::Any promiVisitorImpl::visitWhileStatement(promiParser::WhileStatementContext *ctx) {
    int count;
    while(true) {
        auto result = visit(ctx->cond).as<bool>();

        if (result) {
            visit(ctx->blk);
            count++;
        } else {
            break;
        }
    }

    return count;
}
