
// Generated from Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  ExprLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, COMMENT = 2, COLON = 3, QUOTEMARK = 4, QMARK = 5, EXMARK = 6, 
    NEWLINE = 7, WS = 8, AND = 9, ARRAY = 10, ASM = 11, BEGIN = 12, BREAK = 13, 
    CASE = 14, CONST = 15, CONSTRUCTOR = 16, CONTINUE = 17, DESTRUCTOR = 18, 
    DIV = 19, DO = 20, DOWNTO = 21, ELSE = 22, END = 23, FALSE = 24, FILE = 25, 
    FOR = 26, FUNCTION = 27, GOTO = 28, IF = 29, IMPLEMENTATION = 30, IN = 31, 
    INLINE = 32, INTERFACE = 33, LABEL = 34, MOD = 35, NIL = 36, NOT = 37, 
    OBJECT = 38, OF = 39, ON = 40, OPERATOR = 41, OR = 42, PACKED = 43, 
    PROCEDURE = 44, PROGRAM = 45, RECORD = 46, REPEAT = 47, SET = 48, SHL = 49, 
    SHR = 50, QUOTE = 51, CHARACTER = 52, STRING = 53, THEN = 54, TO = 55, 
    TRUE = 56, TYPE = 57, UNIT = 58, UNTIL = 59, USES = 60, VAR = 61, WHILE = 62, 
    WRITELN = 63, WITH = 64, XOR = 65, LDX = 66, LDCH = 67, INTEGER = 68, 
    RANGE = 69, REAL = 70, IDENTIFIER = 71, PLUSOP = 72, MINUSOP = 73, DIVOP = 74, 
    MULTOP = 75, ASSIGN = 76, EQUAL = 77, NE = 78, LTEQ = 79, GTEQ = 80, 
    LT = 81, GT = 82, PLUSEQUAL = 83, MINUSEQUAL = 84, MULTEQUAL = 85, DIVEQUAL = 86, 
    CARAT = 87, SEMICOLON = 88, COMMA = 89, LPAREN = 90, RPAREN = 91, LBRACKET = 92, 
    RBRACKET = 93, LBRACE = 94, RBRACE = 95, LCOMMENT = 96, RCOMMENT = 97
  };

  explicit ExprLexer(antlr4::CharStream *input);

  ~ExprLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};
