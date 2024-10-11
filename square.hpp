#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "rectangle.hpp"

class Square : public Rectangle
{
private: 
    double side{};

public:
    explicit Square(double side);
    double getArea() override;
    double getPerimeter() override;
};

#endif // SQUARE_HPP