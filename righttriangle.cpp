#include <cmath>
#include "righttriangle.hpp"

using namespace std;

RightTriangle::RightTriangle(double length, double width)
{
    this->length = length;
    this->width = width;
}

double RightTriangle::getArea()
{
    double area = (0.5) * length * width;
    return area;
};

double RightTriangle::getPerimeter()
{
    double perimeter = length + width + sqrt(length * length + width * width);
    return perimeter;
};