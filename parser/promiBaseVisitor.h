
// Generated from promi.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "promiVisitor.h"


/**
 * This class provides an empty implementation of promiVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  promiBaseVisitor : public promiVisitor {
public:

  virtual antlrcpp::Any visitProgram(promiParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(promiParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

