
// Generated from /data/home/jchase/src/github.com/Pursuit92/antlr_rust_threads/myparser/grammar/MyGrammar.g4 by ANTLR 4.5.3

#pragma once


#include "antlr4-runtime.h"
#include "MyGrammarParser.h"


namespace myparser {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by MyGrammarParser.
 */
class MyGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MyGrammarParser.
   */
    virtual antlrcpp::Any visitRule_binding(MyGrammarParser::Rule_bindingContext *context) = 0;

    virtual antlrcpp::Any visitRedirect(MyGrammarParser::RedirectContext *context) = 0;

    virtual antlrcpp::Any visitRule_def(MyGrammarParser::Rule_defContext *context) = 0;

    virtual antlrcpp::Any visitRule_alt(MyGrammarParser::Rule_altContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_alt(MyGrammarParser::Empty_altContext *context) = 0;

    virtual antlrcpp::Any visitNonempty_alt(MyGrammarParser::Nonempty_altContext *context) = 0;

    virtual antlrcpp::Any visitIdent(MyGrammarParser::IdentContext *context) = 0;

    virtual antlrcpp::Any visitRule_dot(MyGrammarParser::Rule_dotContext *context) = 0;

    virtual antlrcpp::Any visitRule_string(MyGrammarParser::Rule_stringContext *context) = 0;

    virtual antlrcpp::Any visitRule_set(MyGrammarParser::Rule_setContext *context) = 0;

    virtual antlrcpp::Any visitRule_sub(MyGrammarParser::Rule_subContext *context) = 0;

    virtual antlrcpp::Any visitRule_punct(MyGrammarParser::Rule_punctContext *context) = 0;

    virtual antlrcpp::Any visitRule_comment(MyGrammarParser::Rule_commentContext *context) = 0;

    virtual antlrcpp::Any visitRule_ident(MyGrammarParser::Rule_identContext *context) = 0;

    virtual antlrcpp::Any visitAlt_label(MyGrammarParser::Alt_labelContext *context) = 0;

    virtual antlrcpp::Any visitHeader(MyGrammarParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitRoot(MyGrammarParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitEmpty_rule(MyGrammarParser::Empty_ruleContext *context) = 0;

    virtual antlrcpp::Any visitComment(MyGrammarParser::CommentContext *context) = 0;

    virtual antlrcpp::Any visitComment_block(MyGrammarParser::Comment_blockContext *context) = 0;


};

}  // namespace myparser
