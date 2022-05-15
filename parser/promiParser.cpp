
// Generated from promi.g4 by ANTLR 4.9.3


#include "promiVisitor.h"

#include "promiParser.h"


using namespace antlrcpp;
using namespace antlr4;

promiParser::promiParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

promiParser::~promiParser() {
  delete _interpreter;
}

std::string promiParser::getGrammarFileName() const {
  return "promi.g4";
}

const std::vector<std::string>& promiParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& promiParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

promiParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* promiParser::ProgramContext::EOF() {
  return getToken(promiParser::EOF, 0);
}

std::vector<promiParser::StatementContext *> promiParser::ProgramContext::statement() {
  return getRuleContexts<promiParser::StatementContext>();
}

promiParser::StatementContext* promiParser::ProgramContext::statement(size_t i) {
  return getRuleContext<promiParser::StatementContext>(i);
}


size_t promiParser::ProgramContext::getRuleIndex() const {
  return promiParser::RuleProgram;
}


antlrcpp::Any promiParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

promiParser::ProgramContext* promiParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, promiParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << promiParser::T__0)
      | (1ULL << promiParser::T__1)
      | (1ULL << promiParser::T__2)
      | (1ULL << promiParser::IDENTIFIER)
      | (1ULL << promiParser::INT))) != 0)) {
      setState(14);
      statement();
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(20);
    match(promiParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

promiParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

promiParser::ExpressionContext* promiParser::StatementContext::expression() {
  return getRuleContext<promiParser::ExpressionContext>(0);
}

tree::TerminalNode* promiParser::StatementContext::EOL() {
  return getToken(promiParser::EOL, 0);
}

promiParser::ReturnStatementContext* promiParser::StatementContext::returnStatement() {
  return getRuleContext<promiParser::ReturnStatementContext>(0);
}

promiParser::IfStatementContext* promiParser::StatementContext::ifStatement() {
  return getRuleContext<promiParser::IfStatementContext>(0);
}


size_t promiParser::StatementContext::getRuleIndex() const {
  return promiParser::RuleStatement;
}


antlrcpp::Any promiParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

promiParser::StatementContext* promiParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, promiParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case promiParser::T__2:
      case promiParser::IDENTIFIER:
      case promiParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(22);
        expression(0);
        setState(23);
        match(promiParser::EOL);
        break;
      }

      case promiParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(25);
        returnStatement();
        setState(26);
        match(promiParser::EOL);
        break;
      }

      case promiParser::T__1: {
        enterOuterAlt(_localctx, 3);
        setState(28);
        ifStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

promiParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

promiParser::ExpressionContext* promiParser::ReturnStatementContext::expression() {
  return getRuleContext<promiParser::ExpressionContext>(0);
}


size_t promiParser::ReturnStatementContext::getRuleIndex() const {
  return promiParser::RuleReturnStatement;
}


antlrcpp::Any promiParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

promiParser::ReturnStatementContext* promiParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, promiParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    match(promiParser::T__0);
    setState(32);
    antlrcpp::downCast<ReturnStatementContext *>(_localctx)->expr = expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

promiParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

promiParser::IfBlockContext* promiParser::IfStatementContext::ifBlock() {
  return getRuleContext<promiParser::IfBlockContext>(0);
}


size_t promiParser::IfStatementContext::getRuleIndex() const {
  return promiParser::RuleIfStatement;
}


antlrcpp::Any promiParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

promiParser::IfStatementContext* promiParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, promiParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    ifBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBlockContext ------------------------------------------------------------------

promiParser::IfBlockContext::IfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

promiParser::ExpressionContext* promiParser::IfBlockContext::expression() {
  return getRuleContext<promiParser::ExpressionContext>(0);
}

promiParser::BlockContext* promiParser::IfBlockContext::block() {
  return getRuleContext<promiParser::BlockContext>(0);
}


size_t promiParser::IfBlockContext::getRuleIndex() const {
  return promiParser::RuleIfBlock;
}


antlrcpp::Any promiParser::IfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitIfBlock(this);
  else
    return visitor->visitChildren(this);
}

promiParser::IfBlockContext* promiParser::ifBlock() {
  IfBlockContext *_localctx = _tracker.createInstance<IfBlockContext>(_ctx, getState());
  enterRule(_localctx, 8, promiParser::RuleIfBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(promiParser::T__1);
    setState(37);
    match(promiParser::T__2);
    setState(38);
    antlrcpp::downCast<IfBlockContext *>(_localctx)->cond = expression(0);
    setState(39);
    match(promiParser::T__3);
    setState(40);
    antlrcpp::downCast<IfBlockContext *>(_localctx)->blk = block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

promiParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

promiParser::StatementContext* promiParser::BlockContext::statement() {
  return getRuleContext<promiParser::StatementContext>(0);
}


size_t promiParser::BlockContext::getRuleIndex() const {
  return promiParser::RuleBlock;
}


antlrcpp::Any promiParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

promiParser::BlockContext* promiParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, promiParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(promiParser::T__4);

    setState(43);
    statement();
    setState(44);
    match(promiParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

promiParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t promiParser::ExpressionContext::getRuleIndex() const {
  return promiParser::RuleExpression;
}

void promiParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrimitiveExpressionContext ------------------------------------------------------------------

tree::TerminalNode* promiParser::PrimitiveExpressionContext::INT() {
  return getToken(promiParser::INT, 0);
}

tree::TerminalNode* promiParser::PrimitiveExpressionContext::IDENTIFIER() {
  return getToken(promiParser::IDENTIFIER, 0);
}

promiParser::PrimitiveExpressionContext::PrimitiveExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any promiParser::PrimitiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitPrimitiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenEnclosedExpressionContext ------------------------------------------------------------------

promiParser::ExpressionContext* promiParser::ParenEnclosedExpressionContext::expression() {
  return getRuleContext<promiParser::ExpressionContext>(0);
}

promiParser::ParenEnclosedExpressionContext::ParenEnclosedExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any promiParser::ParenEnclosedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitParenEnclosedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddDivExpressionContext ------------------------------------------------------------------

std::vector<promiParser::ExpressionContext *> promiParser::AddDivExpressionContext::expression() {
  return getRuleContexts<promiParser::ExpressionContext>();
}

promiParser::ExpressionContext* promiParser::AddDivExpressionContext::expression(size_t i) {
  return getRuleContext<promiParser::ExpressionContext>(i);
}

promiParser::AddDivExpressionContext::AddDivExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any promiParser::AddDivExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitAddDivExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonExpressionContext ------------------------------------------------------------------

std::vector<promiParser::ExpressionContext *> promiParser::ComparisonExpressionContext::expression() {
  return getRuleContexts<promiParser::ExpressionContext>();
}

promiParser::ExpressionContext* promiParser::ComparisonExpressionContext::expression(size_t i) {
  return getRuleContext<promiParser::ExpressionContext>(i);
}

tree::TerminalNode* promiParser::ComparisonExpressionContext::EQ() {
  return getToken(promiParser::EQ, 0);
}

tree::TerminalNode* promiParser::ComparisonExpressionContext::NE() {
  return getToken(promiParser::NE, 0);
}

tree::TerminalNode* promiParser::ComparisonExpressionContext::LT() {
  return getToken(promiParser::LT, 0);
}

tree::TerminalNode* promiParser::ComparisonExpressionContext::LTQ() {
  return getToken(promiParser::LTQ, 0);
}

tree::TerminalNode* promiParser::ComparisonExpressionContext::GT() {
  return getToken(promiParser::GT, 0);
}

tree::TerminalNode* promiParser::ComparisonExpressionContext::GTQ() {
  return getToken(promiParser::GTQ, 0);
}

promiParser::ComparisonExpressionContext::ComparisonExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any promiParser::ComparisonExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitComparisonExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulSubExpressionContext ------------------------------------------------------------------

std::vector<promiParser::ExpressionContext *> promiParser::MulSubExpressionContext::expression() {
  return getRuleContexts<promiParser::ExpressionContext>();
}

promiParser::ExpressionContext* promiParser::MulSubExpressionContext::expression(size_t i) {
  return getRuleContext<promiParser::ExpressionContext>(i);
}

promiParser::MulSubExpressionContext::MulSubExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any promiParser::MulSubExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitMulSubExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableExpressionContext ------------------------------------------------------------------

tree::TerminalNode* promiParser::VariableExpressionContext::IDENTIFIER() {
  return getToken(promiParser::IDENTIFIER, 0);
}

promiParser::ExpressionContext* promiParser::VariableExpressionContext::expression() {
  return getRuleContext<promiParser::ExpressionContext>(0);
}

promiParser::VariableExpressionContext::VariableExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any promiParser::VariableExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitVariableExpression(this);
  else
    return visitor->visitChildren(this);
}

promiParser::ExpressionContext* promiParser::expression() {
   return expression(0);
}

promiParser::ExpressionContext* promiParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  promiParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  promiParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, promiParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<VariableExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(47);
      antlrcpp::downCast<VariableExpressionContext *>(_localctx)->var = match(promiParser::IDENTIFIER);
      setState(48);
      match(promiParser::T__10);
      setState(49);
      antlrcpp::downCast<VariableExpressionContext *>(_localctx)->val = expression(3);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PrimitiveExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(50);
      antlrcpp::downCast<PrimitiveExpressionContext *>(_localctx)->prim = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == promiParser::IDENTIFIER

      || _la == promiParser::INT)) {
        antlrcpp::downCast<PrimitiveExpressionContext *>(_localctx)->prim = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParenEnclosedExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(51);
      match(promiParser::T__2);
      setState(52);
      antlrcpp::downCast<ParenEnclosedExpressionContext *>(_localctx)->expr = expression(0);
      setState(53);
      match(promiParser::T__3);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(66);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulSubExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(57);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(58);
          antlrcpp::downCast<MulSubExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == promiParser::T__6

          || _la == promiParser::T__7)) {
            antlrcpp::downCast<MulSubExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(59);
          antlrcpp::downCast<MulSubExpressionContext *>(_localctx)->right = expression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddDivExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(60);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(61);
          antlrcpp::downCast<AddDivExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == promiParser::T__8

          || _la == promiParser::T__9)) {
            antlrcpp::downCast<AddDivExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(62);
          antlrcpp::downCast<AddDivExpressionContext *>(_localctx)->right = expression(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(63);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(64);
          antlrcpp::downCast<ComparisonExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << promiParser::EQ)
            | (1ULL << promiParser::NE)
            | (1ULL << promiParser::LT)
            | (1ULL << promiParser::LTQ)
            | (1ULL << promiParser::GT)
            | (1ULL << promiParser::GTQ))) != 0))) {
            antlrcpp::downCast<ComparisonExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(65);
          antlrcpp::downCast<ComparisonExpressionContext *>(_localctx)->right = expression(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool promiParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool promiParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> promiParser::_decisionToDFA;
atn::PredictionContextCache promiParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN promiParser::_atn;
std::vector<uint16_t> promiParser::_serializedATN;

std::vector<std::string> promiParser::_ruleNames = {
  "program", "statement", "returnStatement", "ifStatement", "ifBlock", "block", 
  "expression"
};

std::vector<std::string> promiParser::_literalNames = {
  "", "'return'", "'if'", "'('", "')'", "'{'", "'}'", "'*'", "'/'", "'+'", 
  "'-'", "'='", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "", "';'"
};

std::vector<std::string> promiParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "EQ", "NE", "LT", "LTQ", 
  "GT", "GTQ", "IDENTIFIER", "EOL", "INT", "WHITESPACE"
};

dfa::Vocabulary promiParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> promiParser::_tokenNames;

promiParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x17, 0x4a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x3, 0x2, 0x7, 0x2, 0x12, 0xa, 0x2, 0xc, 
       0x2, 0xe, 0x2, 0x15, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
       0x20, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
       0x8, 0x3a, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x45, 0xa, 
       0x8, 0xc, 0x8, 0xe, 0x8, 0x48, 0xb, 0x8, 0x3, 0x8, 0x2, 0x3, 0xe, 
       0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2, 0x6, 0x4, 0x2, 0x14, 
       0x14, 0x16, 0x16, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 
       0xe, 0x13, 0x2, 0x4a, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x21, 0x3, 0x2, 0x2, 0x2, 0x8, 0x24, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x26, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2c, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0x39, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x5, 0x4, 0x3, 0x2, 
       0x11, 0x10, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 0x16, 
       0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 
       0x2, 0x2, 0x3, 0x17, 0x3, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x5, 0xe, 
       0x8, 0x2, 0x19, 0x1a, 0x7, 0x15, 0x2, 0x2, 0x1a, 0x20, 0x3, 0x2, 
       0x2, 0x2, 0x1b, 0x1c, 0x5, 0x6, 0x4, 0x2, 0x1c, 0x1d, 0x7, 0x15, 
       0x2, 0x2, 0x1d, 0x20, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x5, 0x8, 0x5, 
       0x2, 0x1f, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1b, 0x3, 0x2, 0x2, 0x2, 
       0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x5, 0x3, 0x2, 0x2, 0x2, 0x21, 
       0x22, 0x7, 0x3, 0x2, 0x2, 0x22, 0x23, 0x5, 0xe, 0x8, 0x2, 0x23, 0x7, 
       0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x5, 0xa, 0x6, 0x2, 0x25, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x26, 0x27, 0x7, 0x4, 0x2, 0x2, 0x27, 0x28, 0x7, 0x5, 
       0x2, 0x2, 0x28, 0x29, 0x5, 0xe, 0x8, 0x2, 0x29, 0x2a, 0x7, 0x6, 0x2, 
       0x2, 0x2a, 0x2b, 0x5, 0xc, 0x7, 0x2, 0x2b, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x2c, 0x2d, 0x7, 0x7, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x4, 0x3, 0x2, 0x2e, 
       0x2f, 0x7, 0x8, 0x2, 0x2, 0x2f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 
       0x8, 0x8, 0x1, 0x2, 0x31, 0x32, 0x7, 0x14, 0x2, 0x2, 0x32, 0x33, 
       0x7, 0xd, 0x2, 0x2, 0x33, 0x3a, 0x5, 0xe, 0x8, 0x5, 0x34, 0x3a, 0x9, 
       0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x5, 0x2, 0x2, 0x36, 0x37, 0x5, 0xe, 
       0x8, 0x2, 0x37, 0x38, 0x7, 0x6, 0x2, 0x2, 0x38, 0x3a, 0x3, 0x2, 0x2, 
       0x2, 0x39, 0x30, 0x3, 0x2, 0x2, 0x2, 0x39, 0x34, 0x3, 0x2, 0x2, 0x2, 
       0x39, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x46, 0x3, 0x2, 0x2, 0x2, 0x3b, 
       0x3c, 0xc, 0x8, 0x2, 0x2, 0x3c, 0x3d, 0x9, 0x3, 0x2, 0x2, 0x3d, 0x45, 
       0x5, 0xe, 0x8, 0x9, 0x3e, 0x3f, 0xc, 0x7, 0x2, 0x2, 0x3f, 0x40, 0x9, 
       0x4, 0x2, 0x2, 0x40, 0x45, 0x5, 0xe, 0x8, 0x8, 0x41, 0x42, 0xc, 0x6, 
       0x2, 0x2, 0x42, 0x43, 0x9, 0x5, 0x2, 0x2, 0x43, 0x45, 0x5, 0xe, 0x8, 
       0x7, 0x44, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3e, 0x3, 0x2, 0x2, 0x2, 
       0x44, 0x41, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 
       0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0xf, 
       0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x7, 0x13, 0x1f, 
       0x39, 0x44, 0x46, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

promiParser::Initializer promiParser::_init;
