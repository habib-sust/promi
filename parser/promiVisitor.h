
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
    virtual antlrcpp::Any visitProg(promiParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitExpr(promiParser::ExprContext *context) = 0;


};

