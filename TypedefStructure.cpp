// TypedefStructure.cpp
#include "TypedefStructure.h"

Typedef::Typedef(TypedefKind kind, const std::string &elementType, int elementCount)
    : kind(kind), elementType(elementType), elementCount(elementCount) {}

TypedefKind Typedef::getKind() const {
    return kind;
}

std::string Typedef::getElementType() const {
    return elementType;
}

int Typedef::getElementCount() const {
    return elementCount;
}

Typedef Typedef::array(const ExprParser::SubrangeContext &subrange, const std::string &elementType) {
    auto nonConstSubrange = const_cast<ExprParser::SubrangeContext*>(&subrange);
    int elementCount = std::stoi(nonConstSubrange->expression(0)->getText()) * std::stoi(nonConstSubrange->expression(1)->getText());
    return Typedef(TypedefKind::ARRAY, elementType, elementCount);
}

Typedef Typedef::arrayOfArray(const ExprParser::SubrangeContext &outerSubrange, const ExprParser::SubrangeContext &innerSubrange, const std::string &elementType) {
    auto nonConstOuterSubrange = const_cast<ExprParser::SubrangeContext*>(&outerSubrange);
    auto nonConstInnerSubrange = const_cast<ExprParser::SubrangeContext*>(&innerSubrange);
    int outerElementCount = std::stoi(nonConstOuterSubrange->expression(0)->getText()) * std::stoi(nonConstOuterSubrange->expression(1)->getText());
    int innerElementCount = std::stoi(nonConstInnerSubrange->expression(0)->getText()) * std::stoi(nonConstInnerSubrange->expression(1)->getText());
    return Typedef(TypedefKind::ARRAY, elementType, outerElementCount * innerElementCount);
}

Typedef Typedef::arrayOfArrayOfArray(const ExprParser::SubrangeContext &outerSubrange, const ExprParser::SubrangeContext &middleSubrange, const ExprParser::SubrangeContext &innerSubrange, const std::string &elementType) {
    auto nonConstOuterSubrange = const_cast<ExprParser::SubrangeContext*>(&outerSubrange);
    auto nonConstMiddleSubrange = const_cast<ExprParser::SubrangeContext*>(&middleSubrange);
    auto nonConstInnerSubrange = const_cast<ExprParser::SubrangeContext*>(&innerSubrange);

    int outerElementCount = std::stoi(nonConstOuterSubrange->expression(0)->getText()) * std::stoi(nonConstOuterSubrange->expression(1)->getText());
    int middleElementCount = std::stoi(nonConstMiddleSubrange->expression(0)->getText()) * std::stoi(nonConstMiddleSubrange->expression(1)->getText());
    int innerElementCount = std::stoi(nonConstInnerSubrange->expression(0)->getText()) * std::stoi(nonConstInnerSubrange->expression(1)->getText());

    return Typedef(TypedefKind::ARRAY, elementType, outerElementCount * middleElementCount * innerElementCount);
}
