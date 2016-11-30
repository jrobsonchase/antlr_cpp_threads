
// Generated from /data/home/jchase/src/github.com/Pursuit92/antlr_rust_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"


using namespace antlr4;

namespace myparser {


class MyGrammarParser : public Parser {
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

  MyGrammarParser(TokenStream *input);
  ~MyGrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual dfa::Vocabulary& getVocabulary() const override;


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

  class Rule_bindingContext : public ParserRuleContext {
  public:
    Rule_bindingContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();
    tree::TerminalNode *COLON();
    tree::TerminalNode *SEMI();
    tree::TerminalNode *FRAGMENT();
    Rule_defContext *rule_def();
    RedirectContext *redirect();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_bindingContext* rule_binding();

  class RedirectContext : public ParserRuleContext {
  public:
    RedirectContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *ARROW();
    tree::TerminalNode *CHANNEL();
    tree::TerminalNode *LPAREN();
    tree::TerminalNode *TOKEN_IDENT();
    tree::TerminalNode *RPAREN();
    tree::TerminalNode *SKIP_TOK();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  RedirectContext* redirect();

  class Rule_defContext : public ParserRuleContext {
  public:
    Rule_defContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rule_altContext *> rule_alt();
    Rule_altContext* rule_alt(size_t i);
    std::vector<tree::TerminalNode *> PIPE();
    tree::TerminalNode* PIPE(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_defContext* rule_def();

  class Rule_altContext : public ParserRuleContext {
  public:
    Rule_altContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nonempty_altContext *nonempty_alt();
    Empty_altContext *empty_alt();
    tree::TerminalNode *PIPE();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_altContext* rule_alt();

  class Empty_altContext : public ParserRuleContext {
  public:
    Empty_altContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Empty_ruleContext *empty_rule();
    Alt_labelContext *alt_label();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_altContext* empty_alt();

  class Nonempty_altContext : public ParserRuleContext {
  public:
    Nonempty_altContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rule_itemContext *> rule_item();
    Rule_itemContext* rule_item(size_t i);
    Alt_labelContext *alt_label();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonempty_altContext* nonempty_alt();

  class IdentContext : public ParserRuleContext {
  public:
    IdentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *TOKEN_IDENT();
    tree::TerminalNode *RULE_IDENT();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentContext* ident();

  class Rule_itemContext : public ParserRuleContext {
  public:
    Rule_itemContext(ParserRuleContext *parent, size_t invokingState);
   
    Rule_itemContext() : ParserRuleContext() { }
    void copyFrom(Rule_itemContext *context);
    using ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class Rule_dotContext : public Rule_itemContext {
  public:
    Rule_dotContext(Rule_itemContext *ctx);

    tree::TerminalNode *DOT();
    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
  };

  class Rule_stringContext : public Rule_itemContext {
  public:
    Rule_stringContext(Rule_itemContext *ctx);

    tree::TerminalNode *STRING();
    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
  };

  class Rule_setContext : public Rule_itemContext {
  public:
    Rule_setContext(Rule_itemContext *ctx);

    tree::TerminalNode *SET_TOK();
    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
  };

  class Rule_subContext : public Rule_itemContext {
  public:
    Rule_subContext(Rule_itemContext *ctx);

    tree::TerminalNode *LPAREN();
    Rule_defContext *rule_def();
    tree::TerminalNode *RPAREN();
    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
  };

  class Rule_punctContext : public Rule_itemContext {
  public:
    Rule_punctContext(Rule_itemContext *ctx);

    tree::TerminalNode *TILDE();
    Rule_itemContext *rule_item();
    tree::TerminalNode *PLUS();
    tree::TerminalNode *STAR();
    tree::TerminalNode *QMARK();
    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
  };

  class Rule_commentContext : public Rule_itemContext {
  public:
    Rule_commentContext(Rule_itemContext *ctx);

    Comment_blockContext *comment_block();
    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
  };

  class Rule_identContext : public Rule_itemContext {
  public:
    Rule_identContext(Rule_itemContext *ctx);

    IdentContext *ident();
    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
  };

  Rule_itemContext* rule_item();
  Rule_itemContext* rule_item(int precedence);
  class Alt_labelContext : public ParserRuleContext {
  public:
    Alt_labelContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *POUND();
    IdentContext *ident();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Alt_labelContext* alt_label();

  class HeaderContext : public ParserRuleContext {
  public:
    HeaderContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *GRAMMAR();
    IdentContext *ident();
    tree::TerminalNode *SEMI();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class RootContext : public ParserRuleContext {
  public:
    RootContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<Rule_bindingContext *> rule_binding();
    Rule_bindingContext* rule_binding(size_t i);

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  RootContext* root();

  class Empty_ruleContext : public ParserRuleContext {
  public:
    Empty_ruleContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_ruleContext* empty_rule();

  class CommentContext : public ParserRuleContext {
  public:
    CommentContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *COMMENT();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class Comment_blockContext : public ParserRuleContext {
  public:
    Comment_blockContext(ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    tree::TerminalNode *COMMENT_BLOCK();

    virtual void enterRule(tree::ParseTreeListener *listener) override;
    virtual void exitRule(tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_blockContext* comment_block();


  virtual bool sempred(RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool rule_itemSempred(Rule_itemContext *_localctx, size_t predicateIndex);

private:
  static thread_local std::vector<dfa::DFA> _decisionToDFA;
  static thread_local atn::PredictionContextCache _sharedContextCache;
  static thread_local std::vector<std::string> _ruleNames;
  static thread_local std::vector<std::string> _tokenNames;

  static thread_local std::vector<std::string> _literalNames;
  static thread_local std::vector<std::string> _symbolicNames;
  static thread_local dfa::Vocabulary _vocabulary;
  static thread_local atn::ATN _atn;
  static thread_local std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static thread_local Initializer _init;
};

}  // namespace myparser
