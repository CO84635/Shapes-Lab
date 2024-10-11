#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle : public Shape
{
private:
    double length{};
    double width{};

public:
    explicit Rectangle();
    explicit Rectangle(double length, double width);
    double getArea() override;
    double getPerimeter() override;
};

#endif // RECTANGLE_HPP