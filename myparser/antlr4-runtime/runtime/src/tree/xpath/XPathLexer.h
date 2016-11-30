
// Generated from XPathLexer.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "Vocabulary.h"

namespace antlr4 {

class XPathLexer : public Lexer {
public:
  enum {
    TOKEN_REF = 1, RULE_REF = 2, ANYWHERE = 3, ROOT = 4, WILDCARD = 5, BANG = 6, 
    ID = 7, STRING = 8
  };

  XPathLexer(CharStream *input);
  ~XPathLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual const dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const atn::ATN& getATN() const override;

  virtual void action(RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

private:
  static thread_local std::vector<dfa::DFA> _decisionToDFA;
  static thread_local atn::PredictionContextCache _sharedContextCache;
  static thread_local std::vector<std::string> _ruleNames;
  static thread_local std::vector<std::string> _tokenNames;
  static thread_local std::vector<std::string> _modeNames;

  static thread_local std::vector<std::string> _literalNames;
  static thread_local std::vector<std::string> _symbolicNames;
  static thread_local dfa::Vocabulary _vocabulary;
  static thread_local atn::ATN _atn;
  static thread_local std::vector<uint16_t> _serializedATN;

  // Individual action functions triggered by action() above.
  void IDAction(RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static thread_local Initializer _init;
};

}  // namespace antlr4
