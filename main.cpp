#include <iostream>
#include <cassert>
#include "circle.hpp"
#include "rectangle.hpp"
#include "righttriangle.hpp"

using namespace std;

int main () {
    Circle circle = Circle(2.00);
    // cout << "Anticipated 12.57, Experimental: " << circle.getArea() << endl;
    // cout << "Anticipated 12.57, Experimental: "  <<  circle.getPerimeter() << endl;

    Rectangle rectangle = Rectangle(2.00, 4.00);
    // cout << "Anticipated 8, Experimental: " << rectangle.getArea() << endl;
    // cout << "Anticipated 12, Experimental: "  <<  rectangle.getPerimeter() << endl;

    RightTriangle right_triangle = RightTriangle(2.00, 4.00);
    // cout << "Anticipated 4, Experimental: " << right_triangle.getArea() << endl;
    // cout << "Anticipated 10.47, Experimental: "  <<  right_triangle.getPerimeter() << endl;

    assert(circle.getArea() < 12.57);
    assert(circle.getPerimeter() < 12.57);

    assert(rectangle.getArea() == 8);
    assert(rectangle.getPerimeter() == 12);

    assert(right_triangle.getArea() == 4);
    assert(right_triangle.getPerimeter() < 10.473);

    return 0;
}