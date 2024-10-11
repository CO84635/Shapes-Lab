#include "square.hpp"

using namespace std;

Square::Square(double side) : Rectangle{side, side}, side(side) {}

double Square::getArea()
{
    double area = side * side;
    return area;
}

double Square::getPerimeter()
{
    double perimeter = 4 * side;
    return perimeter;
}