
// Generated from /tmp/antlr_cpp_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"


namespace myparser {


class  MyGrammarLexer : public antlr4::Lexer {
public:
  enum {
    COMMENT = 1, COMMENT_BLOCK = 2, WHITESPACE = 3, FRAGMENT = 4, GRAMMAR = 5, 
    CHANNEL = 6, SKIP_TOK = 7, ESC_HYPHEN = 8, ESC_QUOTE = 9, ARROW = 10, 
    TILDE = 11, COLON = 12, SEMI = 13, LPAREN = 14, RPAREN = 15, LBRACK = 16, 
    RBRACK = 17, LBRACE = 18, RBRACE = 19, STAR = 20, PLUS = 21, QMARK = 22, 
    PIPE = 23, HYPHEN = 24, POUND = 25, DOT = 26, TOKEN_IDENT = 27, RULE_IDENT = 28, 
    STRING = 29, SET_TOK = 30
  };

  MyGrammarLexer(antlr4::CharStream *input);
  ~MyGrammarLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace myparser
