
// Generated from /data/home/jchase/src/github.com/Pursuit92/antlr_rust_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarListener.h"


namespace myparser {

/**
 * This class provides an empty implementation of MyGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class MyGrammarBaseListener : public MyGrammarListener {
public:

  virtual void enterRule_binding(MyGrammarParser::Rule_bindingContext * /*ctx*/) override { }
  virtual void exitRule_binding(MyGrammarParser::Rule_bindingContext * /*ctx*/) override { }

  virtual void enterRedirect(MyGrammarParser::RedirectContext * /*ctx*/) override { }
  virtual void exitRedirect(MyGrammarParser::RedirectContext * /*ctx*/) override { }

  virtual void enterRule_def(MyGrammarParser::Rule_defContext * /*ctx*/) override { }
  virtual void exitRule_def(MyGrammarParser::Rule_defContext * /*ctx*/) override { }

  virtual void enterRule_alt(MyGrammarParser::Rule_altContext * /*ctx*/) override { }
  virtual void exitRule_alt(MyGrammarParser::Rule_altContext * /*ctx*/) override { }

  virtual void enterEmpty_alt(MyGrammarParser::Empty_altContext * /*ctx*/) override { }
  virtual void exitEmpty_alt(MyGrammarParser::Empty_altContext * /*ctx*/) override { }

  virtual void enterNonempty_alt(MyGrammarParser::Nonempty_altContext * /*ctx*/) override { }
  virtual void exitNonempty_alt(MyGrammarParser::Nonempty_altContext * /*ctx*/) override { }

  virtual void enterIdent(MyGrammarParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(MyGrammarParser::IdentContext * /*ctx*/) override { }

  virtual void enterRule_dot(MyGrammarParser::Rule_dotContext * /*ctx*/) override { }
  virtual void exitRule_dot(MyGrammarParser::Rule_dotContext * /*ctx*/) override { }

  virtual void enterRule_string(MyGrammarParser::Rule_stringContext * /*ctx*/) override { }
  virtual void exitRule_string(MyGrammarParser::Rule_stringContext * /*ctx*/) override { }

  virtual void enterRule_set(MyGrammarParser::Rule_setContext * /*ctx*/) override { }
  virtual void exitRule_set(MyGrammarParser::Rule_setContext * /*ctx*/) override { }

  virtual void enterRule_sub(MyGrammarParser::Rule_subContext * /*ctx*/) override { }
  virtual void exitRule_sub(MyGrammarParser::Rule_subContext * /*ctx*/) override { }

  virtual void enterRule_punct(MyGrammarParser::Rule_punctContext * /*ctx*/) override { }
  virtual void exitRule_punct(MyGrammarParser::Rule_punctContext * /*ctx*/) override { }

  virtual void enterRule_comment(MyGrammarParser::Rule_commentContext * /*ctx*/) override { }
  virtual void exitRule_comment(MyGrammarParser::Rule_commentContext * /*ctx*/) override { }

  virtual void enterRule_ident(MyGrammarParser::Rule_identContext * /*ctx*/) override { }
  virtual void exitRule_ident(MyGrammarParser::Rule_identContext * /*ctx*/) override { }

  virtual void enterAlt_label(MyGrammarParser::Alt_labelContext * /*ctx*/) override { }
  virtual void exitAlt_label(MyGrammarParser::Alt_labelContext * /*ctx*/) override { }

  virtual void enterHeader(MyGrammarParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(MyGrammarParser::HeaderContext * /*ctx*/) override { }

  virtual void enterRoot(MyGrammarParser::RootContext * /*ctx*/) override { }
  virtual void exitRoot(MyGrammarParser::RootContext * /*ctx*/) override { }

  virtual void enterEmpty_rule(MyGrammarParser::Empty_ruleContext * /*ctx*/) override { }
  virtual void exitEmpty_rule(MyGrammarParser::Empty_ruleContext * /*ctx*/) override { }

  virtual void enterComment(MyGrammarParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(MyGrammarParser::CommentContext * /*ctx*/) override { }

  virtual void enterComment_block(MyGrammarParser::Comment_blockContext * /*ctx*/) override { }
  virtual void exitComment_block(MyGrammarParser::Comment_blockContext * /*ctx*/) override { }


  virtual void enterEveryRule(ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(tree::ErrorNode * /*node*/) override { }

};

}  // namespace myparser
