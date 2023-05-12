#include "ExprLexer.h"
#include "ExprParser.h"
#include "MyExprVisitor.h"
#include "SymbolTable.h"
#include <antlr4-runtime.h>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace antlr4;

struct MyToken {
  std::string text;
  int type;
};

std::string get_label(int);

/**
   1. Outputs Parse Tree
   2. Outputs Symbol Table and scoping level
   - Identifier name
   - Identifier kind
   3. Each typedef
   - scaler type
   - array: element type, element count, index type
*/
int main() {
  std::string inputFileName = "test-in.txt";
  std::ifstream inputFile(inputFileName);

  if (!inputFile) {
    std::cerr << "Could not open the input file." << std::endl;
    return 2;
  }

  ANTLRInputStream input(inputFile);
  ExprLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  ExprParser parser(&tokens);

  tree::ParseTree *tree = parser.prog();
  MyExprVisitor visitor;
  visitor.visit(tree);

  // Output parse tree
  std::ofstream parseTreeOutput("parse_tree_output.txt");
  visitor.printParseTree(tree, &parser, parseTreeOutput);
  parseTreeOutput.close();

  std::cout << "-------------------------------" << std::endl;
  std::cout << "SIC/XE INSTRUCTION SET:\n" << std::endl;

  visitor.printGeneratedCode();

}
