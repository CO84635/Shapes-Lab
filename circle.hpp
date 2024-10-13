#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle : public Shape
{
private: 
    double radius{};

public:
    explicit Circle(double radius);
    double getArea() override;
    double getPerimeter() override;
};

#endif // CIRCLE_HPP