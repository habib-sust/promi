//
// Created by Habibur Rahman on 15/5/22.
//

#ifndef PROMI_PROMIVISITORIMPL_H
#define PROMI_PROMIVISITORIMPL_H

#include "parser/promiBaseVisitor.h"

class promiVisitorImpl: public promiBaseVisitor {
    antlrcpp::Any visitPrimitiveExpression(promiParser::PrimitiveExpressionContext *ctx) override;
};


#endif //PROMI_PROMIVISITORIMPL_H
