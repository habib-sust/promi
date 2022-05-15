
// Generated from promi.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  promiParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, EQ = 13, NE = 14, 
    LT = 15, LTQ = 16, GT = 17, GTQ = 18, IDENTIFIER = 19, EOL = 20, INT = 21, 
    WHITESPACE = 22
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleReturnStatement = 2, RuleIfStatement = 3, 
    RuleIfBlock = 4, RuleBlock = 5, RuleWhileStatement = 6, RuleExpression = 7
  };

  explicit promiParser(antlr4::TokenStream *input);
  ~promiParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementContext;
  class ReturnStatementContext;
  class IfStatementContext;
  class IfBlockContext;
  class BlockContext;
  class WhileStatementContext;
  class ExpressionContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EOL();
    ReturnStatementContext *returnStatement();
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    promiParser::ExpressionContext *expr = nullptr;
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfBlockContext *ifBlock();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  IfBlockContext : public antlr4::ParserRuleContext {
  public:
    promiParser::ExpressionContext *cond = nullptr;
    promiParser::BlockContext *blk = nullptr;
    IfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfBlockContext* ifBlock();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    promiParser::ExpressionContext *cond = nullptr;
    promiParser::BlockContext *blk = nullptr;
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrimitiveExpressionContext : public ExpressionContext {
  public:
    PrimitiveExpressionContext(ExpressionContext *ctx);

    antlr4::Token *prim = nullptr;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenEnclosedExpressionContext : public ExpressionContext {
  public:
    ParenEnclosedExpressionContext(ExpressionContext *ctx);

    promiParser::ExpressionContext *expr = nullptr;
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddDivExpressionContext : public ExpressionContext {
  public:
    AddDivExpressionContext(ExpressionContext *ctx);

    promiParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    promiParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonExpressionContext : public ExpressionContext {
  public:
    ComparisonExpressionContext(ExpressionContext *ctx);

    promiParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    promiParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTQ();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulSubExpressionContext : public ExpressionContext {
  public:
    MulSubExpressionContext(ExpressionContext *ctx);

    promiParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    promiParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableExpressionContext : public ExpressionContext {
  public:
    VariableExpressionContext(ExpressionContext *ctx);

    antlr4::Token *var = nullptr;
    promiParser::ExpressionContext *val = nullptr;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

