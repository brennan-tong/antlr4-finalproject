
// Generated from Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
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

  enum {
    RuleProg = 0, RuleComment = 1, RuleProgramDeclaration = 2, RuleDeclaration = 3, 
    RuleConstDeclaration = 4, RuleConstAssignmentList = 5, RuleConstExpression = 6, 
    RuleVarDeclaration = 7, RuleVarDeclarationList = 8, RuleVarIdentifierList = 9, 
    RuleTypeDefDeclaration = 10, RuleTypeDefList = 11, RuleTypeDefElement = 12, 
    RuleTypeIdentifier = 13, RuleTypeSpecification = 14, RuleSimpleType = 15, 
    RuleEnumeratedType = 16, RuleSubrange = 17, RuleFunctionDeclaration = 18, 
    RuleParamDeclaration = 19, RuleParamIdentifierList = 20, RuleStatement = 21, 
    RuleMultiDimensionalArrayIndexing = 22, RuleAssignment = 23, RuleWriteln = 24, 
    RuleWritelnArg = 25, RuleWritelnExpression = 26, RuleForStatement = 27, 
    RuleCompoundStatement = 28, RuleIfStatement = 29, RuleStatement_or_comment = 30, 
    RuleStatement_without_semicolon = 31, RuleAssignment_without_semicolon = 32, 
    RuleLdxStatement = 33, RuleLdchStatement = 34, RuleVariable = 35, RuleFunctionCall = 36, 
    RuleArrayIndexing = 37, RuleExpression = 38, RuleSimpleExpression = 39, 
    RuleTerm = 40, RuleFactor = 41, RuleNumber = 42, RuleCharacterConstant = 43, 
    RuleStringConstant = 44
  };

  explicit ExprParser(antlr4::TokenStream *input);

  ExprParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ExprParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class CommentContext;
  class ProgramDeclarationContext;
  class DeclarationContext;
  class ConstDeclarationContext;
  class ConstAssignmentListContext;
  class ConstExpressionContext;
  class VarDeclarationContext;
  class VarDeclarationListContext;
  class VarIdentifierListContext;
  class TypeDefDeclarationContext;
  class TypeDefListContext;
  class TypeDefElementContext;
  class TypeIdentifierContext;
  class TypeSpecificationContext;
  class SimpleTypeContext;
  class EnumeratedTypeContext;
  class SubrangeContext;
  class FunctionDeclarationContext;
  class ParamDeclarationContext;
  class ParamIdentifierListContext;
  class StatementContext;
  class MultiDimensionalArrayIndexingContext;
  class AssignmentContext;
  class WritelnContext;
  class WritelnArgContext;
  class WritelnExpressionContext;
  class ForStatementContext;
  class CompoundStatementContext;
  class IfStatementContext;
  class Statement_or_commentContext;
  class Statement_without_semicolonContext;
  class Assignment_without_semicolonContext;
  class LdxStatementContext;
  class LdchStatementContext;
  class VariableContext;
  class FunctionCallContext;
  class ArrayIndexingContext;
  class ExpressionContext;
  class SimpleExpressionContext;
  class TermContext;
  class FactorContext;
  class NumberContext;
  class CharacterConstantContext;
  class StringConstantContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<ProgramDeclarationContext *> programDeclaration();
    ProgramDeclarationContext* programDeclaration(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  ProgramDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ProgramDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramDeclarationContext* programDeclaration();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstDeclarationContext *constDeclaration();
    VarDeclarationContext *varDeclaration();
    TypeDefDeclarationContext *typeDefDeclaration();
    FunctionDeclarationContext *functionDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ConstDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    ConstAssignmentListContext *constAssignmentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstDeclarationContext* constDeclaration();

  class  ConstAssignmentListContext : public antlr4::ParserRuleContext {
  public:
    ConstAssignmentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<ConstExpressionContext *> constExpression();
    ConstExpressionContext* constExpression(size_t i);
    std::vector<StringConstantContext *> stringConstant();
    StringConstantContext* stringConstant(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstAssignmentListContext* constAssignmentList();

  class  ConstExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstExpressionContext* constExpression();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    std::vector<VarDeclarationListContext *> varDeclarationList();
    VarDeclarationListContext* varDeclarationList(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationContext* varDeclaration();

  class  VarDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarIdentifierListContext *varIdentifierList();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationListContext* varDeclarationList();

  class  VarIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    VarIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarIdentifierListContext* varIdentifierList();

  class  TypeDefDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeDefDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    TypeDefListContext *typeDefList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefDeclarationContext* typeDefDeclaration();

  class  TypeDefListContext : public antlr4::ParserRuleContext {
  public:
    TypeDefListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeDefElementContext *> typeDefElement();
    TypeDefElementContext* typeDefElement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefListContext* typeDefList();

  class  TypeDefElementContext : public antlr4::ParserRuleContext {
  public:
    TypeDefElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *SEMICOLON();
    TypeSpecificationContext *typeSpecification();
    SimpleTypeContext *simpleType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefElementContext* typeDefElement();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  TypeSpecificationContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ARRAY();
    antlr4::tree::TerminalNode* ARRAY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBRACKET();
    antlr4::tree::TerminalNode* LBRACKET(size_t i);
    std::vector<SubrangeContext *> subrange();
    SubrangeContext* subrange(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACKET();
    antlr4::tree::TerminalNode* RBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *COMMA();
    SimpleTypeContext *simpleType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecificationContext* typeSpecification();

  class  SimpleTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    SubrangeContext *subrange();
    EnumeratedTypeContext *enumeratedType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeContext* simpleType();

  class  EnumeratedTypeContext : public antlr4::ParserRuleContext {
  public:
    EnumeratedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratedTypeContext* enumeratedType();

  class  SubrangeContext : public antlr4::ParserRuleContext {
  public:
    SubrangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RANGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubrangeContext* subrange();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<ParamDeclarationContext *> paramDeclaration();
    ParamDeclarationContext* paramDeclaration(size_t i);
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  ParamDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParamDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamIdentifierListContext *paramIdentifierList();
    antlr4::tree::TerminalNode *COLON();
    TypeIdentifierContext *typeIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamDeclarationContext* paramDeclaration();

  class  ParamIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    ParamIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamIdentifierListContext* paramIdentifierList();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    WritelnContext *writeln();
    ForStatementContext *forStatement();
    CompoundStatementContext *compoundStatement();
    IfStatementContext *ifStatement();
    CommentContext *comment();
    LdxStatementContext *ldxStatement();
    LdchStatementContext *ldchStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  MultiDimensionalArrayIndexingContext : public antlr4::ParserRuleContext {
  public:
    MultiDimensionalArrayIndexingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    std::vector<antlr4::tree::TerminalNode *> LBRACKET();
    antlr4::tree::TerminalNode* LBRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACKET();
    antlr4::tree::TerminalNode* RBRACKET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiDimensionalArrayIndexingContext* multiDimensionalArrayIndexing();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();
    MultiDimensionalArrayIndexingContext *multiDimensionalArrayIndexing();
    ArrayIndexingContext *arrayIndexing();
    VariableContext *variable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  WritelnContext : public antlr4::ParserRuleContext {
  public:
    WritelnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITELN();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<WritelnArgContext *> writelnArg();
    WritelnArgContext* writelnArg(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritelnContext* writeln();

  class  WritelnArgContext : public antlr4::ParserRuleContext {
  public:
    WritelnArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WritelnExpressionContext *writelnExpression();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritelnArgContext* writelnArg();

  class  WritelnExpressionContext : public antlr4::ParserRuleContext {
  public:
    WritelnExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    StringConstantContext *stringConstant();
    MultiDimensionalArrayIndexingContext *multiDimensionalArrayIndexing();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritelnExpressionContext* writelnExpression();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DO();
    CompoundStatementContext *compoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<Statement_or_commentContext *> statement_or_comment();
    Statement_or_commentContext* statement_or_comment(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  Statement_or_commentContext : public antlr4::ParserRuleContext {
  public:
    Statement_or_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_without_semicolonContext *statement_without_semicolon();
    StatementContext *statement();
    CommentContext *comment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_or_commentContext* statement_or_comment();

  class  Statement_without_semicolonContext : public antlr4::ParserRuleContext {
  public:
    Statement_without_semicolonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_without_semicolonContext *assignment_without_semicolon();
    WritelnContext *writeln();
    ForStatementContext *forStatement();
    CompoundStatementContext *compoundStatement();
    IfStatementContext *ifStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_without_semicolonContext* statement_without_semicolon();

  class  Assignment_without_semicolonContext : public antlr4::ParserRuleContext {
  public:
    Assignment_without_semicolonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    ArrayIndexingContext *arrayIndexing();
    VariableContext *variable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_without_semicolonContext* assignment_without_semicolon();

  class  LdxStatementContext : public antlr4::ParserRuleContext {
  public:
    LdxStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LDX();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LdxStatementContext* ldxStatement();

  class  LdchStatementContext : public antlr4::ParserRuleContext {
  public:
    LdchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LDCH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LdchStatementContext* ldchStatement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  ArrayIndexingContext : public antlr4::ParserRuleContext {
  public:
    ArrayIndexingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *LBRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayIndexingContext* arrayIndexing();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NE();
    antlr4::tree::TerminalNode* NE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LTEQ();
    antlr4::tree::TerminalNode* LTEQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GTEQ();
    antlr4::tree::TerminalNode* GTEQ(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUSOP();
    antlr4::tree::TerminalNode* PLUSOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUSOP();
    antlr4::tree::TerminalNode* MINUSOP(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTOP();
    antlr4::tree::TerminalNode* MULTOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVOP();
    antlr4::tree::TerminalNode* DIVOP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD();
    antlr4::tree::TerminalNode* MOD(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    ArrayIndexingContext *arrayIndexing();
    NumberContext *number();
    CharacterConstantContext *characterConstant();
    StringConstantContext *stringConstant();
    FunctionCallContext *functionCall();
    VariableContext *variable();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  CharacterConstantContext : public antlr4::ParserRuleContext {
  public:
    CharacterConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterConstantContext* characterConstant();

  class  StringConstantContext : public antlr4::ParserRuleContext {
  public:
    StringConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringConstantContext* stringConstant();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

