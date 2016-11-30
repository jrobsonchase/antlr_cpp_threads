
// Generated from /home/jchase/src/github.com/Pursuit92/antlr_rust_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarParser.h"


namespace myparser {

/**
 * This interface defines an abstract listener for a parse tree produced by MyGrammarParser.
 */
class MyGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterRule_binding(MyGrammarParser::Rule_bindingContext *ctx) = 0;
  virtual void exitRule_binding(MyGrammarParser::Rule_bindingContext *ctx) = 0;

  virtual void enterRedirect(MyGrammarParser::RedirectContext *ctx) = 0;
  virtual void exitRedirect(MyGrammarParser::RedirectContext *ctx) = 0;

  virtual void enterRule_def(MyGrammarParser::Rule_defContext *ctx) = 0;
  virtual void exitRule_def(MyGrammarParser::Rule_defContext *ctx) = 0;

  virtual void enterRule_alt(MyGrammarParser::Rule_altContext *ctx) = 0;
  virtual void exitRule_alt(MyGrammarParser::Rule_altContext *ctx) = 0;

  virtual void enterEmpty_alt(MyGrammarParser::Empty_altContext *ctx) = 0;
  virtual void exitEmpty_alt(MyGrammarParser::Empty_altContext *ctx) = 0;

  virtual void enterNonempty_alt(MyGrammarParser::Nonempty_altContext *ctx) = 0;
  virtual void exitNonempty_alt(MyGrammarParser::Nonempty_altContext *ctx) = 0;

  virtual void enterIdent(MyGrammarParser::IdentContext *ctx) = 0;
  virtual void exitIdent(MyGrammarParser::IdentContext *ctx) = 0;

  virtual void enterRule_dot(MyGrammarParser::Rule_dotContext *ctx) = 0;
  virtual void exitRule_dot(MyGrammarParser::Rule_dotContext *ctx) = 0;

  virtual void enterRule_string(MyGrammarParser::Rule_stringContext *ctx) = 0;
  virtual void exitRule_string(MyGrammarParser::Rule_stringContext *ctx) = 0;

  virtual void enterRule_set(MyGrammarParser::Rule_setContext *ctx) = 0;
  virtual void exitRule_set(MyGrammarParser::Rule_setContext *ctx) = 0;

  virtual void enterRule_sub(MyGrammarParser::Rule_subContext *ctx) = 0;
  virtual void exitRule_sub(MyGrammarParser::Rule_subContext *ctx) = 0;

  virtual void enterRule_punct(MyGrammarParser::Rule_punctContext *ctx) = 0;
  virtual void exitRule_punct(MyGrammarParser::Rule_punctContext *ctx) = 0;

  virtual void enterRule_comment(MyGrammarParser::Rule_commentContext *ctx) = 0;
  virtual void exitRule_comment(MyGrammarParser::Rule_commentContext *ctx) = 0;

  virtual void enterRule_ident(MyGrammarParser::Rule_identContext *ctx) = 0;
  virtual void exitRule_ident(MyGrammarParser::Rule_identContext *ctx) = 0;

  virtual void enterAlt_label(MyGrammarParser::Alt_labelContext *ctx) = 0;
  virtual void exitAlt_label(MyGrammarParser::Alt_labelContext *ctx) = 0;

  virtual void enterHeader(MyGrammarParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(MyGrammarParser::HeaderContext *ctx) = 0;

  virtual void enterRoot(MyGrammarParser::RootContext *ctx) = 0;
  virtual void exitRoot(MyGrammarParser::RootContext *ctx) = 0;

  virtual void enterEmpty_rule(MyGrammarParser::Empty_ruleContext *ctx) = 0;
  virtual void exitEmpty_rule(MyGrammarParser::Empty_ruleContext *ctx) = 0;

  virtual void enterComment(MyGrammarParser::CommentContext *ctx) = 0;
  virtual void exitComment(MyGrammarParser::CommentContext *ctx) = 0;

  virtual void enterComment_block(MyGrammarParser::Comment_blockContext *ctx) = 0;
  virtual void exitComment_block(MyGrammarParser::Comment_blockContext *ctx) = 0;


};

}  // namespace myparser
