
// Generated from Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual std::any visitProg(ExprParser::ProgContext *context) = 0;

    virtual std::any visitComment(ExprParser::CommentContext *context) = 0;

    virtual std::any visitProgramDeclaration(ExprParser::ProgramDeclarationContext *context) = 0;

    virtual std::any visitDeclaration(ExprParser::DeclarationContext *context) = 0;

    virtual std::any visitConstDeclaration(ExprParser::ConstDeclarationContext *context) = 0;

    virtual std::any visitConstAssignmentList(ExprParser::ConstAssignmentListContext *context) = 0;

    virtual std::any visitConstExpression(ExprParser::ConstExpressionContext *context) = 0;

    virtual std::any visitVarDeclaration(ExprParser::VarDeclarationContext *context) = 0;

    virtual std::any visitVarDeclarationList(ExprParser::VarDeclarationListContext *context) = 0;

    virtual std::any visitVarIdentifierList(ExprParser::VarIdentifierListContext *context) = 0;

    virtual std::any visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *context) = 0;

    virtual std::any visitTypeDefList(ExprParser::TypeDefListContext *context) = 0;

    virtual std::any visitTypeDefElement(ExprParser::TypeDefElementContext *context) = 0;

    virtual std::any visitTypeIdentifier(ExprParser::TypeIdentifierContext *context) = 0;

    virtual std::any visitTypeSpecification(ExprParser::TypeSpecificationContext *context) = 0;

    virtual std::any visitSimpleType(ExprParser::SimpleTypeContext *context) = 0;

    virtual std::any visitEnumeratedType(ExprParser::EnumeratedTypeContext *context) = 0;

    virtual std::any visitSubrange(ExprParser::SubrangeContext *context) = 0;

    virtual std::any visitFunctionDeclaration(ExprParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitParamDeclaration(ExprParser::ParamDeclarationContext *context) = 0;

    virtual std::any visitParamIdentifierList(ExprParser::ParamIdentifierListContext *context) = 0;

    virtual std::any visitStatement(ExprParser::StatementContext *context) = 0;

    virtual std::any visitMultiDimensionalArrayIndexing(ExprParser::MultiDimensionalArrayIndexingContext *context) = 0;

    virtual std::any visitAssignment(ExprParser::AssignmentContext *context) = 0;

    virtual std::any visitWriteln(ExprParser::WritelnContext *context) = 0;

    virtual std::any visitWritelnArg(ExprParser::WritelnArgContext *context) = 0;

    virtual std::any visitWritelnExpression(ExprParser::WritelnExpressionContext *context) = 0;

    virtual std::any visitForStatement(ExprParser::ForStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(ExprParser::CompoundStatementContext *context) = 0;

    virtual std::any visitIfStatement(ExprParser::IfStatementContext *context) = 0;

    virtual std::any visitStatement_or_comment(ExprParser::Statement_or_commentContext *context) = 0;

    virtual std::any visitStatement_without_semicolon(ExprParser::Statement_without_semicolonContext *context) = 0;

    virtual std::any visitAssignment_without_semicolon(ExprParser::Assignment_without_semicolonContext *context) = 0;

    virtual std::any visitLdxStatement(ExprParser::LdxStatementContext *context) = 0;

    virtual std::any visitLdchStatement(ExprParser::LdchStatementContext *context) = 0;

    virtual std::any visitVariable(ExprParser::VariableContext *context) = 0;

    virtual std::any visitFunctionCall(ExprParser::FunctionCallContext *context) = 0;

    virtual std::any visitArrayIndexing(ExprParser::ArrayIndexingContext *context) = 0;

    virtual std::any visitExpression(ExprParser::ExpressionContext *context) = 0;

    virtual std::any visitSimpleExpression(ExprParser::SimpleExpressionContext *context) = 0;

    virtual std::any visitTerm(ExprParser::TermContext *context) = 0;

    virtual std::any visitFactor(ExprParser::FactorContext *context) = 0;

    virtual std::any visitNumber(ExprParser::NumberContext *context) = 0;

    virtual std::any visitCharacterConstant(ExprParser::CharacterConstantContext *context) = 0;

    virtual std::any visitStringConstant(ExprParser::StringConstantContext *context) = 0;


};

