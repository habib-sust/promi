
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

  virtual antlrcpp::Any visitStatement(promiParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(promiParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(promiParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfBlock(promiParser::IfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(promiParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(promiParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimitiveExpression(promiParser::PrimitiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenEnclosedExpression(promiParser::ParenEnclosedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddDivExpression(promiParser::AddDivExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonExpression(promiParser::ComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulSubExpression(promiParser::MulSubExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpression(promiParser::VariableExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

