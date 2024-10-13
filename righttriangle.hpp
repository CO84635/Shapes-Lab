#ifndef RIGHTTRIANGLE_HPP
#define RIGHTTRIANGLE_HPP

#include "shape.hpp"

class RightTriangle : public Shape
{
private:
    double length{};
    double width{};
public:
    explicit RightTriangle();
    explicit RightTriangle(double length, double width);
    double getArea() override;
    double getPerimeter() override;
};

#endif // RIGHTTRIANGLE_HPP