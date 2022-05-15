//
// Created by Habibur Rahman on 15/5/22.
//

#ifndef PROMI_PROMIVISITORIMPL_H
#define PROMI_PROMIVISITORIMPL_H

#include "parser/promiBaseVisitor.h"

class promiVisitorImpl: public promiBaseVisitor {
    antlrcpp::Any visitProgram(promiParser::ProgramContext *ctx) override;

    antlrcpp::Any visitPrimitiveExpression(promiParser::PrimitiveExpressionContext *ctx) override;

    antlrcpp::Any visitAddDivExpression(promiParser::AddDivExpressionContext *ctx) override;

    antlrcpp::Any visitReturnStatement(promiParser::ReturnStatementContext *ctx) override;

    antlrcpp::Any visitMulSubExpression(promiParser::MulSubExpressionContext *ctx) override;

    antlrcpp::Any visitParenEnclosedExpression(promiParser::ParenEnclosedExpressionContext *ctx) override;

    antlrcpp::Any visitComparisonExpression(promiParser::ComparisonExpressionContext *ctx) override;

    antlrcpp::Any visitIfBlock(promiParser::IfBlockContext *ctx) override;

    antlrcpp::Any visitVariableExpression(promiParser::VariableExpressionContext *ctx) override;

    antlrcpp::Any visitWhileStatement(promiParser::WhileStatementContext *ctx) override;

private:
    int return_value_;
    std::map<std::string,int> scope_values_;
};


#endif //PROMI_PROMIVISITORIMPL_H
