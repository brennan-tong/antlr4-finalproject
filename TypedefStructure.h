// TypedefStructure.h

#ifndef TYPEDEF_H
#define TYPEDEF_H

#include <string>
#include "ExprParser.h"

enum class TypedefKind { SCALAR, ARRAY };

class Typedef {
public:
    Typedef(TypedefKind kind, const std::string &elementType, int elementCount = 0);

    TypedefKind getKind() const;
    std::string getElementType() const;
    int getElementCount() const;

    static Typedef array(const ExprParser::SubrangeContext &subrange, const std::string &elementType);
    static Typedef arrayOfArray(const ExprParser::SubrangeContext &outerSubrange, const ExprParser::SubrangeContext &innerSubrange, const std::string &elementType);
    static Typedef arrayOfArrayOfArray(const ExprParser::SubrangeContext &outerSubrange, const ExprParser::SubrangeContext &middleSubrange, const ExprParser::SubrangeContext &innerSubrange, const std::string &elementType);

private:
    TypedefKind kind;
    std::string elementType;
    int elementCount;
};

#endif // TYPEDEF_H
