
// Generated from promi.g4 by ANTLR 4.9.3


#include "promiLexer.h"


using namespace antlr4;


promiLexer::promiLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

promiLexer::~promiLexer() {
  delete _interpreter;
}

std::string promiLexer::getGrammarFileName() const {
  return "promi.g4";
}

const std::vector<std::string>& promiLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& promiLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& promiLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& promiLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& promiLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> promiLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& promiLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> promiLexer::_decisionToDFA;
atn::PredictionContextCache promiLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN promiLexer::_atn;
std::vector<uint16_t> promiLexer::_serializedATN;

std::vector<std::string> promiLexer::_ruleNames = {
  "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "EOL", "INT", "WHITESPACE"
};

std::vector<std::string> promiLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> promiLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> promiLexer::_literalNames = {
  "", "'*'", "'/'", "'+'", "'-'", "'('", "')'", "';'"
};

std::vector<std::string> promiLexer::_symbolicNames = {
  "", "", "", "", "", "", "", "EOL", "INT", "WHITESPACE"
};

dfa::Vocabulary promiLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> promiLexer::_tokenNames;

promiLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
       0x2, 0xb, 0x2c, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
       0x9, 0xa, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0x25, 0xa, 0x9, 0xd, 0x9, 
       0xe, 0x9, 0x26, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x2, 0x2, 
       0xb, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 
       0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x3, 0x2, 0x4, 0x3, 0x2, 0x32, 0x3b, 
       0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x2, 0x2c, 0x2, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x3, 
       0x15, 0x3, 0x2, 0x2, 0x2, 0x5, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x9, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb, 0x1d, 0x3, 
       0x2, 0x2, 0x2, 0xd, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf, 0x21, 0x3, 0x2, 
       0x2, 0x2, 0x11, 0x24, 0x3, 0x2, 0x2, 0x2, 0x13, 0x28, 0x3, 0x2, 0x2, 
       0x2, 0x15, 0x16, 0x7, 0x2c, 0x2, 0x2, 0x16, 0x4, 0x3, 0x2, 0x2, 0x2, 
       0x17, 0x18, 0x7, 0x31, 0x2, 0x2, 0x18, 0x6, 0x3, 0x2, 0x2, 0x2, 0x19, 
       0x1a, 0x7, 0x2d, 0x2, 0x2, 0x1a, 0x8, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 
       0x7, 0x2f, 0x2, 0x2, 0x1c, 0xa, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 
       0x2a, 0x2, 0x2, 0x1e, 0xc, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x2b, 
       0x2, 0x2, 0x20, 0xe, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x3d, 0x2, 
       0x2, 0x22, 0x10, 0x3, 0x2, 0x2, 0x2, 0x23, 0x25, 0x9, 0x2, 0x2, 0x2, 
       0x24, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 
       0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x12, 
       0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x9, 0x3, 0x2, 0x2, 0x29, 0x2a, 0x3, 
       0x2, 0x2, 0x2, 0x2a, 0x2b, 0x8, 0xa, 0x2, 0x2, 0x2b, 0x14, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x2, 0x26, 0x3, 0x8, 0x2, 0x2, 
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

promiLexer::Initializer promiLexer::_init;
