grammar MyGrammar;

COMMENT: '//' (~'\n')* '\n';
COMMENT_BLOCK: '/*' .*? '*/';
WHITESPACE: [ \t\n\r] -> channel(HIDDEN);

fragment F_LBRACK: '[';
fragment F_RBRACK: ']';
fragment F_QUOTE: '\'';
fragment F_BSLASH: '\\';
fragment F_ESC_QUOTE: F_BSLASH F_QUOTE;
fragment LOWER: [a-z];
fragment UPPER: [A-Z];
fragment UNDERSCORE: '_';
fragment LETTER: UPPER | LOWER;
fragment DIGIT: [0-9];
fragment SPECIAL: [ `~!@#$%^&*\-_=+<>,.()[\]{};:'"\|\\];
fragment CHAR: LETTER | DIGIT | SPECIAL;

// literals
FRAGMENT: 'fragment';
GRAMMAR: 'grammar';
CHANNEL: 'channel';
SKIP_TOK: 'skip';
ESC_HYPHEN: '\\-';
ESC_QUOTE: '\\\'';
ARROW: '->';

// Single character literals
TILDE: '~';
COLON: ':';
SEMI: ';';
LPAREN: '(';
RPAREN: ')';
LBRACK: '[';
RBRACK: ']';
LBRACE: '{';
RBRACE: '}';
STAR: '*';
PLUS: '+';
QMARK: '?';
PIPE: '|';
HYPHEN: '-';
POUND: '#';
DOT: '.';

// variable token defs
TOKEN_IDENT: UPPER (UPPER | DIGIT | UNDERSCORE)*;
RULE_IDENT: LETTER (LETTER | DIGIT | UNDERSCORE)*;


STRING: F_QUOTE ((~('\'' | '\\')) | F_BSLASH . )* F_QUOTE;
SET_TOK: F_LBRACK CHAR+ F_RBRACK;

rule_binding: FRAGMENT? ident COLON rule_def? redirect? SEMI;

redirect: ARROW (CHANNEL LPAREN TOKEN_IDENT RPAREN | SKIP_TOK);

rule_def: rule_alt (PIPE rule_alt)*;

rule_alt: (empty_alt PIPE)? nonempty_alt;

empty_alt: empty_rule alt_label?;
nonempty_alt: rule_item+ alt_label?;

ident: TOKEN_IDENT | RULE_IDENT;

rule_item:
    ident                           #rule_ident
  | STRING                          #rule_string
  | DOT                             #rule_dot
  | SET_TOK                         #rule_set
  | LPAREN rule_def RPAREN          #rule_sub
  | rule_item (PLUS | STAR | QMARK) #rule_punct
  | TILDE rule_item                 #rule_punct
  | comment_block                   #rule_comment
  ;

alt_label: POUND ident;

header: GRAMMAR ident SEMI;

root: header (comment | rule_binding)*;

empty_rule: | /* empty */ ;

// give comments actual tree nodes
comment: COMMENT;
comment_block: COMMENT_BLOCK;
