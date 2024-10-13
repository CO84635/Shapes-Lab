#include "isocelesrighttriangle.hpp"
#include <cmath>

using namespace std;

IsocelesRightTriangle::IsocelesRightTriangle(double side) : RightTriangle(side, side), side(side) {}

double IsocelesRightTriangle::getArea()
{
    double area = 0.5 * side * side;
    return area;
}

double IsocelesRightTriangle::getPerimeter()
{
    double hypotenuse = side * sqrt(2);
    double perimeter = 2 * side + hypotenuse;
    return perimeter;
}