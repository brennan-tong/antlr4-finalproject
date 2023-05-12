#include "MyExprVisitor.h"
#include "ExprVisitor.h"
#include "antlr4-runtime.h"

#include <iostream>

MyExprVisitor::MyExprVisitor() : symbolTable() {}

antlrcpp::Any MyExprVisitor::visitProg(ExprParser::ProgContext *context) {

    symbolTable.pushScope();

    std::string programIdentifier = context->programDeclaration().at(0)->IDENTIFIER().at(0)->getText();
    symbolTable.addProgram(programIdentifier);

    // Add start of the program
    appendInstruction("START " + programIdentifier);

    for (auto declaration : context->declaration()) {
        visit(declaration);
    }

    // Add the start of the main function
    appendInstruction("MAIN:");
    appendInstruction("LDA ZERO");
    appendInstruction("STA RETADR");
    appendInstruction("JSUB " + programIdentifier);

    // Check for undeclared variables after adding declarations to the symbol table.
    for (auto statement : context->statement()) {
        visit(statement);
    }

    // Add end of the program
    appendInstruction("LDA RETADR");
    appendInstruction("RSUB");
    appendInstruction("END");

    symbolTable.print();
    symbolTable.popScope();

    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitDeclaration(ExprParser::DeclarationContext *context) {
    return visitChildren(context);
}

int generateUniqueId() {
    static int id = 0;
    return id++;
}

antlrcpp::Any MyExprVisitor::visitForStatement(ExprParser::ForStatementContext *ctx) {
    std::string loopIdentifier = "LOOP_" + std::to_string(generateUniqueId());
    std::string endLoopIdentifier = "ENDLOOP_" + std::to_string(generateUniqueId());

    // Visit the assignment
    visit(ctx->IDENTIFIER());
    visit(ctx->ASSIGN());
    visit(ctx->expression(0));

    appendInstruction(loopIdentifier + ":");

    // Visit the loop condition
    visit(ctx->TO());
    visit(ctx->expression(1));
    appendInstruction("JEQ " + endLoopIdentifier);

    // Visit the loop body
    visit(ctx->compoundStatement());
    appendInstruction("J " + loopIdentifier);
    appendInstruction(endLoopIdentifier + ":");

    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitArrayIndexing(ExprParser::ArrayIndexingContext *ctx) {
    visit(ctx->variable());
    for (auto exprCtx : ctx->expression()) {
        if (!symbolTable.isDeclared(exprCtx->getText())) {
            std::cerr << "Error: Undeclared symbol " << exprCtx->getText() << " used." << std::endl;
        }
        visit(exprCtx);
    }
    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitVariable(ExprParser::VariableContext *ctx) {
    std::string identifier = ctx->IDENTIFIER()->getText();

    if (!symbolTable.isDeclared(identifier)) {
        std::cerr << "Error: Undeclared symbol " << identifier << " used." << std::endl;
    }
    return nullptr;
}

std::any MyExprVisitor::visitConstExpression(ExprParser::ConstExpressionContext *context) {
    ExprParser::SimpleExpressionContext *simpleExpr = context->simpleExpression(0);
    ExprParser::TermContext *term = simpleExpr->term(0);
    ExprParser::FactorContext *factor = term->factor(0);

    if (factor->number()) {
        if (factor->number()->INTEGER()) {
            return stoi(factor->number()->INTEGER()->getText());
        } else if (factor->number()->REAL()) {
            return stof(factor->number()->REAL()->getText());
        }
    } else if (factor->stringConstant()) {
        return factor->stringConstant()->getText().substr(1, factor->stringConstant()->getText().length() - 2);
    } else if (factor->TRUE()) {
        return true;
    } else if (factor->FALSE()) {
        return false;
    }

    return 0;
}


antlrcpp::Any MyExprVisitor::visitConstDeclaration(ExprParser::ConstDeclarationContext *context) {
    size_t numDeclarations = context->constAssignmentList()->IDENTIFIER().size();
    for (size_t i = 0; i < numDeclarations; ++i) {
        std::string identifier = context->constAssignmentList()->IDENTIFIER(i)->getText();
        std::any value = visitConstExpression(context->constAssignmentList()->constExpression(i));
        symbolTable.addConstant(identifier, value);

        std::string valueString;
        if (value.type() == typeid(int)) {
            valueString = std::to_string(std::any_cast<int>(value));
        } else if (value.type() == typeid(float)) {
            valueString = std::to_string(std::any_cast<float>(value));
        } else if (value.type() == typeid(std::string)) {
            valueString = std::any_cast<std::string>(value);
        } else if (value.type() == typeid(bool)) {
            valueString = std::any_cast<bool>(value) ? "true" : "false";
        }

        appendInstruction("DC " + identifier + "," + valueString);
    }
    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitVarDeclaration(ExprParser::VarDeclarationContext *context) {
    for (auto varDeclListCtx : context->varDeclarationList()) {
        for (auto id : varDeclListCtx->varIdentifierList()->IDENTIFIER()) {
            std::string identifier = id->getText();
            std::string type = varDeclListCtx->typeIdentifier()->getText();
            if (symbolTable.isDeclaredInCurrentScope(identifier)) {
                std::cerr << "Error: Variable " << identifier << " is already declared in the current scope.\n";
            } else {
                symbolTable.addVariable(identifier, type);
            }
            appendInstruction("DS " + identifier + "," + type);
        }
    }
    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitTypeDefDeclaration(ExprParser::TypeDefDeclarationContext *context) {
    for (auto typeDefElemCtx : context->typeDefList()->typeDefElement()) {
        std::string identifier = typeDefElemCtx->IDENTIFIER()->getText();
        std::string type = typeDefElemCtx->typeSpecification()->getText();
        if (symbolTable.isDeclaredInCurrentScope(identifier)) {
            std::cerr << "Error: Typedef " << identifier << " is already declared in the current scope.\n";
        } else {
            symbolTable.addTypedef(identifier, type);
        }
    }
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitFunctionCall(ExprParser::FunctionCallContext *ctx) {
    std::string identifier = ctx->IDENTIFIER()->getText();
    if (!symbolTable.isDeclared(identifier)) {
        std::cerr << "Error: Undeclared function " << identifier << " called." << std::endl;
    } else {
        visitChildren(ctx);
    }
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitFunctionDeclaration(ExprParser::FunctionDeclarationContext *context) {
    std::string identifier = context->IDENTIFIER()->getText();
    std::string returnType = context->typeIdentifier()->getText();
    if (symbolTable.isDeclaredInCurrentScope(identifier)) {
        std::cerr << "Error: Function " << identifier << " is already declared in the current scope.\n";
    } else {
        symbolTable.addFunction(identifier, returnType);
    }

    symbolTable.pushScope();
    for (auto paramCtx : context->paramDeclaration()) {
        std::string paramType = paramCtx->typeIdentifier()->getText();
        for (auto paramIdCtx : paramCtx->paramIdentifierList()->IDENTIFIER()) {
            std::string paramId = paramIdCtx->getText();
            if (symbolTable.isDeclaredInCurrentScope(paramId)) {
                std::cerr << "Error: Parameter " << paramId << " is already declared in the current scope.\n";
            } else {
                symbolTable.addVariable(paramId, paramType); // now also passing the type
            }
        }
    }

    visitChildren(context);

    symbolTable.popScope();
//    symbolTable.print();

    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitAssignment(ExprParser::AssignmentContext *ctx) {
    std::string variableIdentifier = ctx->variable()->IDENTIFIER()->getText();
    ExprParser::ExpressionContext *expressionCtx = ctx->expression();

    visit(expressionCtx);

    appendInstruction("STX " + variableIdentifier);

    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitExpression(ExprParser::ExpressionContext *ctx) {
    visit(ctx->simpleExpression(0));

    for (size_t i = 0; i < ctx->simpleExpression().size() - 1; ++i) {
        std::string op = ctx->getText();
        visit(ctx->simpleExpression(i + 1));

        if (op == "=") {
            appendInstruction("COMP");
        } else if (op == "<>") {
            appendInstruction("COMP");
            appendInstruction("JNE");
        } else if (op == "<") {
            appendInstruction("COMP");
            appendInstruction("JLT");
        } else if (op == "<=") {
            appendInstruction("COMP");
            appendInstruction("JLE");
        } else if (op == ">") {
            appendInstruction("COMP");
            appendInstruction("JGT");
        } else if (op == ">=") {
            appendInstruction("COMP");
            appendInstruction("JGE");
        }
    }

    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitTypeSpecification(ExprParser::TypeSpecificationContext *ctx) {
    if (ctx->ARRAY().size() == 1) {
        ExprParser::SubrangeContext *subrangeCtx = ctx->subrange(0);
        std::string elementType = ctx->simpleType()->getText();
        return Typedef::array(*subrangeCtx, elementType);
    } else if (ctx->ARRAY().size() == 2) {
        ExprParser::SubrangeContext *outerSubrangeCtx = ctx->subrange(0);
        ExprParser::SubrangeContext *innerSubrangeCtx = ctx->subrange(1);
        std::string elementType = ctx->simpleType()->getText();
        return Typedef::arrayOfArray(*outerSubrangeCtx, *innerSubrangeCtx, elementType);
    } else if (ctx->ARRAY().size() == 3) {
        ExprParser::SubrangeContext *outerSubrangeCtx = ctx->subrange(0);
        ExprParser::SubrangeContext *middleSubrangeCtx = ctx->subrange(1);
        ExprParser::SubrangeContext *innerSubrangeCtx = ctx->subrange(2);
        std::string elementType = ctx->simpleType()->getText();
        return Typedef::arrayOfArrayOfArray(*outerSubrangeCtx, *middleSubrangeCtx, *innerSubrangeCtx, elementType);
    } else {
        // subrange case
        return visitChildren(ctx);
    }
}


antlrcpp::Any MyExprVisitor::visitSimpleExpression(ExprParser::SimpleExpressionContext *ctx) {
    if (ctx->term().size() == 1) {
        return visit(ctx->term(0));
    }

    visit(ctx->term(0));
    for (size_t i = 0; i < ctx->PLUSOP().size() || i < ctx->MINUSOP().size(); i++) {
        std::string op = "";
        if (i < ctx->PLUSOP().size()) {
            op = ctx->PLUSOP(i)->getText();
        } else {
            op = ctx->MINUSOP(i)->getText();
        }

        visit(ctx->term(i + 1));

        if (op == "+") {
            appendInstruction("ADD");
        } else if (op == "-") {
            appendInstruction("SUB");
        }
    }

    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitTerm(ExprParser::TermContext *ctx) {
    if (ctx->factor().size() == 1) {
        return visit(ctx->factor(0));
    }

    visit(ctx->factor(0));
    for (size_t i = 0; i < ctx->MULTOP().size() || i < ctx->DIVOP().size() || i < ctx->DIV().size() || i < ctx->MOD().size(); i++) {
        std::string op = "";
        if (i < ctx->MULTOP().size()) {
            op = ctx->MULTOP(i)->getText();
        } else if (i < ctx->DIVOP().size()) {
            op = ctx->DIVOP(i)->getText();
        } else if (i < ctx->DIV().size()) {
            op = ctx->DIV(i)->getText();
        } else {
            op = ctx->MOD(i)->getText();
        }

        visit(ctx->factor(i + 1));

        if (op == "*") {
            appendInstruction("MUL");
        } else if (op == "/") {
            appendInstruction("DIV");
        } else if (op == "DIV") {
            appendInstruction("DIV");
        } else if (op == "MOD") {
            appendInstruction("MOD");
        }
    }

    return nullptr;
}


antlrcpp::Any MyExprVisitor::visitFactor(ExprParser::FactorContext *ctx) {
    if (ctx->variable()) {
        visit(ctx->variable());
        std::string identifier = ctx->variable()->IDENTIFIER()->getText();
        appendInstruction("LDX " + identifier);
    } else if (ctx->number()) {
        std::string value;
        if (ctx->number()->INTEGER()) {
            value = ctx->number()->INTEGER()->getText();
        } else if (ctx->number()->REAL()) {
            value = ctx->number()->REAL()->getText();
        }
        appendInstruction("LDX " + value);
    } else if (ctx->stringConstant()) {
        std::string value = ctx->stringConstant()->getText().substr(1, ctx->stringConstant()->getText().length() - 2);
        appendInstruction("LDCH " + value);
    } else if (ctx->expression()) {
        visit(ctx->expression());
    } else if (ctx->functionCall()) {
        visit(ctx->functionCall());
    } else if (ctx->arrayIndexing()) {
        visit(ctx->arrayIndexing());
    }
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitStatement(ExprParser::StatementContext *ctx) {
    if (ctx->assignment()) {
        visit(ctx->assignment());
    } else if (ctx->writeln()) {
        visit(ctx->writeln());
    }

    if (ctx->ifStatement()) {
        visit(ctx->ifStatement());
    }

    if (ctx->forStatement()) {
        visit(ctx->forStatement());
    }

    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitWriteln(ExprParser::WritelnContext *ctx) {
  auto writelnArgs = ctx->writelnArg();
  std::vector<std::pair<int, int>> positions;
  std::vector<std::pair<int, int>> colon_positions;

  for (size_t i = 0; i < writelnArgs.size(); ++i) {
    auto expr = writelnArgs[i]->writelnExpression();
    positions.emplace_back(expr->getStart()->getLine(),
                           expr->getStart()->getCharPositionInLine());

    if (writelnArgs[i]->COLON() != nullptr) {
      colon_positions.emplace_back(writelnArgs[i]->COLON()->getSymbol()->getLine(),
                                   writelnArgs[i]->COLON()->getSymbol()->getCharPositionInLine());
    }
  }

  // Process positions and colon_positions...

  return visitChildren(ctx);
}


std::string MyExprVisitor::generateUniqueLabel(const std::string &prefix) {
    std::string label = prefix + std::to_string(labelCounter);
    labelCounter++;
    return label;
}

antlrcpp::Any MyExprVisitor::visitIfStatement(ExprParser::IfStatementContext *ctx) {
    std::string ifLabel = generateUniqueLabel("IF");
    std::string elseLabel = generateUniqueLabel("ELSE");
    std::string endifLabel = generateUniqueLabel("ENDIF");

    visit(ctx->expression());
    appendInstruction("JZ " + elseLabel);
    appendInstruction(ifLabel + ":");
    visit(ctx->statement_or_comment(0));
    appendInstruction("JMP " + endifLabel);
    appendInstruction(elseLabel + ":");
    if (ctx->ELSE()) {
        visit(ctx->statement_or_comment(1));
    }
    appendInstruction(endifLabel + ":");

    return nullptr;
}

void MyExprVisitor::printSymbolTables() {
	symbolTable.print();
}

void MyExprVisitor::printParseTree(antlr4::tree::ParseTree *node, ExprParser *parser, std::ostream &output, int depth) {
    if (!node) {
        return;
    }

    for (int i = 0; i < depth; ++i) {
        output << " ";
    }

    auto ruleContext = dynamic_cast<antlr4::ParserRuleContext*>(node);
    if (ruleContext) {
        output << parser->getRuleNames()[ruleContext->getRuleIndex()];
    } else {
        output << node->toString();
    }

    output << std::endl;

    for (size_t i = 0; i < node->children.size(); ++i) {
        printParseTree(node->children[i], parser, output, depth + 1);
    }
}

antlrcpp::Any MyExprVisitor::visitLdxStatement(ExprParser::LdxStatementContext *ctx) {
    visit(ctx->expression());
    return nullptr;
}

antlrcpp::Any MyExprVisitor::visitLdchStatement(ExprParser::LdchStatementContext *ctx) {
    visit(ctx->expression());
    return nullptr;
}
