
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

std::vector<promiParser::ExpressionContext *> promiParser::ProgramContext::expression() {
  return getRuleContexts<promiParser::ExpressionContext>();
}

promiParser::ExpressionContext* promiParser::ProgramContext::expression(size_t i) {
  return getRuleContext<promiParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> promiParser::ProgramContext::EOL() {
  return getTokens(promiParser::EOL);
}

tree::TerminalNode* promiParser::ProgramContext::EOL(size_t i) {
  return getToken(promiParser::EOL, i);
}

std::vector<promiParser::ReturnStatementContext *> promiParser::ProgramContext::returnStatement() {
  return getRuleContexts<promiParser::ReturnStatementContext>();
}

promiParser::ReturnStatementContext* promiParser::ProgramContext::returnStatement(size_t i) {
  return getRuleContext<promiParser::ReturnStatementContext>(i);
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
    setState(14);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << promiParser::T__0)
      | (1ULL << promiParser::T__5)
      | (1ULL << promiParser::INT))) != 0)) {
      setState(12);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case promiParser::T__5:
        case promiParser::INT: {
          setState(6);
          expression(0);
          setState(7);
          match(promiParser::EOL);
          break;
        }

        case promiParser::T__0: {
          setState(9);
          returnStatement();
          setState(10);
          match(promiParser::EOL);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(16);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(17);
    match(promiParser::EOF);
   
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
  enterRule(_localctx, 2, promiParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    match(promiParser::T__0);
    setState(20);
    antlrcpp::downCast<ReturnStatementContext *>(_localctx)->expr = expression(0);
   
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

promiParser::ExpressionContext* promiParser::expression() {
   return expression(0);
}

promiParser::ExpressionContext* promiParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  promiParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  promiParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, promiParser::RuleExpression, precedence);

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
    setState(28);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case promiParser::INT: {
        _localctx = _tracker.createInstance<PrimitiveExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(23);
        match(promiParser::INT);
        break;
      }

      case promiParser::T__5: {
        _localctx = _tracker.createInstance<ParenEnclosedExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(24);
        match(promiParser::T__5);
        setState(25);
        antlrcpp::downCast<ParenEnclosedExpressionContext *>(_localctx)->expr = expression(0);
        setState(26);
        match(promiParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(39);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulSubExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(30);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(31);
          antlrcpp::downCast<MulSubExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == promiParser::T__1

          || _la == promiParser::T__2)) {
            antlrcpp::downCast<MulSubExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(32);
          antlrcpp::downCast<MulSubExpressionContext *>(_localctx)->right = expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddDivExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(33);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(34);
          antlrcpp::downCast<AddDivExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == promiParser::T__3

          || _la == promiParser::T__4)) {
            antlrcpp::downCast<AddDivExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(35);
          antlrcpp::downCast<AddDivExpressionContext *>(_localctx)->right = expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(36);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(37);
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
          setState(38);
          antlrcpp::downCast<ComparisonExpressionContext *>(_localctx)->right = expression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(43);
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
    case 2: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool promiParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

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
  "program", "returnStatement", "expression"
};

std::vector<std::string> promiParser::_literalNames = {
  "", "'return'", "'*'", "'/'", "'+'", "'-'", "'('", "')'", "'=='", "'!='", 
  "'<'", "'<='", "'>'", "'>='", "';'"
};

std::vector<std::string> promiParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "EQ", "NE", "LT", "LTQ", "GT", "GTQ", 
  "EOL", "INT", "WHITESPACE"
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
       0x3, 0x12, 0x2f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x7, 0x2, 0xf, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x12, 0xb, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1f, 0xa, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x2a, 0xa, 0x4, 0xc, 0x4, 
       0xe, 0x4, 0x2d, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 0x5, 0x2, 0x4, 
       0x6, 0x2, 0x5, 0x3, 0x2, 0x4, 0x5, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 
       0xa, 0xf, 0x2, 0x31, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x9, 0x5, 0x6, 
       0x4, 0x2, 0x9, 0xa, 0x7, 0x10, 0x2, 0x2, 0xa, 0xf, 0x3, 0x2, 0x2, 
       0x2, 0xb, 0xc, 0x5, 0x4, 0x3, 0x2, 0xc, 0xd, 0x7, 0x10, 0x2, 0x2, 
       0xd, 0xf, 0x3, 0x2, 0x2, 0x2, 0xe, 0x8, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0xf, 0x12, 0x3, 0x2, 0x2, 0x2, 0x10, 0xe, 
       0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x3, 0x2, 0x2, 0x2, 0x11, 0x13, 0x3, 
       0x2, 0x2, 0x2, 0x12, 0x10, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x7, 0x2, 
       0x2, 0x3, 0x14, 0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x7, 0x3, 0x2, 
       0x2, 0x16, 0x17, 0x5, 0x6, 0x4, 0x2, 0x17, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0x18, 0x19, 0x8, 0x4, 0x1, 0x2, 0x19, 0x1f, 0x7, 0x11, 0x2, 0x2, 
       0x1a, 0x1b, 0x7, 0x8, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0x6, 0x4, 0x2, 0x1c, 
       0x1d, 0x7, 0x9, 0x2, 0x2, 0x1d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x18, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0x20, 0x21, 0xc, 0x7, 0x2, 0x2, 0x21, 0x22, 0x9, 0x2, 
       0x2, 0x2, 0x22, 0x2a, 0x5, 0x6, 0x4, 0x8, 0x23, 0x24, 0xc, 0x6, 0x2, 
       0x2, 0x24, 0x25, 0x9, 0x3, 0x2, 0x2, 0x25, 0x2a, 0x5, 0x6, 0x4, 0x7, 
       0x26, 0x27, 0xc, 0x5, 0x2, 0x2, 0x27, 0x28, 0x9, 0x4, 0x2, 0x2, 0x28, 
       0x2a, 0x5, 0x6, 0x4, 0x6, 0x29, 0x20, 0x3, 0x2, 0x2, 0x2, 0x29, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x29, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3, 
       0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 
       0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 
       0x2, 0x7, 0xe, 0x10, 0x1e, 0x29, 0x2b, 
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
