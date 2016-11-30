
// Generated from /data/home/jchase/src/github.com/Pursuit92/antlr_rust_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.5.3


#include "MyGrammarListener.h"
#include "MyGrammarVisitor.h"

#include "MyGrammarParser.h"


using namespace antlrcpp;
using namespace myparser;
using namespace antlr4;

MyGrammarParser::MyGrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MyGrammarParser::~MyGrammarParser() {
  delete _interpreter;
}

std::string MyGrammarParser::getGrammarFileName() const {
  return "MyGrammar.g4";
}

const std::vector<std::string>& MyGrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MyGrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Rule_bindingContext ------------------------------------------------------------------

MyGrammarParser::Rule_bindingContext::Rule_bindingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyGrammarParser::IdentContext* MyGrammarParser::Rule_bindingContext::ident() {
  return getRuleContext<MyGrammarParser::IdentContext>(0);
}

tree::TerminalNode* MyGrammarParser::Rule_bindingContext::COLON() {
  return getToken(MyGrammarParser::COLON, 0);
}

tree::TerminalNode* MyGrammarParser::Rule_bindingContext::SEMI() {
  return getToken(MyGrammarParser::SEMI, 0);
}

tree::TerminalNode* MyGrammarParser::Rule_bindingContext::FRAGMENT() {
  return getToken(MyGrammarParser::FRAGMENT, 0);
}

MyGrammarParser::Rule_defContext* MyGrammarParser::Rule_bindingContext::rule_def() {
  return getRuleContext<MyGrammarParser::Rule_defContext>(0);
}

MyGrammarParser::RedirectContext* MyGrammarParser::Rule_bindingContext::redirect() {
  return getRuleContext<MyGrammarParser::RedirectContext>(0);
}


size_t MyGrammarParser::Rule_bindingContext::getRuleIndex() const {
  return MyGrammarParser::RuleRule_binding;
}

void MyGrammarParser::Rule_bindingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_binding(this);
}

void MyGrammarParser::Rule_bindingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_binding(this);
}


antlrcpp::Any MyGrammarParser::Rule_bindingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_binding(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Rule_bindingContext* MyGrammarParser::rule_binding() {
  Rule_bindingContext *_localctx = _tracker.createInstance<Rule_bindingContext>(_ctx, getState());
  enterRule(_localctx, 0, MyGrammarParser::RuleRule_binding);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);

    _la = _input->LA(1);
    if (_la == MyGrammarParser::FRAGMENT) {
      setState(28);
      match(MyGrammarParser::FRAGMENT);
    }
    setState(31);
    ident();
    setState(32);
    match(MyGrammarParser::COLON);
    setState(34);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyGrammarParser::COMMENT_BLOCK)
      | (1ULL << MyGrammarParser::TILDE)
      | (1ULL << MyGrammarParser::LPAREN)
      | (1ULL << MyGrammarParser::PIPE)
      | (1ULL << MyGrammarParser::POUND)
      | (1ULL << MyGrammarParser::DOT)
      | (1ULL << MyGrammarParser::TOKEN_IDENT)
      | (1ULL << MyGrammarParser::RULE_IDENT)
      | (1ULL << MyGrammarParser::STRING)
      | (1ULL << MyGrammarParser::SET_TOK))) != 0)) {
      setState(33);
      rule_def();
    }
    setState(37);

    _la = _input->LA(1);
    if (_la == MyGrammarParser::ARROW) {
      setState(36);
      redirect();
    }
    setState(39);
    match(MyGrammarParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RedirectContext ------------------------------------------------------------------

MyGrammarParser::RedirectContext::RedirectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::RedirectContext::ARROW() {
  return getToken(MyGrammarParser::ARROW, 0);
}

tree::TerminalNode* MyGrammarParser::RedirectContext::CHANNEL() {
  return getToken(MyGrammarParser::CHANNEL, 0);
}

tree::TerminalNode* MyGrammarParser::RedirectContext::LPAREN() {
  return getToken(MyGrammarParser::LPAREN, 0);
}

tree::TerminalNode* MyGrammarParser::RedirectContext::TOKEN_IDENT() {
  return getToken(MyGrammarParser::TOKEN_IDENT, 0);
}

tree::TerminalNode* MyGrammarParser::RedirectContext::RPAREN() {
  return getToken(MyGrammarParser::RPAREN, 0);
}

tree::TerminalNode* MyGrammarParser::RedirectContext::SKIP_TOK() {
  return getToken(MyGrammarParser::SKIP_TOK, 0);
}


size_t MyGrammarParser::RedirectContext::getRuleIndex() const {
  return MyGrammarParser::RuleRedirect;
}

void MyGrammarParser::RedirectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRedirect(this);
}

void MyGrammarParser::RedirectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRedirect(this);
}


antlrcpp::Any MyGrammarParser::RedirectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRedirect(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::RedirectContext* MyGrammarParser::redirect() {
  RedirectContext *_localctx = _tracker.createInstance<RedirectContext>(_ctx, getState());
  enterRule(_localctx, 2, MyGrammarParser::RuleRedirect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(MyGrammarParser::ARROW);
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyGrammarParser::CHANNEL: {
        setState(42);
        match(MyGrammarParser::CHANNEL);
        setState(43);
        match(MyGrammarParser::LPAREN);
        setState(44);
        match(MyGrammarParser::TOKEN_IDENT);
        setState(45);
        match(MyGrammarParser::RPAREN);
        break;
      }

      case MyGrammarParser::SKIP_TOK: {
        setState(46);
        match(MyGrammarParser::SKIP_TOK);
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

//----------------- Rule_defContext ------------------------------------------------------------------

MyGrammarParser::Rule_defContext::Rule_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyGrammarParser::Rule_altContext *> MyGrammarParser::Rule_defContext::rule_alt() {
  return getRuleContexts<MyGrammarParser::Rule_altContext>();
}

MyGrammarParser::Rule_altContext* MyGrammarParser::Rule_defContext::rule_alt(size_t i) {
  return getRuleContext<MyGrammarParser::Rule_altContext>(i);
}

std::vector<tree::TerminalNode *> MyGrammarParser::Rule_defContext::PIPE() {
  return getTokens(MyGrammarParser::PIPE);
}

tree::TerminalNode* MyGrammarParser::Rule_defContext::PIPE(size_t i) {
  return getToken(MyGrammarParser::PIPE, i);
}


size_t MyGrammarParser::Rule_defContext::getRuleIndex() const {
  return MyGrammarParser::RuleRule_def;
}

void MyGrammarParser::Rule_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_def(this);
}

void MyGrammarParser::Rule_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_def(this);
}


antlrcpp::Any MyGrammarParser::Rule_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_def(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Rule_defContext* MyGrammarParser::rule_def() {
  Rule_defContext *_localctx = _tracker.createInstance<Rule_defContext>(_ctx, getState());
  enterRule(_localctx, 4, MyGrammarParser::RuleRule_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    rule_alt();
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MyGrammarParser::PIPE) {
      setState(50);
      match(MyGrammarParser::PIPE);
      setState(51);
      rule_alt();
      setState(56);
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

//----------------- Rule_altContext ------------------------------------------------------------------

MyGrammarParser::Rule_altContext::Rule_altContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyGrammarParser::Nonempty_altContext* MyGrammarParser::Rule_altContext::nonempty_alt() {
  return getRuleContext<MyGrammarParser::Nonempty_altContext>(0);
}

MyGrammarParser::Empty_altContext* MyGrammarParser::Rule_altContext::empty_alt() {
  return getRuleContext<MyGrammarParser::Empty_altContext>(0);
}

tree::TerminalNode* MyGrammarParser::Rule_altContext::PIPE() {
  return getToken(MyGrammarParser::PIPE, 0);
}


size_t MyGrammarParser::Rule_altContext::getRuleIndex() const {
  return MyGrammarParser::RuleRule_alt;
}

void MyGrammarParser::Rule_altContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_alt(this);
}

void MyGrammarParser::Rule_altContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_alt(this);
}


antlrcpp::Any MyGrammarParser::Rule_altContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_alt(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Rule_altContext* MyGrammarParser::rule_alt() {
  Rule_altContext *_localctx = _tracker.createInstance<Rule_altContext>(_ctx, getState());
  enterRule(_localctx, 6, MyGrammarParser::RuleRule_alt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);

    _la = _input->LA(1);
    if (_la == MyGrammarParser::PIPE

    || _la == MyGrammarParser::POUND) {
      setState(57);
      empty_alt();
      setState(58);
      match(MyGrammarParser::PIPE);
    }
    setState(62);
    nonempty_alt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Empty_altContext ------------------------------------------------------------------

MyGrammarParser::Empty_altContext::Empty_altContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyGrammarParser::Empty_ruleContext* MyGrammarParser::Empty_altContext::empty_rule() {
  return getRuleContext<MyGrammarParser::Empty_ruleContext>(0);
}

MyGrammarParser::Alt_labelContext* MyGrammarParser::Empty_altContext::alt_label() {
  return getRuleContext<MyGrammarParser::Alt_labelContext>(0);
}


size_t MyGrammarParser::Empty_altContext::getRuleIndex() const {
  return MyGrammarParser::RuleEmpty_alt;
}

void MyGrammarParser::Empty_altContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmpty_alt(this);
}

void MyGrammarParser::Empty_altContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmpty_alt(this);
}


antlrcpp::Any MyGrammarParser::Empty_altContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitEmpty_alt(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Empty_altContext* MyGrammarParser::empty_alt() {
  Empty_altContext *_localctx = _tracker.createInstance<Empty_altContext>(_ctx, getState());
  enterRule(_localctx, 8, MyGrammarParser::RuleEmpty_alt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    empty_rule();
    setState(66);

    _la = _input->LA(1);
    if (_la == MyGrammarParser::POUND) {
      setState(65);
      alt_label();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Nonempty_altContext ------------------------------------------------------------------

MyGrammarParser::Nonempty_altContext::Nonempty_altContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MyGrammarParser::Rule_itemContext *> MyGrammarParser::Nonempty_altContext::rule_item() {
  return getRuleContexts<MyGrammarParser::Rule_itemContext>();
}

MyGrammarParser::Rule_itemContext* MyGrammarParser::Nonempty_altContext::rule_item(size_t i) {
  return getRuleContext<MyGrammarParser::Rule_itemContext>(i);
}

MyGrammarParser::Alt_labelContext* MyGrammarParser::Nonempty_altContext::alt_label() {
  return getRuleContext<MyGrammarParser::Alt_labelContext>(0);
}


size_t MyGrammarParser::Nonempty_altContext::getRuleIndex() const {
  return MyGrammarParser::RuleNonempty_alt;
}

void MyGrammarParser::Nonempty_altContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonempty_alt(this);
}

void MyGrammarParser::Nonempty_altContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonempty_alt(this);
}


antlrcpp::Any MyGrammarParser::Nonempty_altContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitNonempty_alt(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Nonempty_altContext* MyGrammarParser::nonempty_alt() {
  Nonempty_altContext *_localctx = _tracker.createInstance<Nonempty_altContext>(_ctx, getState());
  enterRule(_localctx, 10, MyGrammarParser::RuleNonempty_alt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(68);
      rule_item(0);
      setState(71); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyGrammarParser::COMMENT_BLOCK)
      | (1ULL << MyGrammarParser::TILDE)
      | (1ULL << MyGrammarParser::LPAREN)
      | (1ULL << MyGrammarParser::DOT)
      | (1ULL << MyGrammarParser::TOKEN_IDENT)
      | (1ULL << MyGrammarParser::RULE_IDENT)
      | (1ULL << MyGrammarParser::STRING)
      | (1ULL << MyGrammarParser::SET_TOK))) != 0));
    setState(74);

    _la = _input->LA(1);
    if (_la == MyGrammarParser::POUND) {
      setState(73);
      alt_label();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentContext ------------------------------------------------------------------

MyGrammarParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::IdentContext::TOKEN_IDENT() {
  return getToken(MyGrammarParser::TOKEN_IDENT, 0);
}

tree::TerminalNode* MyGrammarParser::IdentContext::RULE_IDENT() {
  return getToken(MyGrammarParser::RULE_IDENT, 0);
}


size_t MyGrammarParser::IdentContext::getRuleIndex() const {
  return MyGrammarParser::RuleIdent;
}

void MyGrammarParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}

void MyGrammarParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}


antlrcpp::Any MyGrammarParser::IdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitIdent(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::IdentContext* MyGrammarParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 12, MyGrammarParser::RuleIdent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    _la = _input->LA(1);
    if (!(_la == MyGrammarParser::TOKEN_IDENT

    || _la == MyGrammarParser::RULE_IDENT)) {
    _errHandler->recoverInline(this);
    } else {
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rule_itemContext ------------------------------------------------------------------

MyGrammarParser::Rule_itemContext::Rule_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyGrammarParser::Rule_itemContext::getRuleIndex() const {
  return MyGrammarParser::RuleRule_item;
}

void MyGrammarParser::Rule_itemContext::copyFrom(Rule_itemContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Rule_dotContext ------------------------------------------------------------------

tree::TerminalNode* MyGrammarParser::Rule_dotContext::DOT() {
  return getToken(MyGrammarParser::DOT, 0);
}

MyGrammarParser::Rule_dotContext::Rule_dotContext(Rule_itemContext *ctx) { copyFrom(ctx); }

void MyGrammarParser::Rule_dotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_dot(this);
}
void MyGrammarParser::Rule_dotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_dot(this);
}

antlrcpp::Any MyGrammarParser::Rule_dotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_dot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rule_stringContext ------------------------------------------------------------------

tree::TerminalNode* MyGrammarParser::Rule_stringContext::STRING() {
  return getToken(MyGrammarParser::STRING, 0);
}

MyGrammarParser::Rule_stringContext::Rule_stringContext(Rule_itemContext *ctx) { copyFrom(ctx); }

void MyGrammarParser::Rule_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_string(this);
}
void MyGrammarParser::Rule_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_string(this);
}

antlrcpp::Any MyGrammarParser::Rule_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_string(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rule_setContext ------------------------------------------------------------------

tree::TerminalNode* MyGrammarParser::Rule_setContext::SET_TOK() {
  return getToken(MyGrammarParser::SET_TOK, 0);
}

MyGrammarParser::Rule_setContext::Rule_setContext(Rule_itemContext *ctx) { copyFrom(ctx); }

void MyGrammarParser::Rule_setContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_set(this);
}
void MyGrammarParser::Rule_setContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_set(this);
}

antlrcpp::Any MyGrammarParser::Rule_setContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_set(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rule_subContext ------------------------------------------------------------------

tree::TerminalNode* MyGrammarParser::Rule_subContext::LPAREN() {
  return getToken(MyGrammarParser::LPAREN, 0);
}

MyGrammarParser::Rule_defContext* MyGrammarParser::Rule_subContext::rule_def() {
  return getRuleContext<MyGrammarParser::Rule_defContext>(0);
}

tree::TerminalNode* MyGrammarParser::Rule_subContext::RPAREN() {
  return getToken(MyGrammarParser::RPAREN, 0);
}

MyGrammarParser::Rule_subContext::Rule_subContext(Rule_itemContext *ctx) { copyFrom(ctx); }

void MyGrammarParser::Rule_subContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_sub(this);
}
void MyGrammarParser::Rule_subContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_sub(this);
}

antlrcpp::Any MyGrammarParser::Rule_subContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_sub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rule_punctContext ------------------------------------------------------------------

tree::TerminalNode* MyGrammarParser::Rule_punctContext::TILDE() {
  return getToken(MyGrammarParser::TILDE, 0);
}

MyGrammarParser::Rule_itemContext* MyGrammarParser::Rule_punctContext::rule_item() {
  return getRuleContext<MyGrammarParser::Rule_itemContext>(0);
}

tree::TerminalNode* MyGrammarParser::Rule_punctContext::PLUS() {
  return getToken(MyGrammarParser::PLUS, 0);
}

tree::TerminalNode* MyGrammarParser::Rule_punctContext::STAR() {
  return getToken(MyGrammarParser::STAR, 0);
}

tree::TerminalNode* MyGrammarParser::Rule_punctContext::QMARK() {
  return getToken(MyGrammarParser::QMARK, 0);
}

MyGrammarParser::Rule_punctContext::Rule_punctContext(Rule_itemContext *ctx) { copyFrom(ctx); }

void MyGrammarParser::Rule_punctContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_punct(this);
}
void MyGrammarParser::Rule_punctContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_punct(this);
}

antlrcpp::Any MyGrammarParser::Rule_punctContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_punct(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rule_commentContext ------------------------------------------------------------------

MyGrammarParser::Comment_blockContext* MyGrammarParser::Rule_commentContext::comment_block() {
  return getRuleContext<MyGrammarParser::Comment_blockContext>(0);
}

MyGrammarParser::Rule_commentContext::Rule_commentContext(Rule_itemContext *ctx) { copyFrom(ctx); }

void MyGrammarParser::Rule_commentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_comment(this);
}
void MyGrammarParser::Rule_commentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_comment(this);
}

antlrcpp::Any MyGrammarParser::Rule_commentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_comment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rule_identContext ------------------------------------------------------------------

MyGrammarParser::IdentContext* MyGrammarParser::Rule_identContext::ident() {
  return getRuleContext<MyGrammarParser::IdentContext>(0);
}

MyGrammarParser::Rule_identContext::Rule_identContext(Rule_itemContext *ctx) { copyFrom(ctx); }

void MyGrammarParser::Rule_identContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRule_ident(this);
}
void MyGrammarParser::Rule_identContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRule_ident(this);
}

antlrcpp::Any MyGrammarParser::Rule_identContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRule_ident(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Rule_itemContext* MyGrammarParser::rule_item() {
   return rule_item(0);
}

MyGrammarParser::Rule_itemContext* MyGrammarParser::rule_item(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MyGrammarParser::Rule_itemContext *_localctx = _tracker.createInstance<Rule_itemContext>(_ctx, parentState);
  MyGrammarParser::Rule_itemContext *previousContext = _localctx;
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, MyGrammarParser::RuleRule_item, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MyGrammarParser::TOKEN_IDENT:
      case MyGrammarParser::RULE_IDENT: {
        _localctx = _tracker.createInstance<Rule_identContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(79);
        ident();
        break;
      }

      case MyGrammarParser::STRING: {
        _localctx = _tracker.createInstance<Rule_stringContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(80);
        match(MyGrammarParser::STRING);
        break;
      }

      case MyGrammarParser::DOT: {
        _localctx = _tracker.createInstance<Rule_dotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(81);
        match(MyGrammarParser::DOT);
        break;
      }

      case MyGrammarParser::SET_TOK: {
        _localctx = _tracker.createInstance<Rule_setContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(82);
        match(MyGrammarParser::SET_TOK);
        break;
      }

      case MyGrammarParser::LPAREN: {
        _localctx = _tracker.createInstance<Rule_subContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(83);
        match(MyGrammarParser::LPAREN);
        setState(84);
        rule_def();
        setState(85);
        match(MyGrammarParser::RPAREN);
        break;
      }

      case MyGrammarParser::TILDE: {
        _localctx = _tracker.createInstance<Rule_punctContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(87);
        match(MyGrammarParser::TILDE);
        setState(88);
        rule_item(2);
        break;
      }

      case MyGrammarParser::COMMENT_BLOCK: {
        _localctx = _tracker.createInstance<Rule_commentContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(89);
        comment_block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Rule_punctContext>(_tracker.createInstance<Rule_itemContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleRule_item);
        setState(92);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(93);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << MyGrammarParser::STAR)
          | (1ULL << MyGrammarParser::PLUS)
          | (1ULL << MyGrammarParser::QMARK))) != 0))) {
        _errHandler->recoverInline(this);
        } else {
          consume();
        } 
      }
      setState(98);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Alt_labelContext ------------------------------------------------------------------

MyGrammarParser::Alt_labelContext::Alt_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::Alt_labelContext::POUND() {
  return getToken(MyGrammarParser::POUND, 0);
}

MyGrammarParser::IdentContext* MyGrammarParser::Alt_labelContext::ident() {
  return getRuleContext<MyGrammarParser::IdentContext>(0);
}


size_t MyGrammarParser::Alt_labelContext::getRuleIndex() const {
  return MyGrammarParser::RuleAlt_label;
}

void MyGrammarParser::Alt_labelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlt_label(this);
}

void MyGrammarParser::Alt_labelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlt_label(this);
}


antlrcpp::Any MyGrammarParser::Alt_labelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitAlt_label(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Alt_labelContext* MyGrammarParser::alt_label() {
  Alt_labelContext *_localctx = _tracker.createInstance<Alt_labelContext>(_ctx, getState());
  enterRule(_localctx, 16, MyGrammarParser::RuleAlt_label);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(MyGrammarParser::POUND);
    setState(100);
    ident();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

MyGrammarParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::HeaderContext::GRAMMAR() {
  return getToken(MyGrammarParser::GRAMMAR, 0);
}

MyGrammarParser::IdentContext* MyGrammarParser::HeaderContext::ident() {
  return getRuleContext<MyGrammarParser::IdentContext>(0);
}

tree::TerminalNode* MyGrammarParser::HeaderContext::SEMI() {
  return getToken(MyGrammarParser::SEMI, 0);
}


size_t MyGrammarParser::HeaderContext::getRuleIndex() const {
  return MyGrammarParser::RuleHeader;
}

void MyGrammarParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void MyGrammarParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}


antlrcpp::Any MyGrammarParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::HeaderContext* MyGrammarParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 18, MyGrammarParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(MyGrammarParser::GRAMMAR);
    setState(103);
    ident();
    setState(104);
    match(MyGrammarParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RootContext ------------------------------------------------------------------

MyGrammarParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MyGrammarParser::HeaderContext* MyGrammarParser::RootContext::header() {
  return getRuleContext<MyGrammarParser::HeaderContext>(0);
}

std::vector<MyGrammarParser::CommentContext *> MyGrammarParser::RootContext::comment() {
  return getRuleContexts<MyGrammarParser::CommentContext>();
}

MyGrammarParser::CommentContext* MyGrammarParser::RootContext::comment(size_t i) {
  return getRuleContext<MyGrammarParser::CommentContext>(i);
}

std::vector<MyGrammarParser::Rule_bindingContext *> MyGrammarParser::RootContext::rule_binding() {
  return getRuleContexts<MyGrammarParser::Rule_bindingContext>();
}

MyGrammarParser::Rule_bindingContext* MyGrammarParser::RootContext::rule_binding(size_t i) {
  return getRuleContext<MyGrammarParser::Rule_bindingContext>(i);
}


size_t MyGrammarParser::RootContext::getRuleIndex() const {
  return MyGrammarParser::RuleRoot;
}

void MyGrammarParser::RootContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot(this);
}

void MyGrammarParser::RootContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot(this);
}


antlrcpp::Any MyGrammarParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::RootContext* MyGrammarParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 20, MyGrammarParser::RuleRoot);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    header();
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MyGrammarParser::COMMENT)
      | (1ULL << MyGrammarParser::FRAGMENT)
      | (1ULL << MyGrammarParser::TOKEN_IDENT)
      | (1ULL << MyGrammarParser::RULE_IDENT))) != 0)) {
      setState(109);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MyGrammarParser::COMMENT: {
          setState(107);
          comment();
          break;
        }

        case MyGrammarParser::FRAGMENT:
        case MyGrammarParser::TOKEN_IDENT:
        case MyGrammarParser::RULE_IDENT: {
          setState(108);
          rule_binding();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(113);
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

//----------------- Empty_ruleContext ------------------------------------------------------------------

MyGrammarParser::Empty_ruleContext::Empty_ruleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MyGrammarParser::Empty_ruleContext::getRuleIndex() const {
  return MyGrammarParser::RuleEmpty_rule;
}

void MyGrammarParser::Empty_ruleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmpty_rule(this);
}

void MyGrammarParser::Empty_ruleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmpty_rule(this);
}


antlrcpp::Any MyGrammarParser::Empty_ruleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitEmpty_rule(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Empty_ruleContext* MyGrammarParser::empty_rule() {
  Empty_ruleContext *_localctx = _tracker.createInstance<Empty_ruleContext>(_ctx, getState());
  enterRule(_localctx, 22, MyGrammarParser::RuleEmpty_rule);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

MyGrammarParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::CommentContext::COMMENT() {
  return getToken(MyGrammarParser::COMMENT, 0);
}


size_t MyGrammarParser::CommentContext::getRuleIndex() const {
  return MyGrammarParser::RuleComment;
}

void MyGrammarParser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void MyGrammarParser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}


antlrcpp::Any MyGrammarParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitComment(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::CommentContext* MyGrammarParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 24, MyGrammarParser::RuleComment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(MyGrammarParser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comment_blockContext ------------------------------------------------------------------

MyGrammarParser::Comment_blockContext::Comment_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MyGrammarParser::Comment_blockContext::COMMENT_BLOCK() {
  return getToken(MyGrammarParser::COMMENT_BLOCK, 0);
}


size_t MyGrammarParser::Comment_blockContext::getRuleIndex() const {
  return MyGrammarParser::RuleComment_block;
}

void MyGrammarParser::Comment_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment_block(this);
}

void MyGrammarParser::Comment_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment_block(this);
}


antlrcpp::Any MyGrammarParser::Comment_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (dynamic_cast<MyGrammarVisitor*>(visitor) != nullptr)
    return ((MyGrammarVisitor *)visitor)->visitComment_block(this);
  else
    return visitor->visitChildren(this);
}

MyGrammarParser::Comment_blockContext* MyGrammarParser::comment_block() {
  Comment_blockContext *_localctx = _tracker.createInstance<Comment_blockContext>(_ctx, getState());
  enterRule(_localctx, 26, MyGrammarParser::RuleComment_block);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(MyGrammarParser::COMMENT_BLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MyGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return rule_itemSempred(dynamic_cast<Rule_itemContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MyGrammarParser::rule_itemSempred(Rule_itemContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
thread_local std::vector<dfa::DFA> MyGrammarParser::_decisionToDFA;
thread_local atn::PredictionContextCache MyGrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
thread_local atn::ATN MyGrammarParser::_atn;
thread_local std::vector<uint16_t> MyGrammarParser::_serializedATN;

thread_local std::vector<std::string> MyGrammarParser::_ruleNames = {
  "rule_binding", "redirect", "rule_def", "rule_alt", "empty_alt", "nonempty_alt", 
  "ident", "rule_item", "alt_label", "header", "root", "empty_rule", "comment", 
  "comment_block"
};

thread_local std::vector<std::string> MyGrammarParser::_literalNames = {
  "", "", "", "", "'fragment'", "'grammar'", "'channel'", "'skip'", "'\\-'", 
  "'\\''", "'->'", "'~'", "':'", "';'", "'('", "')'", "'['", "']'", "'{'", 
  "'}'", "'*'", "'+'", "'?'", "'|'", "'-'", "'#'", "'.'"
};

thread_local std::vector<std::string> MyGrammarParser::_symbolicNames = {
  "", "COMMENT", "COMMENT_BLOCK", "WHITESPACE", "FRAGMENT", "GRAMMAR", "CHANNEL", 
  "SKIP_TOK", "ESC_HYPHEN", "ESC_QUOTE", "ARROW", "TILDE", "COLON", "SEMI", 
  "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "STAR", "PLUS", 
  "QMARK", "PIPE", "HYPHEN", "POUND", "DOT", "TOKEN_IDENT", "RULE_IDENT", 
  "STRING", "SET_TOK"
};

thread_local dfa::Vocabulary MyGrammarParser::_vocabulary(_literalNames, _symbolicNames);

thread_local std::vector<std::string> MyGrammarParser::_tokenNames;

MyGrammarParser::Initializer::Initializer() {
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
    0x3, 0x20, 0x7d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x5, 0x2, 0x20, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x5, 0x2, 0x25, 0xa, 0x2, 0x3, 0x2, 0x5, 0x2, 0x28, 0xa, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x32, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x37, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x3a, 0xb, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x3f, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x45, 0xa, 0x6, 0x3, 0x7, 0x6, 0x7, 0x48, 0xa, 0x7, 
    0xd, 0x7, 0xe, 0x7, 0x49, 0x3, 0x7, 0x5, 0x7, 0x4d, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x5d, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x61, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0x64, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x70, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x73, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x77, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x2, 0x3, 0x10, 0x10, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x2, 0x4, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 
    0x16, 0x18, 0x81, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x33, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x42, 0x3, 0x2, 0x2, 0x2, 0xc, 0x47, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x68, 0x3, 0x2, 0x2, 0x2, 0x16, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x76, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x7, 0x6, 0x2, 0x2, 
    0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x5, 0xe, 0x8, 0x2, 0x22, 0x24, 
    0x7, 0xe, 0x2, 0x2, 0x23, 0x25, 0x5, 0x6, 0x4, 0x2, 0x24, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x28, 0x5, 0x4, 0x3, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x2a, 0x7, 0xf, 0x2, 0x2, 0x2a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x31, 0x7, 0xc, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x8, 0x2, 0x2, 0x2d, 0x2e, 
    0x7, 0x10, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x1d, 0x2, 0x2, 0x2f, 0x32, 0x7, 
    0x11, 0x2, 0x2, 0x30, 0x32, 0x7, 0x9, 0x2, 0x2, 0x31, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x38, 0x5, 0x8, 0x5, 0x2, 0x34, 0x35, 0x7, 0x19, 0x2, 0x2, 
    0x35, 0x37, 0x5, 0x8, 0x5, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xa, 0x6, 0x2, 0x3c, 0x3d, 0x7, 0x19, 
    0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x41, 0x5, 0xc, 0x7, 0x2, 0x41, 0x9, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x44, 0x5, 0x18, 0xd, 0x2, 0x43, 0x45, 0x5, 0x12, 0xa, 0x2, 0x44, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x48, 0x5, 0x10, 0x9, 0x2, 0x47, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x4d, 0x5, 0x12, 0xa, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 
    0x9, 0x2, 0x2, 0x2, 0x4f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x8, 
    0x9, 0x1, 0x2, 0x51, 0x5d, 0x5, 0xe, 0x8, 0x2, 0x52, 0x5d, 0x7, 0x1f, 
    0x2, 0x2, 0x53, 0x5d, 0x7, 0x1c, 0x2, 0x2, 0x54, 0x5d, 0x7, 0x20, 0x2, 
    0x2, 0x55, 0x56, 0x7, 0x10, 0x2, 0x2, 0x56, 0x57, 0x5, 0x6, 0x4, 0x2, 
    0x57, 0x58, 0x7, 0x11, 0x2, 0x2, 0x58, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0x5a, 0x7, 0xd, 0x2, 0x2, 0x5a, 0x5d, 0x5, 0x10, 0x9, 0x4, 0x5b, 0x5d, 
    0x5, 0x1c, 0xf, 0x2, 0x5c, 0x50, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x53, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x5f, 0xc, 0x5, 0x2, 0x2, 0x5f, 0x61, 0x9, 0x3, 0x2, 0x2, 0x60, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x1b, 
    0x2, 0x2, 0x66, 0x67, 0x5, 0xe, 0x8, 0x2, 0x67, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x69, 0x7, 0x7, 0x2, 0x2, 0x69, 0x6a, 0x5, 0xe, 0x8, 0x2, 
    0x6a, 0x6b, 0x7, 0xf, 0x2, 0x2, 0x6b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x71, 0x5, 0x14, 0xb, 0x2, 0x6d, 0x70, 0x5, 0x1a, 0xe, 0x2, 0x6e, 0x70, 
    0x5, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x19, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 
    0x7, 0x3, 0x2, 0x2, 0x79, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 
    0x4, 0x2, 0x2, 0x7b, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1f, 0x24, 0x27, 
    0x31, 0x38, 0x3e, 0x44, 0x49, 0x4c, 0x5c, 0x62, 0x6f, 0x71, 0x76, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

thread_local MyGrammarParser::Initializer MyGrammarParser::_init;
