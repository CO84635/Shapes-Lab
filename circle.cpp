#include <cmath>
#include "circle.hpp"

using namespace std;

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::getArea()
{
    double area = M_PI * (radius * radius);
    return area;
};

double Circle::getPerimeter()
{
    double circumference = 2 * M_PI * radius;
    return circumference;
};
