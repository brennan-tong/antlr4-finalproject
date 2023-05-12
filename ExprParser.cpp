
// Generated from Expr.g4 by ANTLR 4.12.0


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
  assert(exprParserStaticData == nullptr);
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "prog", "comment", "programDeclaration", "declaration", "constDeclaration", 
      "constAssignmentList", "constExpression", "varDeclaration", "varDeclarationList", 
      "varIdentifierList", "typeDefDeclaration", "typeDefList", "typeDefElement", 
      "typeIdentifier", "typeSpecification", "simpleType", "enumeratedType", 
      "subrange", "functionDeclaration", "paramDeclaration", "paramIdentifierList", 
      "statement", "multiDimensionalArrayIndexing", "assignment", "writeln", 
      "writelnArg", "writelnExpression", "forStatement", "compoundStatement", 
      "ifStatement", "statement_or_comment", "statement_without_semicolon", 
      "assignment_without_semicolon", "ldxStatement", "ldchStatement", "variable", 
      "functionCall", "arrayIndexing", "expression", "simpleExpression", 
      "term", "factor", "number", "characterConstant", "stringConstant"
    },
    std::vector<std::string>{
      "", "'.'", "", "':'", "'\"'", "'\\u003F'", "'!'", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "'''", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "'..'", "", "", "'+'", "'-'", "'/'", 
      "'*'", "':='", "'='", "'<>'", "'<='", "'>='", "'<'", "'>'", "'+='", 
      "'-='", "'*='", "'/='", "'^'", "';'", "','", "'('", "')'", "'['", 
      "']'", "'{'", "'}'", "'(*'", "'*)'"
    },
    std::vector<std::string>{
      "", "", "COMMENT", "COLON", "QUOTEMARK", "QMARK", "EXMARK", "NEWLINE", 
      "WS", "AND", "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
      "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
      "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
      "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
      "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", 
      "SHL", "SHR", "QUOTE", "CHARACTER", "STRING", "THEN", "TO", "TRUE", 
      "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", "WRITELN", "WITH", 
      "XOR", "LDX", "LDCH", "INTEGER", "RANGE", "REAL", "IDENTIFIER", "PLUSOP", 
      "MINUSOP", "DIVOP", "MULTOP", "ASSIGN", "EQUAL", "NE", "LTEQ", "GTEQ", 
      "LT", "GT", "PLUSEQUAL", "MINUSEQUAL", "MULTEQUAL", "DIVEQUAL", "CARAT", 
      "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", 
      "LBRACE", "RBRACE", "LCOMMENT", "RCOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,97,513,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,1,0,1,0,1,0,5,0,94,8,0,10,0,12,0,97,9,0,1,0,1,
  	0,1,0,5,0,102,8,0,10,0,12,0,105,9,0,1,0,1,0,3,0,109,8,0,1,0,1,0,3,0,113,
  	8,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,125,8,2,10,2,12,2,128,
  	9,2,3,2,130,8,2,1,2,3,2,133,8,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,141,8,3,1,
  	4,1,4,1,4,1,5,3,5,147,8,5,1,5,1,5,1,5,1,5,3,5,153,8,5,1,5,3,5,156,8,5,
  	1,5,1,5,3,5,160,8,5,1,5,1,5,1,5,1,5,3,5,166,8,5,5,5,168,8,5,10,5,12,5,
  	171,9,5,1,5,3,5,174,8,5,1,5,1,5,3,5,178,8,5,1,6,1,6,1,6,3,6,183,8,6,1,
  	7,1,7,4,7,187,8,7,11,7,12,7,188,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,5,9,199,
  	8,9,10,9,12,9,202,9,9,1,10,1,10,1,10,1,11,4,11,208,8,11,11,11,12,11,209,
  	1,12,1,12,1,12,1,12,3,12,216,8,12,1,12,1,12,1,13,1,13,1,14,1,14,1,14,
  	1,14,1,14,3,14,227,8,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,263,8,14,
  	1,15,1,15,1,15,3,15,268,8,15,1,16,1,16,1,16,1,16,5,16,274,8,16,10,16,
  	12,16,277,9,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,
  	1,18,5,18,291,8,18,10,18,12,18,294,9,18,3,18,296,8,18,1,18,1,18,1,18,
  	1,18,1,18,5,18,303,8,18,10,18,12,18,306,9,18,1,18,1,18,5,18,310,8,18,
  	10,18,12,18,313,9,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	5,20,325,8,20,10,20,12,20,328,9,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,3,21,338,8,21,1,22,1,22,1,22,1,22,1,22,4,22,345,8,22,11,22,12,22,
  	346,1,23,1,23,1,23,3,23,352,8,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,
  	24,1,24,5,24,363,8,24,10,24,12,24,366,9,24,1,24,1,24,1,24,1,25,1,25,1,
  	25,3,25,374,8,25,1,26,1,26,1,26,3,26,379,8,26,1,27,1,27,1,27,1,27,1,27,
  	1,27,1,27,1,27,1,27,1,28,1,28,1,28,5,28,393,8,28,10,28,12,28,396,9,28,
  	1,28,1,28,3,28,400,8,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,3,29,
  	410,8,29,1,30,1,30,1,30,3,30,415,8,30,1,31,1,31,1,31,1,31,1,31,3,31,422,
  	8,31,1,32,1,32,3,32,426,8,32,1,32,1,32,1,32,1,33,1,33,1,33,1,33,1,34,
  	1,34,1,34,1,34,1,35,1,35,1,36,1,36,1,36,1,36,1,36,5,36,446,8,36,10,36,
  	12,36,449,9,36,3,36,451,8,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,5,37,
  	460,8,37,10,37,12,37,463,9,37,1,37,1,37,1,38,1,38,1,38,5,38,470,8,38,
  	10,38,12,38,473,9,38,1,39,1,39,1,39,5,39,478,8,39,10,39,12,39,481,9,39,
  	1,40,1,40,1,40,5,40,486,8,40,10,40,12,40,489,9,40,1,41,1,41,1,41,1,41,
  	1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,1,41,3,41,505,8,41,1,42,
  	1,42,1,43,1,43,1,44,1,44,1,44,0,0,45,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,
  	72,74,76,78,80,82,84,86,88,0,4,1,0,77,82,1,0,72,73,3,0,19,19,35,35,74,
  	75,2,0,68,68,70,70,545,0,95,1,0,0,0,2,116,1,0,0,0,4,118,1,0,0,0,6,140,
  	1,0,0,0,8,142,1,0,0,0,10,177,1,0,0,0,12,179,1,0,0,0,14,184,1,0,0,0,16,
  	190,1,0,0,0,18,195,1,0,0,0,20,203,1,0,0,0,22,207,1,0,0,0,24,211,1,0,0,
  	0,26,219,1,0,0,0,28,262,1,0,0,0,30,267,1,0,0,0,32,269,1,0,0,0,34,280,
  	1,0,0,0,36,284,1,0,0,0,38,317,1,0,0,0,40,321,1,0,0,0,42,337,1,0,0,0,44,
  	339,1,0,0,0,46,351,1,0,0,0,48,357,1,0,0,0,50,370,1,0,0,0,52,378,1,0,0,
  	0,54,380,1,0,0,0,56,389,1,0,0,0,58,403,1,0,0,0,60,414,1,0,0,0,62,421,
  	1,0,0,0,64,425,1,0,0,0,66,430,1,0,0,0,68,434,1,0,0,0,70,438,1,0,0,0,72,
  	440,1,0,0,0,74,454,1,0,0,0,76,466,1,0,0,0,78,474,1,0,0,0,80,482,1,0,0,
  	0,82,504,1,0,0,0,84,506,1,0,0,0,86,508,1,0,0,0,88,510,1,0,0,0,90,94,3,
  	6,3,0,91,94,3,4,2,0,92,94,3,2,1,0,93,90,1,0,0,0,93,91,1,0,0,0,93,92,1,
  	0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,98,1,0,0,0,97,95,1,
  	0,0,0,98,103,5,12,0,0,99,102,3,42,21,0,100,102,3,2,1,0,101,99,1,0,0,0,
  	101,100,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,106,
  	1,0,0,0,105,103,1,0,0,0,106,108,5,23,0,0,107,109,3,2,1,0,108,107,1,0,
  	0,0,108,109,1,0,0,0,109,110,1,0,0,0,110,112,5,1,0,0,111,113,3,2,1,0,112,
  	111,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,114,115,5,0,0,1,115,1,1,0,
  	0,0,116,117,5,2,0,0,117,3,1,0,0,0,118,119,5,45,0,0,119,132,5,71,0,0,120,
  	129,5,90,0,0,121,126,5,71,0,0,122,123,5,89,0,0,123,125,5,71,0,0,124,122,
  	1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,130,1,0,0,
  	0,128,126,1,0,0,0,129,121,1,0,0,0,129,130,1,0,0,0,130,131,1,0,0,0,131,
  	133,5,91,0,0,132,120,1,0,0,0,132,133,1,0,0,0,133,134,1,0,0,0,134,135,
  	5,88,0,0,135,5,1,0,0,0,136,141,3,8,4,0,137,141,3,14,7,0,138,141,3,20,
  	10,0,139,141,3,36,18,0,140,136,1,0,0,0,140,137,1,0,0,0,140,138,1,0,0,
  	0,140,139,1,0,0,0,141,7,1,0,0,0,142,143,5,15,0,0,143,144,3,10,5,0,144,
  	9,1,0,0,0,145,147,3,2,1,0,146,145,1,0,0,0,146,147,1,0,0,0,147,148,1,0,
  	0,0,148,149,5,71,0,0,149,152,5,77,0,0,150,153,3,12,6,0,151,153,3,88,44,
  	0,152,150,1,0,0,0,152,151,1,0,0,0,153,169,1,0,0,0,154,156,3,2,1,0,155,
  	154,1,0,0,0,155,156,1,0,0,0,156,157,1,0,0,0,157,159,5,88,0,0,158,160,
  	3,2,1,0,159,158,1,0,0,0,159,160,1,0,0,0,160,161,1,0,0,0,161,162,5,71,
  	0,0,162,165,5,77,0,0,163,166,3,12,6,0,164,166,3,88,44,0,165,163,1,0,0,
  	0,165,164,1,0,0,0,166,168,1,0,0,0,167,155,1,0,0,0,168,171,1,0,0,0,169,
  	167,1,0,0,0,169,170,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,172,174,3,
  	2,1,0,173,172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,176,5,88,0,
  	0,176,178,1,0,0,0,177,146,1,0,0,0,177,178,1,0,0,0,178,11,1,0,0,0,179,
  	182,3,78,39,0,180,181,7,0,0,0,181,183,3,78,39,0,182,180,1,0,0,0,182,183,
  	1,0,0,0,183,13,1,0,0,0,184,186,5,61,0,0,185,187,3,16,8,0,186,185,1,0,
  	0,0,187,188,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,15,1,0,0,0,190,
  	191,3,18,9,0,191,192,5,3,0,0,192,193,3,26,13,0,193,194,5,88,0,0,194,17,
  	1,0,0,0,195,200,5,71,0,0,196,197,5,89,0,0,197,199,5,71,0,0,198,196,1,
  	0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,19,1,0,0,0,
  	202,200,1,0,0,0,203,204,5,57,0,0,204,205,3,22,11,0,205,21,1,0,0,0,206,
  	208,3,24,12,0,207,206,1,0,0,0,208,209,1,0,0,0,209,207,1,0,0,0,209,210,
  	1,0,0,0,210,23,1,0,0,0,211,212,5,71,0,0,212,215,5,77,0,0,213,216,3,28,
  	14,0,214,216,3,30,15,0,215,213,1,0,0,0,215,214,1,0,0,0,216,217,1,0,0,
  	0,217,218,5,88,0,0,218,25,1,0,0,0,219,220,5,71,0,0,220,27,1,0,0,0,221,
  	222,5,10,0,0,222,223,5,92,0,0,223,226,3,34,17,0,224,225,5,89,0,0,225,
  	227,3,34,17,0,226,224,1,0,0,0,226,227,1,0,0,0,227,228,1,0,0,0,228,229,
  	5,93,0,0,229,230,5,39,0,0,230,231,3,26,13,0,231,263,1,0,0,0,232,233,5,
  	10,0,0,233,234,5,92,0,0,234,235,3,34,17,0,235,236,5,93,0,0,236,237,5,
  	39,0,0,237,238,5,10,0,0,238,239,5,92,0,0,239,240,3,34,17,0,240,241,5,
  	93,0,0,241,242,5,39,0,0,242,243,3,26,13,0,243,263,1,0,0,0,244,245,5,10,
  	0,0,245,246,5,92,0,0,246,247,3,34,17,0,247,248,5,93,0,0,248,249,5,39,
  	0,0,249,250,5,10,0,0,250,251,5,92,0,0,251,252,3,34,17,0,252,253,5,93,
  	0,0,253,254,5,39,0,0,254,255,5,10,0,0,255,256,5,92,0,0,256,257,3,34,17,
  	0,257,258,5,93,0,0,258,259,5,39,0,0,259,260,3,26,13,0,260,263,1,0,0,0,
  	261,263,3,30,15,0,262,221,1,0,0,0,262,232,1,0,0,0,262,244,1,0,0,0,262,
  	261,1,0,0,0,263,29,1,0,0,0,264,268,5,71,0,0,265,268,3,34,17,0,266,268,
  	3,32,16,0,267,264,1,0,0,0,267,265,1,0,0,0,267,266,1,0,0,0,268,31,1,0,
  	0,0,269,270,5,90,0,0,270,275,5,71,0,0,271,272,5,89,0,0,272,274,5,71,0,
  	0,273,271,1,0,0,0,274,277,1,0,0,0,275,273,1,0,0,0,275,276,1,0,0,0,276,
  	278,1,0,0,0,277,275,1,0,0,0,278,279,5,91,0,0,279,33,1,0,0,0,280,281,3,
  	76,38,0,281,282,5,69,0,0,282,283,3,76,38,0,283,35,1,0,0,0,284,285,5,27,
  	0,0,285,286,5,71,0,0,286,295,5,90,0,0,287,292,3,38,19,0,288,289,5,89,
  	0,0,289,291,3,38,19,0,290,288,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,
  	292,293,1,0,0,0,293,296,1,0,0,0,294,292,1,0,0,0,295,287,1,0,0,0,295,296,
  	1,0,0,0,296,297,1,0,0,0,297,298,5,91,0,0,298,299,5,3,0,0,299,300,3,26,
  	13,0,300,304,5,88,0,0,301,303,3,6,3,0,302,301,1,0,0,0,303,306,1,0,0,0,
  	304,302,1,0,0,0,304,305,1,0,0,0,305,307,1,0,0,0,306,304,1,0,0,0,307,311,
  	5,12,0,0,308,310,3,42,21,0,309,308,1,0,0,0,310,313,1,0,0,0,311,309,1,
  	0,0,0,311,312,1,0,0,0,312,314,1,0,0,0,313,311,1,0,0,0,314,315,5,23,0,
  	0,315,316,5,88,0,0,316,37,1,0,0,0,317,318,3,40,20,0,318,319,5,3,0,0,319,
  	320,3,26,13,0,320,39,1,0,0,0,321,326,5,71,0,0,322,323,5,89,0,0,323,325,
  	5,71,0,0,324,322,1,0,0,0,325,328,1,0,0,0,326,324,1,0,0,0,326,327,1,0,
  	0,0,327,41,1,0,0,0,328,326,1,0,0,0,329,338,3,46,23,0,330,338,3,48,24,
  	0,331,338,3,54,27,0,332,338,3,56,28,0,333,338,3,58,29,0,334,338,3,2,1,
  	0,335,338,3,66,33,0,336,338,3,68,34,0,337,329,1,0,0,0,337,330,1,0,0,0,
  	337,331,1,0,0,0,337,332,1,0,0,0,337,333,1,0,0,0,337,334,1,0,0,0,337,335,
  	1,0,0,0,337,336,1,0,0,0,338,43,1,0,0,0,339,344,3,70,35,0,340,341,5,92,
  	0,0,341,342,3,76,38,0,342,343,5,93,0,0,343,345,1,0,0,0,344,340,1,0,0,
  	0,345,346,1,0,0,0,346,344,1,0,0,0,346,347,1,0,0,0,347,45,1,0,0,0,348,
  	352,3,44,22,0,349,352,3,74,37,0,350,352,3,70,35,0,351,348,1,0,0,0,351,
  	349,1,0,0,0,351,350,1,0,0,0,352,353,1,0,0,0,353,354,5,76,0,0,354,355,
  	3,76,38,0,355,356,5,88,0,0,356,47,1,0,0,0,357,358,5,63,0,0,358,359,5,
  	90,0,0,359,364,3,50,25,0,360,361,5,89,0,0,361,363,3,50,25,0,362,360,1,
  	0,0,0,363,366,1,0,0,0,364,362,1,0,0,0,364,365,1,0,0,0,365,367,1,0,0,0,
  	366,364,1,0,0,0,367,368,5,91,0,0,368,369,5,88,0,0,369,49,1,0,0,0,370,
  	373,3,52,26,0,371,372,5,3,0,0,372,374,3,76,38,0,373,371,1,0,0,0,373,374,
  	1,0,0,0,374,51,1,0,0,0,375,379,3,76,38,0,376,379,3,88,44,0,377,379,3,
  	44,22,0,378,375,1,0,0,0,378,376,1,0,0,0,378,377,1,0,0,0,379,53,1,0,0,
  	0,380,381,5,26,0,0,381,382,5,71,0,0,382,383,5,76,0,0,383,384,3,76,38,
  	0,384,385,5,55,0,0,385,386,3,76,38,0,386,387,5,20,0,0,387,388,3,56,28,
  	0,388,55,1,0,0,0,389,394,5,12,0,0,390,393,3,2,1,0,391,393,3,42,21,0,392,
  	390,1,0,0,0,392,391,1,0,0,0,393,396,1,0,0,0,394,392,1,0,0,0,394,395,1,
  	0,0,0,395,397,1,0,0,0,396,394,1,0,0,0,397,399,5,23,0,0,398,400,3,2,1,
  	0,399,398,1,0,0,0,399,400,1,0,0,0,400,401,1,0,0,0,401,402,5,88,0,0,402,
  	57,1,0,0,0,403,404,5,29,0,0,404,405,3,76,38,0,405,406,5,54,0,0,406,409,
  	3,60,30,0,407,408,5,22,0,0,408,410,3,60,30,0,409,407,1,0,0,0,409,410,
  	1,0,0,0,410,59,1,0,0,0,411,415,3,62,31,0,412,415,3,42,21,0,413,415,3,
  	2,1,0,414,411,1,0,0,0,414,412,1,0,0,0,414,413,1,0,0,0,415,61,1,0,0,0,
  	416,422,3,64,32,0,417,422,3,48,24,0,418,422,3,54,27,0,419,422,3,56,28,
  	0,420,422,3,58,29,0,421,416,1,0,0,0,421,417,1,0,0,0,421,418,1,0,0,0,421,
  	419,1,0,0,0,421,420,1,0,0,0,422,63,1,0,0,0,423,426,3,74,37,0,424,426,
  	3,70,35,0,425,423,1,0,0,0,425,424,1,0,0,0,426,427,1,0,0,0,427,428,5,76,
  	0,0,428,429,3,76,38,0,429,65,1,0,0,0,430,431,5,66,0,0,431,432,3,76,38,
  	0,432,433,5,88,0,0,433,67,1,0,0,0,434,435,5,67,0,0,435,436,3,76,38,0,
  	436,437,5,88,0,0,437,69,1,0,0,0,438,439,5,71,0,0,439,71,1,0,0,0,440,441,
  	5,71,0,0,441,450,5,90,0,0,442,447,3,76,38,0,443,444,5,89,0,0,444,446,
  	3,76,38,0,445,443,1,0,0,0,446,449,1,0,0,0,447,445,1,0,0,0,447,448,1,0,
  	0,0,448,451,1,0,0,0,449,447,1,0,0,0,450,442,1,0,0,0,450,451,1,0,0,0,451,
  	452,1,0,0,0,452,453,5,91,0,0,453,73,1,0,0,0,454,455,3,70,35,0,455,456,
  	5,92,0,0,456,461,3,76,38,0,457,458,5,89,0,0,458,460,3,76,38,0,459,457,
  	1,0,0,0,460,463,1,0,0,0,461,459,1,0,0,0,461,462,1,0,0,0,462,464,1,0,0,
  	0,463,461,1,0,0,0,464,465,5,93,0,0,465,75,1,0,0,0,466,471,3,78,39,0,467,
  	468,7,0,0,0,468,470,3,78,39,0,469,467,1,0,0,0,470,473,1,0,0,0,471,469,
  	1,0,0,0,471,472,1,0,0,0,472,77,1,0,0,0,473,471,1,0,0,0,474,479,3,80,40,
  	0,475,476,7,1,0,0,476,478,3,80,40,0,477,475,1,0,0,0,478,481,1,0,0,0,479,
  	477,1,0,0,0,479,480,1,0,0,0,480,79,1,0,0,0,481,479,1,0,0,0,482,487,3,
  	82,41,0,483,484,7,2,0,0,484,486,3,82,41,0,485,483,1,0,0,0,486,489,1,0,
  	0,0,487,485,1,0,0,0,487,488,1,0,0,0,488,81,1,0,0,0,489,487,1,0,0,0,490,
  	491,5,37,0,0,491,505,3,82,41,0,492,493,5,90,0,0,493,494,3,76,38,0,494,
  	495,5,91,0,0,495,505,1,0,0,0,496,505,3,74,37,0,497,505,3,84,42,0,498,
  	505,3,86,43,0,499,505,3,88,44,0,500,505,3,72,36,0,501,505,3,70,35,0,502,
  	505,5,56,0,0,503,505,5,24,0,0,504,490,1,0,0,0,504,492,1,0,0,0,504,496,
  	1,0,0,0,504,497,1,0,0,0,504,498,1,0,0,0,504,499,1,0,0,0,504,500,1,0,0,
  	0,504,501,1,0,0,0,504,502,1,0,0,0,504,503,1,0,0,0,505,83,1,0,0,0,506,
  	507,7,3,0,0,507,85,1,0,0,0,508,509,5,52,0,0,509,87,1,0,0,0,510,511,5,
  	53,0,0,511,89,1,0,0,0,52,93,95,101,103,108,112,126,129,132,140,146,152,
  	155,159,165,169,173,177,182,188,200,209,215,226,262,267,275,292,295,304,
  	311,326,337,346,351,364,373,378,392,394,399,409,414,421,425,447,450,461,
  	471,479,487,504
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

tree::TerminalNode* ExprParser::ProgContext::END() {
  return getToken(ExprParser::END, 0);
}

tree::TerminalNode* ExprParser::ProgContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}

std::vector<ExprParser::DeclarationContext *> ExprParser::ProgContext::declaration() {
  return getRuleContexts<ExprParser::DeclarationContext>();
}

ExprParser::DeclarationContext* ExprParser::ProgContext::declaration(size_t i) {
  return getRuleContext<ExprParser::DeclarationContext>(i);
}

std::vector<ExprParser::ProgramDeclarationContext *> ExprParser::ProgContext::programDeclaration() {
  return getRuleContexts<ExprParser::ProgramDeclarationContext>();
}

ExprParser::ProgramDeclarationContext* ExprParser::ProgContext::programDeclaration(size_t i) {
  return getRuleContext<ExprParser::ProgramDeclarationContext>(i);
}

std::vector<ExprParser::CommentContext *> ExprParser::ProgContext::comment() {
  return getRuleContexts<ExprParser::CommentContext>();
}

ExprParser::CommentContext* ExprParser::ProgContext::comment(size_t i) {
  return getRuleContext<ExprParser::CommentContext>(i);
}

std::vector<ExprParser::StatementContext *> ExprParser::ProgContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::ProgContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}


std::any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2449993381795889156) != 0)) {
      setState(93);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ExprParser::CONST:
        case ExprParser::FUNCTION:
        case ExprParser::TYPE:
        case ExprParser::VAR: {
          setState(90);
          declaration();
          break;
        }

        case ExprParser::PROGRAM: {
          setState(91);
          programDeclaration();
          break;
        }

        case ExprParser::COMMENT: {
          setState(92);
          comment();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    match(ExprParser::BEGIN);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372036250791932) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 35) != 0)) {
      setState(101);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
      case 1: {
        setState(99);
        statement();
        break;
      }

      case 2: {
        setState(100);
        comment();
        break;
      }

      default:
        break;
      }
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(106);
    match(ExprParser::END);
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COMMENT) {
      setState(107);
      comment();
    }
    setState(110);
    match(ExprParser::T__0);
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COMMENT) {
      setState(111);
      comment();
    }
    setState(114);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

ExprParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CommentContext::COMMENT() {
  return getToken(ExprParser::COMMENT, 0);
}


size_t ExprParser::CommentContext::getRuleIndex() const {
  return ExprParser::RuleComment;
}


std::any ExprParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CommentContext* ExprParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleComment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(ExprParser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramDeclarationContext ------------------------------------------------------------------

ExprParser::ProgramDeclarationContext::ProgramDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::PROGRAM() {
  return getToken(ExprParser::PROGRAM, 0);
}

std::vector<tree::TerminalNode *> ExprParser::ProgramDeclarationContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::ProgramDeclarationContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::ProgramDeclarationContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::ProgramDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleProgramDeclaration;
}


std::any ExprParser::ProgramDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgramDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgramDeclarationContext* ExprParser::programDeclaration() {
  ProgramDeclarationContext *_localctx = _tracker.createInstance<ProgramDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleProgramDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(ExprParser::PROGRAM);
    setState(119);
    match(ExprParser::IDENTIFIER);
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::LPAREN) {
      setState(120);
      match(ExprParser::LPAREN);
      setState(129);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::IDENTIFIER) {
        setState(121);
        match(ExprParser::IDENTIFIER);
        setState(126);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExprParser::COMMA) {
          setState(122);
          match(ExprParser::COMMA);
          setState(123);
          match(ExprParser::IDENTIFIER);
          setState(128);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(131);
      match(ExprParser::RPAREN);
    }
    setState(134);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ExprParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ConstDeclarationContext* ExprParser::DeclarationContext::constDeclaration() {
  return getRuleContext<ExprParser::ConstDeclarationContext>(0);
}

ExprParser::VarDeclarationContext* ExprParser::DeclarationContext::varDeclaration() {
  return getRuleContext<ExprParser::VarDeclarationContext>(0);
}

ExprParser::TypeDefDeclarationContext* ExprParser::DeclarationContext::typeDefDeclaration() {
  return getRuleContext<ExprParser::TypeDefDeclarationContext>(0);
}

ExprParser::FunctionDeclarationContext* ExprParser::DeclarationContext::functionDeclaration() {
  return getRuleContext<ExprParser::FunctionDeclarationContext>(0);
}


size_t ExprParser::DeclarationContext::getRuleIndex() const {
  return ExprParser::RuleDeclaration;
}


std::any ExprParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DeclarationContext* ExprParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(136);
        constDeclaration();
        break;
      }

      case ExprParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(137);
        varDeclaration();
        break;
      }

      case ExprParser::TYPE: {
        enterOuterAlt(_localctx, 3);
        setState(138);
        typeDefDeclaration();
        break;
      }

      case ExprParser::FUNCTION: {
        enterOuterAlt(_localctx, 4);
        setState(139);
        functionDeclaration();
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

//----------------- ConstDeclarationContext ------------------------------------------------------------------

ExprParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ConstDeclarationContext::CONST() {
  return getToken(ExprParser::CONST, 0);
}

ExprParser::ConstAssignmentListContext* ExprParser::ConstDeclarationContext::constAssignmentList() {
  return getRuleContext<ExprParser::ConstAssignmentListContext>(0);
}


size_t ExprParser::ConstDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleConstDeclaration;
}


std::any ExprParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConstDeclarationContext* ExprParser::constDeclaration() {
  ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleConstDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(ExprParser::CONST);
    setState(143);
    constAssignmentList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstAssignmentListContext ------------------------------------------------------------------

ExprParser::ConstAssignmentListContext::ConstAssignmentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::ConstAssignmentListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ConstAssignmentListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::ConstAssignmentListContext::EQUAL() {
  return getTokens(ExprParser::EQUAL);
}

tree::TerminalNode* ExprParser::ConstAssignmentListContext::EQUAL(size_t i) {
  return getToken(ExprParser::EQUAL, i);
}

std::vector<tree::TerminalNode *> ExprParser::ConstAssignmentListContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::ConstAssignmentListContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}

std::vector<ExprParser::ConstExpressionContext *> ExprParser::ConstAssignmentListContext::constExpression() {
  return getRuleContexts<ExprParser::ConstExpressionContext>();
}

ExprParser::ConstExpressionContext* ExprParser::ConstAssignmentListContext::constExpression(size_t i) {
  return getRuleContext<ExprParser::ConstExpressionContext>(i);
}

std::vector<ExprParser::StringConstantContext *> ExprParser::ConstAssignmentListContext::stringConstant() {
  return getRuleContexts<ExprParser::StringConstantContext>();
}

ExprParser::StringConstantContext* ExprParser::ConstAssignmentListContext::stringConstant(size_t i) {
  return getRuleContext<ExprParser::StringConstantContext>(i);
}

std::vector<ExprParser::CommentContext *> ExprParser::ConstAssignmentListContext::comment() {
  return getRuleContexts<ExprParser::CommentContext>();
}

ExprParser::CommentContext* ExprParser::ConstAssignmentListContext::comment(size_t i) {
  return getRuleContext<ExprParser::CommentContext>(i);
}


size_t ExprParser::ConstAssignmentListContext::getRuleIndex() const {
  return ExprParser::RuleConstAssignmentList;
}


std::any ExprParser::ConstAssignmentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstAssignmentList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConstAssignmentListContext* ExprParser::constAssignmentList() {
  ConstAssignmentListContext *_localctx = _tracker.createInstance<ConstAssignmentListContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleConstAssignmentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(177);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(146);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::COMMENT) {
        setState(145);
        comment();
      }
      setState(148);
      match(ExprParser::IDENTIFIER);
      setState(149);
      match(ExprParser::EQUAL);
      setState(152);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(150);
        constExpression();
        break;
      }

      case 2: {
        setState(151);
        stringConstant();
        break;
      }

      default:
        break;
      }
      setState(169);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(155);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == ExprParser::COMMENT) {
            setState(154);
            comment();
          }
          setState(157);
          match(ExprParser::SEMICOLON);
          setState(159);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == ExprParser::COMMENT) {
            setState(158);
            comment();
          }
          setState(161);
          match(ExprParser::IDENTIFIER);
          setState(162);
          match(ExprParser::EQUAL);
          setState(165);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
          case 1: {
            setState(163);
            constExpression();
            break;
          }

          case 2: {
            setState(164);
            stringConstant();
            break;
          }

          default:
            break;
          } 
        }
        setState(171);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      }
      setState(173);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::COMMENT) {
        setState(172);
        comment();
      }
      setState(175);
      match(ExprParser::SEMICOLON);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstExpressionContext ------------------------------------------------------------------

ExprParser::ConstExpressionContext::ConstExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::SimpleExpressionContext *> ExprParser::ConstExpressionContext::simpleExpression() {
  return getRuleContexts<ExprParser::SimpleExpressionContext>();
}

ExprParser::SimpleExpressionContext* ExprParser::ConstExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<ExprParser::SimpleExpressionContext>(i);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::NE() {
  return getToken(ExprParser::NE, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::LTEQ() {
  return getToken(ExprParser::LTEQ, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::ConstExpressionContext::GTEQ() {
  return getToken(ExprParser::GTEQ, 0);
}


size_t ExprParser::ConstExpressionContext::getRuleIndex() const {
  return ExprParser::RuleConstExpression;
}


std::any ExprParser::ConstExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConstExpressionContext* ExprParser::constExpression() {
  ConstExpressionContext *_localctx = _tracker.createInstance<ConstExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleConstExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    simpleExpression();
    setState(182);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & 63) != 0)) {
      setState(180);
      _la = _input->LA(1);
      if (!(((((_la - 77) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 77)) & 63) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(181);
      simpleExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

ExprParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VarDeclarationContext::VAR() {
  return getToken(ExprParser::VAR, 0);
}

std::vector<ExprParser::VarDeclarationListContext *> ExprParser::VarDeclarationContext::varDeclarationList() {
  return getRuleContexts<ExprParser::VarDeclarationListContext>();
}

ExprParser::VarDeclarationListContext* ExprParser::VarDeclarationContext::varDeclarationList(size_t i) {
  return getRuleContext<ExprParser::VarDeclarationListContext>(i);
}


size_t ExprParser::VarDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleVarDeclaration;
}


std::any ExprParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarDeclarationContext* ExprParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleVarDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(ExprParser::VAR);
    setState(186); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(185);
      varDeclarationList();
      setState(188); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationListContext ------------------------------------------------------------------

ExprParser::VarDeclarationListContext::VarDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VarIdentifierListContext* ExprParser::VarDeclarationListContext::varIdentifierList() {
  return getRuleContext<ExprParser::VarIdentifierListContext>(0);
}

tree::TerminalNode* ExprParser::VarDeclarationListContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::VarDeclarationListContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* ExprParser::VarDeclarationListContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::VarDeclarationListContext::getRuleIndex() const {
  return ExprParser::RuleVarDeclarationList;
}


std::any ExprParser::VarDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarDeclarationListContext* ExprParser::varDeclarationList() {
  VarDeclarationListContext *_localctx = _tracker.createInstance<VarDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleVarDeclarationList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    varIdentifierList();
    setState(191);
    match(ExprParser::COLON);
    setState(192);
    typeIdentifier();
    setState(193);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarIdentifierListContext ------------------------------------------------------------------

ExprParser::VarIdentifierListContext::VarIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::VarIdentifierListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::VarIdentifierListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::VarIdentifierListContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::VarIdentifierListContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::VarIdentifierListContext::getRuleIndex() const {
  return ExprParser::RuleVarIdentifierList;
}


std::any ExprParser::VarIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarIdentifierListContext* ExprParser::varIdentifierList() {
  VarIdentifierListContext *_localctx = _tracker.createInstance<VarIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleVarIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(ExprParser::IDENTIFIER);
    setState(200);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(196);
      match(ExprParser::COMMA);
      setState(197);
      match(ExprParser::IDENTIFIER);
      setState(202);
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

//----------------- TypeDefDeclarationContext ------------------------------------------------------------------

ExprParser::TypeDefDeclarationContext::TypeDefDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TypeDefDeclarationContext::TYPE() {
  return getToken(ExprParser::TYPE, 0);
}

ExprParser::TypeDefListContext* ExprParser::TypeDefDeclarationContext::typeDefList() {
  return getRuleContext<ExprParser::TypeDefListContext>(0);
}


size_t ExprParser::TypeDefDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleTypeDefDeclaration;
}


std::any ExprParser::TypeDefDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeDefDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeDefDeclarationContext* ExprParser::typeDefDeclaration() {
  TypeDefDeclarationContext *_localctx = _tracker.createInstance<TypeDefDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleTypeDefDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(ExprParser::TYPE);
    setState(204);
    typeDefList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefListContext ------------------------------------------------------------------

ExprParser::TypeDefListContext::TypeDefListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::TypeDefElementContext *> ExprParser::TypeDefListContext::typeDefElement() {
  return getRuleContexts<ExprParser::TypeDefElementContext>();
}

ExprParser::TypeDefElementContext* ExprParser::TypeDefListContext::typeDefElement(size_t i) {
  return getRuleContext<ExprParser::TypeDefElementContext>(i);
}


size_t ExprParser::TypeDefListContext::getRuleIndex() const {
  return ExprParser::RuleTypeDefList;
}


std::any ExprParser::TypeDefListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeDefList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeDefListContext* ExprParser::typeDefList() {
  TypeDefListContext *_localctx = _tracker.createInstance<TypeDefListContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleTypeDefList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(206);
      typeDefElement();
      setState(209); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefElementContext ------------------------------------------------------------------

ExprParser::TypeDefElementContext::TypeDefElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TypeDefElementContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::TypeDefElementContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::TypeDefElementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::TypeSpecificationContext* ExprParser::TypeDefElementContext::typeSpecification() {
  return getRuleContext<ExprParser::TypeSpecificationContext>(0);
}

ExprParser::SimpleTypeContext* ExprParser::TypeDefElementContext::simpleType() {
  return getRuleContext<ExprParser::SimpleTypeContext>(0);
}


size_t ExprParser::TypeDefElementContext::getRuleIndex() const {
  return ExprParser::RuleTypeDefElement;
}


std::any ExprParser::TypeDefElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeDefElement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeDefElementContext* ExprParser::typeDefElement() {
  TypeDefElementContext *_localctx = _tracker.createInstance<TypeDefElementContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleTypeDefElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(ExprParser::IDENTIFIER);
    setState(212);
    match(ExprParser::EQUAL);
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(213);
      typeSpecification();
      break;
    }

    case 2: {
      setState(214);
      simpleType();
      break;
    }

    default:
      break;
    }
    setState(217);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

ExprParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::TypeIdentifierContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::TypeIdentifierContext::getRuleIndex() const {
  return ExprParser::RuleTypeIdentifier;
}


std::any ExprParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeIdentifierContext* ExprParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleTypeIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecificationContext ------------------------------------------------------------------

ExprParser::TypeSpecificationContext::TypeSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::ARRAY() {
  return getTokens(ExprParser::ARRAY);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::ARRAY(size_t i) {
  return getToken(ExprParser::ARRAY, i);
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::LBRACKET() {
  return getTokens(ExprParser::LBRACKET);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::LBRACKET(size_t i) {
  return getToken(ExprParser::LBRACKET, i);
}

std::vector<ExprParser::SubrangeContext *> ExprParser::TypeSpecificationContext::subrange() {
  return getRuleContexts<ExprParser::SubrangeContext>();
}

ExprParser::SubrangeContext* ExprParser::TypeSpecificationContext::subrange(size_t i) {
  return getRuleContext<ExprParser::SubrangeContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::RBRACKET() {
  return getTokens(ExprParser::RBRACKET);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::RBRACKET(size_t i) {
  return getToken(ExprParser::RBRACKET, i);
}

std::vector<tree::TerminalNode *> ExprParser::TypeSpecificationContext::OF() {
  return getTokens(ExprParser::OF);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::OF(size_t i) {
  return getToken(ExprParser::OF, i);
}

ExprParser::TypeIdentifierContext* ExprParser::TypeSpecificationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* ExprParser::TypeSpecificationContext::COMMA() {
  return getToken(ExprParser::COMMA, 0);
}

ExprParser::SimpleTypeContext* ExprParser::TypeSpecificationContext::simpleType() {
  return getRuleContext<ExprParser::SimpleTypeContext>(0);
}


size_t ExprParser::TypeSpecificationContext::getRuleIndex() const {
  return ExprParser::RuleTypeSpecification;
}


std::any ExprParser::TypeSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTypeSpecification(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TypeSpecificationContext* ExprParser::typeSpecification() {
  TypeSpecificationContext *_localctx = _tracker.createInstance<TypeSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleTypeSpecification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(262);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(221);
      match(ExprParser::ARRAY);
      setState(222);
      match(ExprParser::LBRACKET);
      setState(223);
      subrange();
      setState(226);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::COMMA) {
        setState(224);
        match(ExprParser::COMMA);
        setState(225);
        subrange();
      }
      setState(228);
      match(ExprParser::RBRACKET);
      setState(229);
      match(ExprParser::OF);
      setState(230);
      typeIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(232);
      match(ExprParser::ARRAY);
      setState(233);
      match(ExprParser::LBRACKET);
      setState(234);
      subrange();
      setState(235);
      match(ExprParser::RBRACKET);
      setState(236);
      match(ExprParser::OF);
      setState(237);
      match(ExprParser::ARRAY);
      setState(238);
      match(ExprParser::LBRACKET);
      setState(239);
      subrange();
      setState(240);
      match(ExprParser::RBRACKET);
      setState(241);
      match(ExprParser::OF);
      setState(242);
      typeIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(244);
      match(ExprParser::ARRAY);
      setState(245);
      match(ExprParser::LBRACKET);
      setState(246);
      subrange();
      setState(247);
      match(ExprParser::RBRACKET);
      setState(248);
      match(ExprParser::OF);
      setState(249);
      match(ExprParser::ARRAY);
      setState(250);
      match(ExprParser::LBRACKET);
      setState(251);
      subrange();
      setState(252);
      match(ExprParser::RBRACKET);
      setState(253);
      match(ExprParser::OF);
      setState(254);
      match(ExprParser::ARRAY);
      setState(255);
      match(ExprParser::LBRACKET);
      setState(256);
      subrange();
      setState(257);
      match(ExprParser::RBRACKET);
      setState(258);
      match(ExprParser::OF);
      setState(259);
      typeIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(261);
      simpleType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeContext ------------------------------------------------------------------

ExprParser::SimpleTypeContext::SimpleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SimpleTypeContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

ExprParser::SubrangeContext* ExprParser::SimpleTypeContext::subrange() {
  return getRuleContext<ExprParser::SubrangeContext>(0);
}

ExprParser::EnumeratedTypeContext* ExprParser::SimpleTypeContext::enumeratedType() {
  return getRuleContext<ExprParser::EnumeratedTypeContext>(0);
}


size_t ExprParser::SimpleTypeContext::getRuleIndex() const {
  return ExprParser::RuleSimpleType;
}


std::any ExprParser::SimpleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSimpleType(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SimpleTypeContext* ExprParser::simpleType() {
  SimpleTypeContext *_localctx = _tracker.createInstance<SimpleTypeContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleSimpleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(264);
      match(ExprParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(265);
      subrange();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(266);
      enumeratedType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratedTypeContext ------------------------------------------------------------------

ExprParser::EnumeratedTypeContext::EnumeratedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::EnumeratedTypeContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::EnumeratedTypeContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::EnumeratedTypeContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::EnumeratedTypeContext::getRuleIndex() const {
  return ExprParser::RuleEnumeratedType;
}


std::any ExprParser::EnumeratedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEnumeratedType(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::EnumeratedTypeContext* ExprParser::enumeratedType() {
  EnumeratedTypeContext *_localctx = _tracker.createInstance<EnumeratedTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleEnumeratedType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(ExprParser::LPAREN);
    setState(270);
    match(ExprParser::IDENTIFIER);
    setState(275);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(271);
      match(ExprParser::COMMA);
      setState(272);
      match(ExprParser::IDENTIFIER);
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(278);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrangeContext ------------------------------------------------------------------

ExprParser::SubrangeContext::SubrangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExpressionContext *> ExprParser::SubrangeContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::SubrangeContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::SubrangeContext::RANGE() {
  return getToken(ExprParser::RANGE, 0);
}


size_t ExprParser::SubrangeContext::getRuleIndex() const {
  return ExprParser::RuleSubrange;
}


std::any ExprParser::SubrangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSubrange(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SubrangeContext* ExprParser::subrange() {
  SubrangeContext *_localctx = _tracker.createInstance<SubrangeContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleSubrange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    expression();
    setState(281);
    match(ExprParser::RANGE);
    setState(282);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

ExprParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::FUNCTION() {
  return getToken(ExprParser::FUNCTION, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::FunctionDeclarationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::FunctionDeclarationContext::SEMICOLON() {
  return getTokens(ExprParser::SEMICOLON);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::SEMICOLON(size_t i) {
  return getToken(ExprParser::SEMICOLON, i);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::END() {
  return getToken(ExprParser::END, 0);
}

std::vector<ExprParser::ParamDeclarationContext *> ExprParser::FunctionDeclarationContext::paramDeclaration() {
  return getRuleContexts<ExprParser::ParamDeclarationContext>();
}

ExprParser::ParamDeclarationContext* ExprParser::FunctionDeclarationContext::paramDeclaration(size_t i) {
  return getRuleContext<ExprParser::ParamDeclarationContext>(i);
}

std::vector<ExprParser::DeclarationContext *> ExprParser::FunctionDeclarationContext::declaration() {
  return getRuleContexts<ExprParser::DeclarationContext>();
}

ExprParser::DeclarationContext* ExprParser::FunctionDeclarationContext::declaration(size_t i) {
  return getRuleContext<ExprParser::DeclarationContext>(i);
}

std::vector<ExprParser::StatementContext *> ExprParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::FunctionDeclarationContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::FunctionDeclarationContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::FunctionDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleFunctionDeclaration;
}


std::any ExprParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FunctionDeclarationContext* ExprParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(ExprParser::FUNCTION);
    setState(285);
    match(ExprParser::IDENTIFIER);
    setState(286);
    match(ExprParser::LPAREN);
    setState(295);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::IDENTIFIER) {
      setState(287);
      paramDeclaration();
      setState(292);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(288);
        match(ExprParser::COMMA);
        setState(289);
        paramDeclaration();
        setState(294);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(297);
    match(ExprParser::RPAREN);
    setState(298);
    match(ExprParser::COLON);
    setState(299);
    typeIdentifier();
    setState(300);
    match(ExprParser::SEMICOLON);
    setState(304);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2449958197423800320) != 0)) {
      setState(301);
      declaration();
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(307);
    match(ExprParser::BEGIN);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372036250791932) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 35) != 0)) {
      setState(308);
      statement();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    match(ExprParser::END);
    setState(315);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamDeclarationContext ------------------------------------------------------------------

ExprParser::ParamDeclarationContext::ParamDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ParamIdentifierListContext* ExprParser::ParamDeclarationContext::paramIdentifierList() {
  return getRuleContext<ExprParser::ParamIdentifierListContext>(0);
}

tree::TerminalNode* ExprParser::ParamDeclarationContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::TypeIdentifierContext* ExprParser::ParamDeclarationContext::typeIdentifier() {
  return getRuleContext<ExprParser::TypeIdentifierContext>(0);
}


size_t ExprParser::ParamDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleParamDeclaration;
}


std::any ExprParser::ParamDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParamDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ParamDeclarationContext* ExprParser::paramDeclaration() {
  ParamDeclarationContext *_localctx = _tracker.createInstance<ParamDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RuleParamDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    paramIdentifierList();
    setState(318);
    match(ExprParser::COLON);
    setState(319);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamIdentifierListContext ------------------------------------------------------------------

ExprParser::ParamIdentifierListContext::ParamIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::ParamIdentifierListContext::IDENTIFIER() {
  return getTokens(ExprParser::IDENTIFIER);
}

tree::TerminalNode* ExprParser::ParamIdentifierListContext::IDENTIFIER(size_t i) {
  return getToken(ExprParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> ExprParser::ParamIdentifierListContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::ParamIdentifierListContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::ParamIdentifierListContext::getRuleIndex() const {
  return ExprParser::RuleParamIdentifierList;
}


std::any ExprParser::ParamIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParamIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ParamIdentifierListContext* ExprParser::paramIdentifierList() {
  ParamIdentifierListContext *_localctx = _tracker.createInstance<ParamIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleParamIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(ExprParser::IDENTIFIER);
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(322);
      match(ExprParser::COMMA);
      setState(323);
      match(ExprParser::IDENTIFIER);
      setState(328);
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

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::AssignmentContext* ExprParser::StatementContext::assignment() {
  return getRuleContext<ExprParser::AssignmentContext>(0);
}

ExprParser::WritelnContext* ExprParser::StatementContext::writeln() {
  return getRuleContext<ExprParser::WritelnContext>(0);
}

ExprParser::ForStatementContext* ExprParser::StatementContext::forStatement() {
  return getRuleContext<ExprParser::ForStatementContext>(0);
}

ExprParser::CompoundStatementContext* ExprParser::StatementContext::compoundStatement() {
  return getRuleContext<ExprParser::CompoundStatementContext>(0);
}

ExprParser::IfStatementContext* ExprParser::StatementContext::ifStatement() {
  return getRuleContext<ExprParser::IfStatementContext>(0);
}

ExprParser::CommentContext* ExprParser::StatementContext::comment() {
  return getRuleContext<ExprParser::CommentContext>(0);
}

ExprParser::LdxStatementContext* ExprParser::StatementContext::ldxStatement() {
  return getRuleContext<ExprParser::LdxStatementContext>(0);
}

ExprParser::LdchStatementContext* ExprParser::StatementContext::ldchStatement() {
  return getRuleContext<ExprParser::LdchStatementContext>(0);
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}


std::any ExprParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(337);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(329);
        assignment();
        break;
      }

      case ExprParser::WRITELN: {
        enterOuterAlt(_localctx, 2);
        setState(330);
        writeln();
        break;
      }

      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(331);
        forStatement();
        break;
      }

      case ExprParser::BEGIN: {
        enterOuterAlt(_localctx, 4);
        setState(332);
        compoundStatement();
        break;
      }

      case ExprParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(333);
        ifStatement();
        break;
      }

      case ExprParser::COMMENT: {
        enterOuterAlt(_localctx, 6);
        setState(334);
        comment();
        break;
      }

      case ExprParser::LDX: {
        enterOuterAlt(_localctx, 7);
        setState(335);
        ldxStatement();
        break;
      }

      case ExprParser::LDCH: {
        enterOuterAlt(_localctx, 8);
        setState(336);
        ldchStatement();
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

//----------------- MultiDimensionalArrayIndexingContext ------------------------------------------------------------------

ExprParser::MultiDimensionalArrayIndexingContext::MultiDimensionalArrayIndexingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::MultiDimensionalArrayIndexingContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::MultiDimensionalArrayIndexingContext::LBRACKET() {
  return getTokens(ExprParser::LBRACKET);
}

tree::TerminalNode* ExprParser::MultiDimensionalArrayIndexingContext::LBRACKET(size_t i) {
  return getToken(ExprParser::LBRACKET, i);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::MultiDimensionalArrayIndexingContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::MultiDimensionalArrayIndexingContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::MultiDimensionalArrayIndexingContext::RBRACKET() {
  return getTokens(ExprParser::RBRACKET);
}

tree::TerminalNode* ExprParser::MultiDimensionalArrayIndexingContext::RBRACKET(size_t i) {
  return getToken(ExprParser::RBRACKET, i);
}


size_t ExprParser::MultiDimensionalArrayIndexingContext::getRuleIndex() const {
  return ExprParser::RuleMultiDimensionalArrayIndexing;
}


std::any ExprParser::MultiDimensionalArrayIndexingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMultiDimensionalArrayIndexing(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::MultiDimensionalArrayIndexingContext* ExprParser::multiDimensionalArrayIndexing() {
  MultiDimensionalArrayIndexingContext *_localctx = _tracker.createInstance<MultiDimensionalArrayIndexingContext>(_ctx, getState());
  enterRule(_localctx, 44, ExprParser::RuleMultiDimensionalArrayIndexing);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    variable();
    setState(344); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(340);
      match(ExprParser::LBRACKET);
      setState(341);
      expression();
      setState(342);
      match(ExprParser::RBRACKET);
      setState(346); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::LBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ExprParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::AssignmentContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExpressionContext* ExprParser::AssignmentContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::AssignmentContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::MultiDimensionalArrayIndexingContext* ExprParser::AssignmentContext::multiDimensionalArrayIndexing() {
  return getRuleContext<ExprParser::MultiDimensionalArrayIndexingContext>(0);
}

ExprParser::ArrayIndexingContext* ExprParser::AssignmentContext::arrayIndexing() {
  return getRuleContext<ExprParser::ArrayIndexingContext>(0);
}

ExprParser::VariableContext* ExprParser::AssignmentContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}


size_t ExprParser::AssignmentContext::getRuleIndex() const {
  return ExprParser::RuleAssignment;
}


std::any ExprParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::AssignmentContext* ExprParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 46, ExprParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(348);
      multiDimensionalArrayIndexing();
      break;
    }

    case 2: {
      setState(349);
      arrayIndexing();
      break;
    }

    case 3: {
      setState(350);
      variable();
      break;
    }

    default:
      break;
    }
    setState(353);
    match(ExprParser::ASSIGN);
    setState(354);
    expression();
    setState(355);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnContext ------------------------------------------------------------------

ExprParser::WritelnContext::WritelnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::WritelnContext::WRITELN() {
  return getToken(ExprParser::WRITELN, 0);
}

tree::TerminalNode* ExprParser::WritelnContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

std::vector<ExprParser::WritelnArgContext *> ExprParser::WritelnContext::writelnArg() {
  return getRuleContexts<ExprParser::WritelnArgContext>();
}

ExprParser::WritelnArgContext* ExprParser::WritelnContext::writelnArg(size_t i) {
  return getRuleContext<ExprParser::WritelnArgContext>(i);
}

tree::TerminalNode* ExprParser::WritelnContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

tree::TerminalNode* ExprParser::WritelnContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> ExprParser::WritelnContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::WritelnContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::WritelnContext::getRuleIndex() const {
  return ExprParser::RuleWriteln;
}


std::any ExprParser::WritelnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWriteln(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WritelnContext* ExprParser::writeln() {
  WritelnContext *_localctx = _tracker.createInstance<WritelnContext>(_ctx, getState());
  enterRule(_localctx, 48, ExprParser::RuleWriteln);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(ExprParser::WRITELN);
    setState(358);
    match(ExprParser::LPAREN);
    setState(359);
    writelnArg();
    setState(364);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(360);
      match(ExprParser::COMMA);
      setState(361);
      writelnArg();
      setState(366);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(367);
    match(ExprParser::RPAREN);
    setState(368);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnArgContext ------------------------------------------------------------------

ExprParser::WritelnArgContext::WritelnArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::WritelnExpressionContext* ExprParser::WritelnArgContext::writelnExpression() {
  return getRuleContext<ExprParser::WritelnExpressionContext>(0);
}

tree::TerminalNode* ExprParser::WritelnArgContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::ExpressionContext* ExprParser::WritelnArgContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::WritelnArgContext::getRuleIndex() const {
  return ExprParser::RuleWritelnArg;
}


std::any ExprParser::WritelnArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWritelnArg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WritelnArgContext* ExprParser::writelnArg() {
  WritelnArgContext *_localctx = _tracker.createInstance<WritelnArgContext>(_ctx, getState());
  enterRule(_localctx, 50, ExprParser::RuleWritelnArg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    writelnExpression();
    setState(373);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COLON) {
      setState(371);
      match(ExprParser::COLON);
      setState(372);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnExpressionContext ------------------------------------------------------------------

ExprParser::WritelnExpressionContext::WritelnExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExpressionContext* ExprParser::WritelnExpressionContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::StringConstantContext* ExprParser::WritelnExpressionContext::stringConstant() {
  return getRuleContext<ExprParser::StringConstantContext>(0);
}

ExprParser::MultiDimensionalArrayIndexingContext* ExprParser::WritelnExpressionContext::multiDimensionalArrayIndexing() {
  return getRuleContext<ExprParser::MultiDimensionalArrayIndexingContext>(0);
}


size_t ExprParser::WritelnExpressionContext::getRuleIndex() const {
  return ExprParser::RuleWritelnExpression;
}


std::any ExprParser::WritelnExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWritelnExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WritelnExpressionContext* ExprParser::writelnExpression() {
  WritelnExpressionContext *_localctx = _tracker.createInstance<WritelnExpressionContext>(_ctx, getState());
  enterRule(_localctx, 52, ExprParser::RuleWritelnExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(375);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(376);
      stringConstant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(377);
      multiDimensionalArrayIndexing();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

ExprParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ForStatementContext::FOR() {
  return getToken(ExprParser::FOR, 0);
}

tree::TerminalNode* ExprParser::ForStatementContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::ForStatementContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::ForStatementContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::ForStatementContext::TO() {
  return getToken(ExprParser::TO, 0);
}

tree::TerminalNode* ExprParser::ForStatementContext::DO() {
  return getToken(ExprParser::DO, 0);
}

ExprParser::CompoundStatementContext* ExprParser::ForStatementContext::compoundStatement() {
  return getRuleContext<ExprParser::CompoundStatementContext>(0);
}


size_t ExprParser::ForStatementContext::getRuleIndex() const {
  return ExprParser::RuleForStatement;
}


std::any ExprParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ForStatementContext* ExprParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, ExprParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    match(ExprParser::FOR);
    setState(381);
    match(ExprParser::IDENTIFIER);
    setState(382);
    match(ExprParser::ASSIGN);
    setState(383);
    expression();
    setState(384);
    match(ExprParser::TO);
    setState(385);
    expression();
    setState(386);
    match(ExprParser::DO);
    setState(387);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

ExprParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CompoundStatementContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

tree::TerminalNode* ExprParser::CompoundStatementContext::END() {
  return getToken(ExprParser::END, 0);
}

tree::TerminalNode* ExprParser::CompoundStatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

std::vector<ExprParser::CommentContext *> ExprParser::CompoundStatementContext::comment() {
  return getRuleContexts<ExprParser::CommentContext>();
}

ExprParser::CommentContext* ExprParser::CompoundStatementContext::comment(size_t i) {
  return getRuleContext<ExprParser::CommentContext>(i);
}

std::vector<ExprParser::StatementContext *> ExprParser::CompoundStatementContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::CompoundStatementContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::CompoundStatementContext::getRuleIndex() const {
  return ExprParser::RuleCompoundStatement;
}


std::any ExprParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CompoundStatementContext* ExprParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 56, ExprParser::RuleCompoundStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(ExprParser::BEGIN);
    setState(394);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9223372036250791932) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & 35) != 0)) {
      setState(392);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(390);
        comment();
        break;
      }

      case 2: {
        setState(391);
        statement();
        break;
      }

      default:
        break;
      }
      setState(396);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(397);
    match(ExprParser::END);
    setState(399);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::COMMENT) {
      setState(398);
      comment();
    }
    setState(401);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

ExprParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::IfStatementContext::IF() {
  return getToken(ExprParser::IF, 0);
}

ExprParser::ExpressionContext* ExprParser::IfStatementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::IfStatementContext::THEN() {
  return getToken(ExprParser::THEN, 0);
}

std::vector<ExprParser::Statement_or_commentContext *> ExprParser::IfStatementContext::statement_or_comment() {
  return getRuleContexts<ExprParser::Statement_or_commentContext>();
}

ExprParser::Statement_or_commentContext* ExprParser::IfStatementContext::statement_or_comment(size_t i) {
  return getRuleContext<ExprParser::Statement_or_commentContext>(i);
}

tree::TerminalNode* ExprParser::IfStatementContext::ELSE() {
  return getToken(ExprParser::ELSE, 0);
}


size_t ExprParser::IfStatementContext::getRuleIndex() const {
  return ExprParser::RuleIfStatement;
}


std::any ExprParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::IfStatementContext* ExprParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 58, ExprParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    match(ExprParser::IF);
    setState(404);
    expression();
    setState(405);
    match(ExprParser::THEN);
    setState(406);
    statement_or_comment();
    setState(409);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(407);
      match(ExprParser::ELSE);
      setState(408);
      statement_or_comment();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_or_commentContext ------------------------------------------------------------------

ExprParser::Statement_or_commentContext::Statement_or_commentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Statement_without_semicolonContext* ExprParser::Statement_or_commentContext::statement_without_semicolon() {
  return getRuleContext<ExprParser::Statement_without_semicolonContext>(0);
}

ExprParser::StatementContext* ExprParser::Statement_or_commentContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

ExprParser::CommentContext* ExprParser::Statement_or_commentContext::comment() {
  return getRuleContext<ExprParser::CommentContext>(0);
}


size_t ExprParser::Statement_or_commentContext::getRuleIndex() const {
  return ExprParser::RuleStatement_or_comment;
}


std::any ExprParser::Statement_or_commentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_or_comment(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Statement_or_commentContext* ExprParser::statement_or_comment() {
  Statement_or_commentContext *_localctx = _tracker.createInstance<Statement_or_commentContext>(_ctx, getState());
  enterRule(_localctx, 60, ExprParser::RuleStatement_or_comment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(414);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(411);
      statement_without_semicolon();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(412);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(413);
      comment();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_without_semicolonContext ------------------------------------------------------------------

ExprParser::Statement_without_semicolonContext::Statement_without_semicolonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::Assignment_without_semicolonContext* ExprParser::Statement_without_semicolonContext::assignment_without_semicolon() {
  return getRuleContext<ExprParser::Assignment_without_semicolonContext>(0);
}

ExprParser::WritelnContext* ExprParser::Statement_without_semicolonContext::writeln() {
  return getRuleContext<ExprParser::WritelnContext>(0);
}

ExprParser::ForStatementContext* ExprParser::Statement_without_semicolonContext::forStatement() {
  return getRuleContext<ExprParser::ForStatementContext>(0);
}

ExprParser::CompoundStatementContext* ExprParser::Statement_without_semicolonContext::compoundStatement() {
  return getRuleContext<ExprParser::CompoundStatementContext>(0);
}

ExprParser::IfStatementContext* ExprParser::Statement_without_semicolonContext::ifStatement() {
  return getRuleContext<ExprParser::IfStatementContext>(0);
}


size_t ExprParser::Statement_without_semicolonContext::getRuleIndex() const {
  return ExprParser::RuleStatement_without_semicolon;
}


std::any ExprParser::Statement_without_semicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement_without_semicolon(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Statement_without_semicolonContext* ExprParser::statement_without_semicolon() {
  Statement_without_semicolonContext *_localctx = _tracker.createInstance<Statement_without_semicolonContext>(_ctx, getState());
  enterRule(_localctx, 62, ExprParser::RuleStatement_without_semicolon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(421);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(416);
        assignment_without_semicolon();
        break;
      }

      case ExprParser::WRITELN: {
        enterOuterAlt(_localctx, 2);
        setState(417);
        writeln();
        break;
      }

      case ExprParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(418);
        forStatement();
        break;
      }

      case ExprParser::BEGIN: {
        enterOuterAlt(_localctx, 4);
        setState(419);
        compoundStatement();
        break;
      }

      case ExprParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(420);
        ifStatement();
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

//----------------- Assignment_without_semicolonContext ------------------------------------------------------------------

ExprParser::Assignment_without_semicolonContext::Assignment_without_semicolonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Assignment_without_semicolonContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExpressionContext* ExprParser::Assignment_without_semicolonContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

ExprParser::ArrayIndexingContext* ExprParser::Assignment_without_semicolonContext::arrayIndexing() {
  return getRuleContext<ExprParser::ArrayIndexingContext>(0);
}

ExprParser::VariableContext* ExprParser::Assignment_without_semicolonContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}


size_t ExprParser::Assignment_without_semicolonContext::getRuleIndex() const {
  return ExprParser::RuleAssignment_without_semicolon;
}


std::any ExprParser::Assignment_without_semicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssignment_without_semicolon(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Assignment_without_semicolonContext* ExprParser::assignment_without_semicolon() {
  Assignment_without_semicolonContext *_localctx = _tracker.createInstance<Assignment_without_semicolonContext>(_ctx, getState());
  enterRule(_localctx, 64, ExprParser::RuleAssignment_without_semicolon);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(423);
      arrayIndexing();
      break;
    }

    case 2: {
      setState(424);
      variable();
      break;
    }

    default:
      break;
    }
    setState(427);
    match(ExprParser::ASSIGN);
    setState(428);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LdxStatementContext ------------------------------------------------------------------

ExprParser::LdxStatementContext::LdxStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::LdxStatementContext::LDX() {
  return getToken(ExprParser::LDX, 0);
}

ExprParser::ExpressionContext* ExprParser::LdxStatementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::LdxStatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::LdxStatementContext::getRuleIndex() const {
  return ExprParser::RuleLdxStatement;
}


std::any ExprParser::LdxStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLdxStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::LdxStatementContext* ExprParser::ldxStatement() {
  LdxStatementContext *_localctx = _tracker.createInstance<LdxStatementContext>(_ctx, getState());
  enterRule(_localctx, 66, ExprParser::RuleLdxStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(ExprParser::LDX);
    setState(431);
    expression();
    setState(432);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LdchStatementContext ------------------------------------------------------------------

ExprParser::LdchStatementContext::LdchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::LdchStatementContext::LDCH() {
  return getToken(ExprParser::LDCH, 0);
}

ExprParser::ExpressionContext* ExprParser::LdchStatementContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::LdchStatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::LdchStatementContext::getRuleIndex() const {
  return ExprParser::RuleLdchStatement;
}


std::any ExprParser::LdchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLdchStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::LdchStatementContext* ExprParser::ldchStatement() {
  LdchStatementContext *_localctx = _tracker.createInstance<LdchStatementContext>(_ctx, getState());
  enterRule(_localctx, 68, ExprParser::RuleLdchStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(ExprParser::LDCH);
    setState(435);
    expression();
    setState(436);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

ExprParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VariableContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::VariableContext::getRuleIndex() const {
  return ExprParser::RuleVariable;
}


std::any ExprParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VariableContext* ExprParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 70, ExprParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

ExprParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FunctionCallContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::FunctionCallContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::FunctionCallContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::FunctionCallContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::FunctionCallContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::FunctionCallContext::getRuleIndex() const {
  return ExprParser::RuleFunctionCall;
}


std::any ExprParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FunctionCallContext* ExprParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 72, ExprParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(ExprParser::IDENTIFIER);
    setState(441);
    match(ExprParser::LPAREN);
    setState(450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 85568530375770112) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 4194317) != 0)) {
      setState(442);
      expression();
      setState(447);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::COMMA) {
        setState(443);
        match(ExprParser::COMMA);
        setState(444);
        expression();
        setState(449);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(452);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayIndexingContext ------------------------------------------------------------------

ExprParser::ArrayIndexingContext::ArrayIndexingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::ArrayIndexingContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::LBRACKET() {
  return getToken(ExprParser::LBRACKET, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::ArrayIndexingContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::ArrayIndexingContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::RBRACKET() {
  return getToken(ExprParser::RBRACKET, 0);
}

std::vector<tree::TerminalNode *> ExprParser::ArrayIndexingContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::ArrayIndexingContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}


size_t ExprParser::ArrayIndexingContext::getRuleIndex() const {
  return ExprParser::RuleArrayIndexing;
}


std::any ExprParser::ArrayIndexingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArrayIndexing(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ArrayIndexingContext* ExprParser::arrayIndexing() {
  ArrayIndexingContext *_localctx = _tracker.createInstance<ArrayIndexingContext>(_ctx, getState());
  enterRule(_localctx, 74, ExprParser::RuleArrayIndexing);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    variable();
    setState(455);
    match(ExprParser::LBRACKET);
    setState(456);
    expression();
    setState(461);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(457);
      match(ExprParser::COMMA);
      setState(458);
      expression();
      setState(463);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(464);
    match(ExprParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::SimpleExpressionContext *> ExprParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<ExprParser::SimpleExpressionContext>();
}

ExprParser::SimpleExpressionContext* ExprParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<ExprParser::SimpleExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::EQUAL() {
  return getTokens(ExprParser::EQUAL);
}

tree::TerminalNode* ExprParser::ExpressionContext::EQUAL(size_t i) {
  return getToken(ExprParser::EQUAL, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::NE() {
  return getTokens(ExprParser::NE);
}

tree::TerminalNode* ExprParser::ExpressionContext::NE(size_t i) {
  return getToken(ExprParser::NE, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::LT() {
  return getTokens(ExprParser::LT);
}

tree::TerminalNode* ExprParser::ExpressionContext::LT(size_t i) {
  return getToken(ExprParser::LT, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::LTEQ() {
  return getTokens(ExprParser::LTEQ);
}

tree::TerminalNode* ExprParser::ExpressionContext::LTEQ(size_t i) {
  return getToken(ExprParser::LTEQ, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::GT() {
  return getTokens(ExprParser::GT);
}

tree::TerminalNode* ExprParser::ExpressionContext::GT(size_t i) {
  return getToken(ExprParser::GT, i);
}

std::vector<tree::TerminalNode *> ExprParser::ExpressionContext::GTEQ() {
  return getTokens(ExprParser::GTEQ);
}

tree::TerminalNode* ExprParser::ExpressionContext::GTEQ(size_t i) {
  return getToken(ExprParser::GTEQ, i);
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}


std::any ExprParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExpressionContext* ExprParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 76, ExprParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    simpleExpression();
    setState(471);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & 63) != 0)) {
      setState(467);
      _la = _input->LA(1);
      if (!(((((_la - 77) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 77)) & 63) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(468);
      simpleExpression();
      setState(473);
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

//----------------- SimpleExpressionContext ------------------------------------------------------------------

ExprParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::TermContext *> ExprParser::SimpleExpressionContext::term() {
  return getRuleContexts<ExprParser::TermContext>();
}

ExprParser::TermContext* ExprParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<ExprParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::SimpleExpressionContext::PLUSOP() {
  return getTokens(ExprParser::PLUSOP);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::PLUSOP(size_t i) {
  return getToken(ExprParser::PLUSOP, i);
}

std::vector<tree::TerminalNode *> ExprParser::SimpleExpressionContext::MINUSOP() {
  return getTokens(ExprParser::MINUSOP);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::MINUSOP(size_t i) {
  return getToken(ExprParser::MINUSOP, i);
}


size_t ExprParser::SimpleExpressionContext::getRuleIndex() const {
  return ExprParser::RuleSimpleExpression;
}


std::any ExprParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::SimpleExpressionContext* ExprParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 78, ExprParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    term();
    setState(479);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::PLUSOP

    || _la == ExprParser::MINUSOP) {
      setState(475);
      _la = _input->LA(1);
      if (!(_la == ExprParser::PLUSOP

      || _la == ExprParser::MINUSOP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(476);
      term();
      setState(481);
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

//----------------- TermContext ------------------------------------------------------------------

ExprParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::FactorContext *> ExprParser::TermContext::factor() {
  return getRuleContexts<ExprParser::FactorContext>();
}

ExprParser::FactorContext* ExprParser::TermContext::factor(size_t i) {
  return getRuleContext<ExprParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::TermContext::MULTOP() {
  return getTokens(ExprParser::MULTOP);
}

tree::TerminalNode* ExprParser::TermContext::MULTOP(size_t i) {
  return getToken(ExprParser::MULTOP, i);
}

std::vector<tree::TerminalNode *> ExprParser::TermContext::DIVOP() {
  return getTokens(ExprParser::DIVOP);
}

tree::TerminalNode* ExprParser::TermContext::DIVOP(size_t i) {
  return getToken(ExprParser::DIVOP, i);
}

std::vector<tree::TerminalNode *> ExprParser::TermContext::DIV() {
  return getTokens(ExprParser::DIV);
}

tree::TerminalNode* ExprParser::TermContext::DIV(size_t i) {
  return getToken(ExprParser::DIV, i);
}

std::vector<tree::TerminalNode *> ExprParser::TermContext::MOD() {
  return getTokens(ExprParser::MOD);
}

tree::TerminalNode* ExprParser::TermContext::MOD(size_t i) {
  return getToken(ExprParser::MOD, i);
}


size_t ExprParser::TermContext::getRuleIndex() const {
  return ExprParser::RuleTerm;
}


std::any ExprParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::TermContext* ExprParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 80, ExprParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    factor();
    setState(487);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & 108086391056957441) != 0)) {
      setState(483);
      _la = _input->LA(1);
      if (!(((((_la - 19) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 19)) & 108086391056957441) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(484);
      factor();
      setState(489);
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

//----------------- FactorContext ------------------------------------------------------------------

ExprParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::FactorContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

ExprParser::FactorContext* ExprParser::FactorContext::factor() {
  return getRuleContext<ExprParser::FactorContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

ExprParser::ExpressionContext* ExprParser::FactorContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::ArrayIndexingContext* ExprParser::FactorContext::arrayIndexing() {
  return getRuleContext<ExprParser::ArrayIndexingContext>(0);
}

ExprParser::NumberContext* ExprParser::FactorContext::number() {
  return getRuleContext<ExprParser::NumberContext>(0);
}

ExprParser::CharacterConstantContext* ExprParser::FactorContext::characterConstant() {
  return getRuleContext<ExprParser::CharacterConstantContext>(0);
}

ExprParser::StringConstantContext* ExprParser::FactorContext::stringConstant() {
  return getRuleContext<ExprParser::StringConstantContext>(0);
}

ExprParser::FunctionCallContext* ExprParser::FactorContext::functionCall() {
  return getRuleContext<ExprParser::FunctionCallContext>(0);
}

ExprParser::VariableContext* ExprParser::FactorContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::FactorContext::TRUE() {
  return getToken(ExprParser::TRUE, 0);
}

tree::TerminalNode* ExprParser::FactorContext::FALSE() {
  return getToken(ExprParser::FALSE, 0);
}


size_t ExprParser::FactorContext::getRuleIndex() const {
  return ExprParser::RuleFactor;
}


std::any ExprParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::FactorContext* ExprParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 82, ExprParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(490);
      match(ExprParser::NOT);
      setState(491);
      factor();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(492);
      match(ExprParser::LPAREN);
      setState(493);
      expression();
      setState(494);
      match(ExprParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(496);
      arrayIndexing();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(497);
      number();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(498);
      characterConstant();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(499);
      stringConstant();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(500);
      functionCall();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(501);
      variable();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(502);
      match(ExprParser::TRUE);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(503);
      match(ExprParser::FALSE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

ExprParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::NumberContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::NumberContext::REAL() {
  return getToken(ExprParser::REAL, 0);
}


size_t ExprParser::NumberContext::getRuleIndex() const {
  return ExprParser::RuleNumber;
}


std::any ExprParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::NumberContext* ExprParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 84, ExprParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
    _la = _input->LA(1);
    if (!(_la == ExprParser::INTEGER

    || _la == ExprParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
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

//----------------- CharacterConstantContext ------------------------------------------------------------------

ExprParser::CharacterConstantContext::CharacterConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CharacterConstantContext::CHARACTER() {
  return getToken(ExprParser::CHARACTER, 0);
}


size_t ExprParser::CharacterConstantContext::getRuleIndex() const {
  return ExprParser::RuleCharacterConstant;
}


std::any ExprParser::CharacterConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCharacterConstant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CharacterConstantContext* ExprParser::characterConstant() {
  CharacterConstantContext *_localctx = _tracker.createInstance<CharacterConstantContext>(_ctx, getState());
  enterRule(_localctx, 86, ExprParser::RuleCharacterConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(ExprParser::CHARACTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringConstantContext ------------------------------------------------------------------

ExprParser::StringConstantContext::StringConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::StringConstantContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}


size_t ExprParser::StringConstantContext::getRuleIndex() const {
  return ExprParser::RuleStringConstant;
}


std::any ExprParser::StringConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStringConstant(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StringConstantContext* ExprParser::stringConstant() {
  StringConstantContext *_localctx = _tracker.createInstance<StringConstantContext>(_ctx, getState());
  enterRule(_localctx, 88, ExprParser::RuleStringConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    match(ExprParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ExprParser::initialize() {
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
}
