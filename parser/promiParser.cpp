
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
    setState(9);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == promiParser::T__4

    || _la == promiParser::INT) {
      setState(4);
      expression(0);
      setState(5);
      match(promiParser::EOL);
      setState(11);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
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

tree::TerminalNode* promiParser::ExpressionContext::INT() {
  return getToken(promiParser::INT, 0);
}

std::vector<promiParser::ExpressionContext *> promiParser::ExpressionContext::expression() {
  return getRuleContexts<promiParser::ExpressionContext>();
}

promiParser::ExpressionContext* promiParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<promiParser::ExpressionContext>(i);
}


size_t promiParser::ExpressionContext::getRuleIndex() const {
  return promiParser::RuleExpression;
}


antlrcpp::Any promiParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<promiVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
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
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, promiParser::RuleExpression, precedence);

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
    setState(18);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case promiParser::INT: {
        setState(13);
        match(promiParser::INT);
        break;
      }

      case promiParser::T__4: {
        setState(14);
        match(promiParser::T__4);
        setState(15);
        expression(0);
        setState(16);
        match(promiParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(28);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(26);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(20);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(21);
          _la = _input->LA(1);
          if (!(_la == promiParser::T__0

          || _la == promiParser::T__1)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(22);
          expression(5);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(23);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(24);
          _la = _input->LA(1);
          if (!(_la == promiParser::T__2

          || _la == promiParser::T__3)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(25);
          expression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(30);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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
    case 1: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool promiParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

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
  "program", "expression"
};

std::vector<std::string> promiParser::_literalNames = {
  "", "'*'", "'/'", "'+'", "'-'", "'('", "')'", "';'"
};

std::vector<std::string> promiParser::_symbolicNames = {
  "", "", "", "", "", "", "", "EOL", "INT", "WHITESPACE"
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
       0x3, 0xb, 0x22, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
       0xd, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x5, 0x3, 0x15, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1d, 0xa, 0x3, 0xc, 0x3, 
       0xe, 0x3, 0x20, 0xb, 0x3, 0x3, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x4, 
       0x2, 0x4, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x5, 0x6, 0x2, 0x23, 0x2, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7, 
       0x5, 0x4, 0x3, 0x2, 0x7, 0x8, 0x7, 0x9, 0x2, 0x2, 0x8, 0xa, 0x3, 
       0x2, 0x2, 0x2, 0x9, 0x6, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0xe, 0xf, 0x8, 0x3, 0x1, 0x2, 0xf, 0x15, 0x7, 0xa, 0x2, 0x2, 0x10, 
       0x11, 0x7, 0x7, 0x2, 0x2, 0x11, 0x12, 0x5, 0x4, 0x3, 0x2, 0x12, 0x13, 
       0x7, 0x8, 0x2, 0x2, 0x13, 0x15, 0x3, 0x2, 0x2, 0x2, 0x14, 0xe, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0x10, 0x3, 0x2, 0x2, 0x2, 0x15, 0x1e, 0x3, 0x2, 
       0x2, 0x2, 0x16, 0x17, 0xc, 0x6, 0x2, 0x2, 0x17, 0x18, 0x9, 0x2, 0x2, 
       0x2, 0x18, 0x1d, 0x5, 0x4, 0x3, 0x7, 0x19, 0x1a, 0xc, 0x5, 0x2, 0x2, 
       0x1a, 0x1b, 0x9, 0x3, 0x2, 0x2, 0x1b, 0x1d, 0x5, 0x4, 0x3, 0x6, 0x1c, 
       0x16, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x20, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 
       0x2, 0x2, 0x2, 0x1f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 
       0x2, 0x2, 0x6, 0xb, 0x14, 0x1c, 0x1e, 
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
