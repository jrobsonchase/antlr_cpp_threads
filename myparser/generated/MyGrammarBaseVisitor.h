
// Generated from /data/home/jchase/src/github.com/Pursuit92/antlr_rust_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarVisitor.h"


namespace myparser {

/**
 * This class provides an empty implementation of MyGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class MyGrammarBaseVisitor : public MyGrammarVisitor {
public:

  virtual antlrcpp::Any visitRule_binding(MyGrammarParser::Rule_bindingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRedirect(MyGrammarParser::RedirectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_def(MyGrammarParser::Rule_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_alt(MyGrammarParser::Rule_altContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_alt(MyGrammarParser::Empty_altContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNonempty_alt(MyGrammarParser::Nonempty_altContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent(MyGrammarParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_dot(MyGrammarParser::Rule_dotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_string(MyGrammarParser::Rule_stringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_set(MyGrammarParser::Rule_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_sub(MyGrammarParser::Rule_subContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_punct(MyGrammarParser::Rule_punctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_comment(MyGrammarParser::Rule_commentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRule_ident(MyGrammarParser::Rule_identContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlt_label(MyGrammarParser::Alt_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(MyGrammarParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoot(MyGrammarParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmpty_rule(MyGrammarParser::Empty_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(MyGrammarParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment_block(MyGrammarParser::Comment_blockContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace myparser
