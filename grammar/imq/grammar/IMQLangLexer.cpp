
// Generated from grammar/IMQLang.g4 by ANTLR 4.6


#include "IMQLangLexer.h"


using namespace antlr4;

using namespace imq;

IMQLangLexer::IMQLangLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

IMQLangLexer::~IMQLangLexer() {
  delete _interpreter;
}

std::string IMQLangLexer::getGrammarFileName() const {
  return "IMQLang.g4";
}

const std::vector<std::string>& IMQLangLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& IMQLangLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& IMQLangLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& IMQLangLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> IMQLangLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& IMQLangLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> IMQLangLexer::_decisionToDFA;
atn::PredictionContextCache IMQLangLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IMQLangLexer::_atn;
std::vector<uint16_t> IMQLangLexer::_serializedATN;

std::vector<std::string> IMQLangLexer::_ruleNames = {
  "SEMICOLON", "DELETE", "INPUT", "OUTPUT", "FROM", "IF", "ELSE", "FOR", 
  "WHILE", "DO", "L_PAREN", "R_PAREN", "L_BRACKET", "R_BRACKET", "L_BRACE", 
  "R_BRACE", "COMMA", "COLON", "DOT", "NOT", "AND", "OR", "EQUAL", "BANG", 
  "GREATER", "LESS", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULUS", "B_TRUE", 
  "B_FALSE", "FLOAT", "INTEGER", "IDENT", "WS", "COMMENT"
};

std::vector<std::string> IMQLangLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> IMQLangLexer::_literalNames = {
  "", "';'", "'delete'", "'in'", "'out'", "'from'", "'if'", "'else'", "'for'", 
  "'while'", "'do'", "'('", "')'", "'['", "']'", "'{'", "'}'", "','", "':'", 
  "'.'", "'not'", "'and'", "'or'", "'='", "'!'", "'>'", "'<'", "'+'", "'-'", 
  "'*'", "'/'", "'%'", "'true'", "'false'"
};

std::vector<std::string> IMQLangLexer::_symbolicNames = {
  "", "SEMICOLON", "DELETE", "INPUT", "OUTPUT", "FROM", "IF", "ELSE", "FOR", 
  "WHILE", "DO", "L_PAREN", "R_PAREN", "L_BRACKET", "R_BRACKET", "L_BRACE", 
  "R_BRACE", "COMMA", "COLON", "DOT", "NOT", "AND", "OR", "EQUAL", "BANG", 
  "GREATER", "LESS", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULUS", "B_TRUE", 
  "B_FALSE", "FLOAT", "INTEGER", "IDENT", "WS", "COMMENT"
};

dfa::Vocabulary IMQLangLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> IMQLangLexer::_tokenNames;

IMQLangLexer::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd, 
    0x2, 0x28, 0xde, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 
    0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 
    0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 
    0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 
    0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 
    0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 
    0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 
    0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x5, 0x23, 0xb5, 
    0xa, 0x23, 0x3, 0x23, 0x6, 0x23, 0xb8, 0xa, 0x23, 0xd, 0x23, 0xe, 0x23, 
    0xb9, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0xbe, 0xa, 0x23, 0xc, 0x23, 0xe, 
    0x23, 0xc1, 0xb, 0x23, 0x3, 0x24, 0x5, 0x24, 0xc4, 0xa, 0x24, 0x3, 0x24, 
    0x6, 0x24, 0xc7, 0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0xc8, 0x3, 0x25, 0x3, 
    0x25, 0x7, 0x25, 0xcd, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0xd0, 0xb, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x7, 
    0x27, 0xd8, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0xdb, 0xb, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x2, 0x2, 0x28, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 
    0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 
    0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 0x21, 0x12, 0x23, 0x13, 
    0x25, 0x14, 0x27, 0x15, 0x29, 0x16, 0x2b, 0x17, 0x2d, 0x18, 0x2f, 0x19, 
    0x31, 0x1a, 0x33, 0x1b, 0x35, 0x1c, 0x37, 0x1d, 0x39, 0x1e, 0x3b, 0x1f, 
    0x3d, 0x20, 0x3f, 0x21, 0x41, 0x22, 0x43, 0x23, 0x45, 0x24, 0x47, 0x25, 
    0x49, 0x26, 0x4b, 0x27, 0x4d, 0x28, 0x3, 0x2, 0x7, 0x3, 0x2, 0x32, 0x3b, 
    0x5, 0x2, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 0x6, 0x2, 0x32, 0x3b, 
    0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 
    0x22, 0x4, 0x2, 0xc, 0xc, 0xf, 0xf, 0xe4, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x3, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x51, 0x3, 0x2, 0x2, 0x2, 0x7, 0x58, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xb, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x64, 0x3, 0x2, 0x2, 0x2, 0xf, 0x67, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x13, 0x70, 0x3, 0x2, 0x2, 0x2, 0x15, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x79, 0x3, 0x2, 0x2, 0x2, 0x19, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x21, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x23, 0x85, 0x3, 0x2, 0x2, 0x2, 0x25, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x27, 0x89, 0x3, 0x2, 0x2, 0x2, 0x29, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x93, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x98, 0x3, 0x2, 0x2, 0x2, 0x33, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x37, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x3b, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x3f, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x43, 0xad, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0x47, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x49, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x3d, 0x2, 0x2, 0x50, 0x4, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x52, 0x7, 0x66, 0x2, 0x2, 0x52, 0x53, 0x7, 0x67, 0x2, 
    0x2, 0x53, 0x54, 0x7, 0x6e, 0x2, 0x2, 0x54, 0x55, 0x7, 0x67, 0x2, 0x2, 
    0x55, 0x56, 0x7, 0x76, 0x2, 0x2, 0x56, 0x57, 0x7, 0x67, 0x2, 0x2, 0x57, 
    0x6, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x6b, 0x2, 0x2, 0x59, 0x5a, 
    0x7, 0x70, 0x2, 0x2, 0x5a, 0x8, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 
    0x71, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x77, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x76, 
    0x2, 0x2, 0x5e, 0xa, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x68, 0x2, 
    0x2, 0x60, 0x61, 0x7, 0x74, 0x2, 0x2, 0x61, 0x62, 0x7, 0x71, 0x2, 0x2, 
    0x62, 0x63, 0x7, 0x6f, 0x2, 0x2, 0x63, 0xc, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x65, 0x7, 0x6b, 0x2, 0x2, 0x65, 0x66, 0x7, 0x68, 0x2, 0x2, 0x66, 0xe, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x67, 0x2, 0x2, 0x68, 0x69, 0x7, 
    0x6e, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x75, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x67, 
    0x2, 0x2, 0x6b, 0x10, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x68, 0x2, 
    0x2, 0x6d, 0x6e, 0x7, 0x71, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x74, 0x2, 0x2, 
    0x6f, 0x12, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x79, 0x2, 0x2, 0x71, 
    0x72, 0x7, 0x6a, 0x2, 0x2, 0x72, 0x73, 0x7, 0x6b, 0x2, 0x2, 0x73, 0x74, 
    0x7, 0x6e, 0x2, 0x2, 0x74, 0x75, 0x7, 0x67, 0x2, 0x2, 0x75, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0x66, 0x2, 0x2, 0x77, 0x78, 0x7, 0x71, 
    0x2, 0x2, 0x78, 0x16, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x2a, 0x2, 
    0x2, 0x7a, 0x18, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x2b, 0x2, 0x2, 
    0x7c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x5d, 0x2, 0x2, 0x7e, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x5f, 0x2, 0x2, 0x80, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x7d, 0x2, 0x2, 0x82, 0x20, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x7f, 0x2, 0x2, 0x84, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x86, 0x7, 0x2e, 0x2, 0x2, 0x86, 0x24, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x88, 0x7, 0x3c, 0x2, 0x2, 0x88, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x8a, 0x7, 0x30, 0x2, 0x2, 0x8a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8c, 0x7, 0x70, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x71, 0x2, 0x2, 0x8d, 0x8e, 
    0x7, 0x76, 0x2, 0x2, 0x8e, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 
    0x63, 0x2, 0x2, 0x90, 0x91, 0x7, 0x70, 0x2, 0x2, 0x91, 0x92, 0x7, 0x66, 
    0x2, 0x2, 0x92, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x71, 0x2, 
    0x2, 0x94, 0x95, 0x7, 0x74, 0x2, 0x2, 0x95, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x97, 0x7, 0x3f, 0x2, 0x2, 0x97, 0x30, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x7, 0x23, 0x2, 0x2, 0x99, 0x32, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x7, 0x40, 0x2, 0x2, 0x9b, 0x34, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 
    0x3e, 0x2, 0x2, 0x9d, 0x36, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x2d, 
    0x2, 0x2, 0x9f, 0x38, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x2f, 0x2, 
    0x2, 0xa1, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x2c, 0x2, 0x2, 
    0xa3, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x31, 0x2, 0x2, 0xa5, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x27, 0x2, 0x2, 0xa7, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x76, 0x2, 0x2, 0xa9, 0xaa, 0x7, 
    0x74, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x77, 0x2, 0x2, 0xab, 0xac, 0x7, 0x67, 
    0x2, 0x2, 0xac, 0x42, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x68, 0x2, 
    0x2, 0xae, 0xaf, 0x7, 0x63, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x6e, 0x2, 0x2, 
    0xb0, 0xb1, 0x7, 0x75, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x67, 0x2, 0x2, 0xb2, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x7, 0x2f, 0x2, 0x2, 0xb4, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb8, 0x9, 0x2, 0x2, 0x2, 0xb7, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbf, 0x7, 0x30, 0x2, 0x2, 0xbc, 0xbe, 0x9, 0x2, 0x2, 0x2, 0xbd, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc4, 0x7, 0x2f, 
    0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x9, 0x2, 0x2, 0x2, 
    0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x48, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xce, 0x9, 0x3, 0x2, 0x2, 0xcb, 0xcd, 0x9, 
    0x4, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0x4a, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd2, 0x9, 0x5, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd4, 0x8, 0x26, 0x2, 0x2, 0xd4, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd9, 
    0x7, 0x25, 0x2, 0x2, 0xd6, 0xd8, 0xa, 0x6, 0x2, 0x2, 0xd7, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x8, 0x27, 0x2, 0x2, 
    0xdd, 0x4e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2, 0xb4, 0xb9, 0xbf, 0xc3, 0xc8, 
    0xce, 0xd9, 0x3, 0x2, 0x3, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IMQLangLexer::Initializer IMQLangLexer::_init;
