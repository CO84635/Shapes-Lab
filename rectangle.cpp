#include "rectangle.hpp"

using namespace std;

Rectangle::Rectangle(double length, double width) 
{
    this->length = length;
    this->width = width;
}

double Rectangle::getArea()
{
    double area = length * width;
    return area;
};

double Rectangle::getPerimeter()
{
    double area = 2 * (length + width);
    return area;
};