
// Generated from /tmp/antlr_cpp_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"


namespace myparser {


class  MyGrammarParser : public antlr4::Parser {
public:
  enum {
    COMMENT = 1, COMMENT_BLOCK = 2, WHITESPACE = 3, FRAGMENT = 4, GRAMMAR = 5, 
    CHANNEL = 6, SKIP_TOK = 7, ESC_HYPHEN = 8, ESC_QUOTE = 9, ARROW = 10, 
    TILDE = 11, COLON = 12, SEMI = 13, LPAREN = 14, RPAREN = 15, LBRACK = 16, 
    RBRACK = 17, LBRACE = 18, RBRACE = 19, STAR = 20, PLUS = 21, QMARK = 22, 
    PIPE = 23, HYPHEN = 24, POUND = 25, DOT = 26, TOKEN_IDENT = 27, RULE_IDENT = 28, 
    STRING = 29, SET_TOK = 30
  };

  enum {
    RuleRule_binding = 0, RuleRedirect = 1, RuleRule_def = 2, RuleRule_alt = 3, 
    RuleEmpty_alt = 4, RuleNonempty_alt = 5, RuleIdent = 6, RuleRule_item = 7, 
    RuleAlt_label = 8, RuleHeader = 9, RuleRoot = 10, RuleEmpty_rule = 11, 
    RuleComment = 12, RuleComment_block = 13
  };

  MyGrammarParser(antlr4::TokenStream *input);
  ~MyGrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Rule_bindingContext;
  class RedirectContext;
  class Rule_defContext;
  class Rule_altContext;
  class Empty_altContext;
  class Nonempty_altContext;
  class IdentContext;
  class Rule_itemContext;
  class Alt_labelContext;
  class HeaderContext;
  class RootContext;
  class Empty_ruleContext;
  class CommentContext;
  class Comment_blockContext; 

  class  Rule_bindingContext : public antlr4::ParserRuleContext {
  public:
    Rule_bindingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *FRAGMENT();
    Rule_defContext *rule_def();
    RedirectContext *redirect();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_bindingContext* rule_binding();

  class  RedirectContext : public antlr4::ParserRuleContext {
  public:
    RedirectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARROW();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *TOKEN_IDENT();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SKIP_TOK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RedirectContext* redirect();

  class  Rule_defContext : public antlr4::ParserRuleContext {
  public:
    Rule_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rule_altContext *> rule_alt();
    Rule_altContext* rule_alt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PIPE();
    antlr4::tree::TerminalNode* PIPE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_defContext* rule_def();

  class  Rule_altContext : public antlr4::ParserRuleContext {
  public:
    Rule_altContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nonempty_altContext *nonempty_alt();
    Empty_altContext *empty_alt();
    antlr4::tree::TerminalNode *PIPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_altContext* rule_alt();

  class  Empty_altContext : public antlr4::ParserRuleContext {
  public:
    Empty_altContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Empty_ruleContext *empty_rule();
    Alt_labelContext *alt_label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_altContext* empty_alt();

  class  Nonempty_altContext : public antlr4::ParserRuleContext {
  public:
    Nonempty_altContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rule_itemContext *> rule_item();
    Rule_itemContext* rule_item(size_t i);
    Alt_labelContext *alt_label();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonempty_altContext* nonempty_alt();

  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOKEN_IDENT();
    antlr4::tree::TerminalNode *RULE_IDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentContext* ident();

  class  Rule_itemContext : public antlr4::ParserRuleContext {
  public:
    Rule_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Rule_itemContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Rule_itemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Rule_dotContext : public Rule_itemContext {
  public:
    Rule_dotContext(Rule_itemContext *ctx);

    antlr4::tree::TerminalNode *DOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rule_stringContext : public Rule_itemContext {
  public:
    Rule_stringContext(Rule_itemContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rule_setContext : public Rule_itemContext {
  public:
    Rule_setContext(Rule_itemContext *ctx);

    antlr4::tree::TerminalNode *SET_TOK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rule_subContext : public Rule_itemContext {
  public:
    Rule_subContext(Rule_itemContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    Rule_defContext *rule_def();
    antlr4::tree::TerminalNode *RPAREN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rule_punctContext : public Rule_itemContext {
  public:
    Rule_punctContext(Rule_itemContext *ctx);

    antlr4::tree::TerminalNode *TILDE();
    Rule_itemContext *rule_item();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *QMARK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rule_commentContext : public Rule_itemContext {
  public:
    Rule_commentContext(Rule_itemContext *ctx);

    Comment_blockContext *comment_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Rule_identContext : public Rule_itemContext {
  public:
    Rule_identContext(Rule_itemContext *ctx);

    IdentContext *ident();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Rule_itemContext* rule_item();
  Rule_itemContext* rule_item(int precedence);
  class  Alt_labelContext : public antlr4::ParserRuleContext {
  public:
    Alt_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUND();
    IdentContext *ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alt_labelContext* alt_label();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRAMMAR();
    IdentContext *ident();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<Rule_bindingContext *> rule_binding();
    Rule_bindingContext* rule_binding(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootContext* root();

  class  Empty_ruleContext : public antlr4::ParserRuleContext {
  public:
    Empty_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_ruleContext* empty_rule();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  Comment_blockContext : public antlr4::ParserRuleContext {
  public:
    Comment_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT_BLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_blockContext* comment_block();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool rule_itemSempred(Rule_itemContext *_localctx, size_t predicateIndex);

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

}  // namespace myparser
