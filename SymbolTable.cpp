#include "SymbolTable.h"
#include <string>
#include <iomanip>
#include <map>


SymbolTable::SymbolTable() {}

void SymbolTable::pushScope() {
    scopes.push(std::map<std::string, SymbolTableEntry>());
    orderedIdentifiers.push(std::vector<std::string>());
}

void SymbolTable::popScope() {
    if (!scopes.empty()) {
        scopes.pop();
    }
    if (!orderedIdentifiers.empty()) {
        orderedIdentifiers.pop();
    }
}

std::variant<int, float, bool, std::string> SymbolTable::anyToVariant(const std::any& value) {
    if (value.type() == typeid(int)) {
        return std::any_cast<int>(value);
    } else if (value.type() == typeid(float)) {
        return std::any_cast<float>(value);
    } else if (value.type() == typeid(bool)) {
        return std::any_cast<bool>(value);
    } else if (value.type() == typeid(std::string)) {
        return std::any_cast<std::string>(value);
    }
    throw std::runtime_error("Unsupported type in anyToVariant");
}

void SymbolTable::addConstant(const std::string &identifier, const std::any &value) {
    SymbolTableEntry entry;
    entry.identifier = identifier;
    entry.kind = IdentifierKind::CONSTANT;
    entry.value = anyToVariant(value);
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

void SymbolTable::addVariable(const std::string &identifier, const std::string &type) {
    SymbolTableEntry entry = {identifier, IdentifierKind::VARIABLE};
    entry.type = type;
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

void SymbolTable::addTypedef(const std::string &identifier, const std::string &typeDef) {
    SymbolTableEntry entry = {identifier, IdentifierKind::TYPEDEF};
    entry.type = typeDef;
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

void SymbolTable::addFunction(const std::string &identifier, const std::string &returnType) {
    SymbolTableEntry entry = {identifier, IdentifierKind::FUNCTION};
    entry.type = returnType;
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

bool SymbolTable::isDeclaredInCurrentScope(const std::string &identifier) const {
    return scopes.top().find(identifier) != scopes.top().end();
}

void SymbolTable::addProgram(const std::string &identifier) {
    SymbolTableEntry entry = {identifier, IdentifierKind::PROGRAM};
    scopes.top()[identifier] = entry;
    orderedIdentifiers.top().push_back(identifier);
}

bool SymbolTable::isDeclared(const std::string& identifier) const {
    std::stack<std::map<std::string, SymbolTableEntry>> tempScopes = scopes;
    while (!tempScopes.empty()) {
        if (tempScopes.top().find(identifier) != tempScopes.top().end()) {
            return true;
        }
        tempScopes.pop();
    }
    return false;
}



void SymbolTable::print(std::ostream &os) const {
    int scopeLevel = 0;
    std::stack<std::map<std::string, SymbolTableEntry>> tempScopes = scopes;
    std::stack<std::vector<std::string>> tempOrderedIdentifiers = orderedIdentifiers;

    std::cout << "-------------------------------" << std::endl;
    std::cout << "SYMBOL TABLE OUTPUT:\n" << std::endl;

    os << "Number of scopes: " << tempScopes.size() << std::endl;

    while (!tempScopes.empty()) {
        const auto& scope = tempScopes.top();
        const auto& ordered = tempOrderedIdentifiers.top();

        std::vector<IdentifierKind> kinds = {IdentifierKind::PROGRAM, IdentifierKind::CONSTANT, IdentifierKind::TYPEDEF, IdentifierKind::VARIABLE, IdentifierKind::FUNCTION};

        std::string currentScopeName;
        if (scopeLevel == 0) {
            currentScopeName = "Global";
        } else {
            for (const auto& identifier : ordered) {
                const auto& entry = scope.at(identifier);
                if (entry.kind == IdentifierKind::FUNCTION) {
                    currentScopeName = entry.identifier;
                    break;
                }
            }
        }

        for (const auto& kind : kinds) {
            for (const auto& identifier : ordered) {
                const auto& entry = scope.at(identifier);

                if (entry.kind == kind) {
                    os << "Scope: " << currentScopeName << std::endl;
                    os << "Identifier name: " << entry.identifier << std::endl;
                    os << "Identifier kind: ";

                    switch (entry.kind) {
                        case IdentifierKind::VARIABLE:
                            os << "variable";
                            break;
                        case IdentifierKind::CONSTANT:
                            os << "constant";
                            break;
                        case IdentifierKind::TYPEDEF:
                            os << "typedef";
                            if (!entry.type.empty()) {
                                os << std::endl << "Type: " << entry.type;
                            }
                            break;
                        case IdentifierKind::FUNCTION:
                            os << "function";
                            if (!entry.type.empty()) {
                                os << std::endl << "Return type: " << entry.type;
                            }
                            break;
                        case IdentifierKind::PROGRAM:
                            os << "program";
                            break;
                    }
                    os << std::endl << std::endl;
                }
            }
        }

        tempScopes.pop();
        tempOrderedIdentifiers.pop();
        ++scopeLevel;
    }
}
