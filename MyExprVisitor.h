#ifndef MY_EXPR_VISITOR_H
#define MY_EXPR_VISITOR_H

#include "ExprBaseVisitor.h"
#include "SymbolTable.h"
#include "ExprParser.h"
#include "TypedefStructure.h"

class MyExprVisitor : public ExprBaseVisitor {
public:
    MyExprVisitor();

    antlrcpp::Any visitProg(ExprParser::ProgContext *context) override;
    antlrcpp::Any visitDeclaration(ExprParser::DeclarationContext *context) override;
    antlrcpp::Any visitConstDeclaration(ExprParser::ConstDeclarationContext *context) override;
    antlrcpp::Any visitVarDeclaration(ExprParser::VarDeclarationContext *context) override;
    antlrcpp::Any visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *context) override;
    antlrcpp::Any visitFunctionDeclaration(ExprParser::FunctionDeclarationContext *context) override;
    antlrcpp::Any visitTypeSpecification(ExprParser::TypeSpecificationContext *context) override;
    antlrcpp::Any visitArrayIndexing(ExprParser::ArrayIndexingContext *ctx) override;
    antlrcpp::Any visitVariable(ExprParser::VariableContext *ctx) override;
    antlrcpp::Any visitAssignment(ExprParser::AssignmentContext *ctx) override;

    antlrcpp::Any visitConstExpression(ExprParser::ConstExpressionContext *context) override;
    antlrcpp::Any visitExpression(ExprParser::ExpressionContext *ctx) override;
    antlrcpp::Any visitSimpleExpression(ExprParser::SimpleExpressionContext *ctx) override;
    antlrcpp::Any visitTerm(ExprParser::TermContext *ctx) override;
    antlrcpp::Any visitFactor(ExprParser::FactorContext *ctx) override;
    antlrcpp::Any visitStatement(ExprParser::StatementContext *ctx) override;
    antlrcpp::Any visitWriteln(ExprParser::WritelnContext *ctx) override;
    antlrcpp::Any visitIfStatement(ExprParser::IfStatementContext *ctx) override;
    antlrcpp::Any visitForStatement(ExprParser::ForStatementContext *ctx) override;



    void printSymbolTables();
    void printParseTree(antlr4::tree::ParseTree *node, ExprParser *parser, std::ostream &output, int depth = 0);

    virtual antlrcpp::Any visitLdxStatement(ExprParser::LdxStatementContext *ctx) override;
    virtual antlrcpp::Any visitLdchStatement(ExprParser::LdchStatementContext *ctx) override;
    virtual antlrcpp::Any visitFunctionCall(ExprParser::FunctionCallContext *ctx) override;

    std::string generatedCode;

    void appendInstruction(const std::string &instruction) {
        generatedCode += instruction + "\n";
    }

    void printGeneratedCode() {
        std::cout << generatedCode;
    }
private:
    SymbolTable symbolTable;
    int labelCounter = 0;
    std::string generateUniqueLabel(const std::string &prefix);
};

#endif // MY_EXPR_VISITOR_H
