#pragma once

#include <stack>
#include <map>
#include <string>
#include <vector>
#include "TypedefStructure.h"
#include <antlr4-runtime.h>
#include <ostream>
#include <variant>

enum class IdentifierKind {VARIABLE, CONSTANT, TYPEDEF, FUNCTION, PROGRAM};

struct SymbolTableEntry {
    std::string identifier;
    IdentifierKind kind;
    std::variant<int, float, bool, std::string> value;
    std::string type;
};

class SymbolTable {
public:
    SymbolTable();
    void pushScope();
    void popScope();
    void addConstant(const std::string &identifier, const std::any &value);

    void addVariable(const std::string &identifier, const std::string &type);
    void addTypedef(const std::string &identifier, const std::string &typeDef);
    void addFunction(const std::string &identifier, const std::string &returnType);
    bool isDeclaredInCurrentScope(const std::string &identifier) const;
    void addProgram(const std::string &identifier);
    void print(std::ostream &os = std::cout) const;

    bool isDeclared(const std::string& identifier) const;

private:
    std::stack<std::map<std::string, SymbolTableEntry>> scopes;
    std::stack<std::vector<std::string>> orderedIdentifiers;
    std::string programName;
    std::variant<int, float, bool, std::string> anyToVariant(const std::any& value);
};
