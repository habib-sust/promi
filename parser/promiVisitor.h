
// Generated from promi.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "promiParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by promiParser.
 */
class  promiVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by promiParser.
   */
    virtual antlrcpp::Any visitProgram(promiParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(promiParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(promiParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(promiParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfBlock(promiParser::IfBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(promiParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(promiParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitPrimitiveExpression(promiParser::PrimitiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParenEnclosedExpression(promiParser::ParenEnclosedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAddDivExpression(promiParser::AddDivExpressionContext *context) = 0;

    virtual antlrcpp::Any visitComparisonExpression(promiParser::ComparisonExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMulSubExpression(promiParser::MulSubExpressionContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpression(promiParser::VariableExpressionContext *context) = 0;


};

