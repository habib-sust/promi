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

private:
    int return_value_;
};


#endif //PROMI_PROMIVISITORIMPL_H
