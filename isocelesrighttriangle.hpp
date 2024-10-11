#ifndef ISOSCELES_RIGHT_TRIANGLE_HPP
#define ISOSCELES_RIGHT_TRIANGLE_HPP

#include "righttriangle.hpp"

class IsocelesRightTriangle : public RightTriangle
{
private:
    double side{};

public:
    IsocelesRightTriangle(double side);
    double getArea() override;
    double getPerimeter() override;
};

#endif // ISOSCELES_RIGHT_TRIANGLE_HPP