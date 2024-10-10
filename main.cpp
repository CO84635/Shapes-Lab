#include <iostream>
#include <cassert>
#include "circle.hpp"
#include "rectangle.hpp"
#include "righttriangle.hpp"

using namespace std;

int main () {
    
    Circle circle = Circle(2.00);
    assert(circle.getArea() < 12.57);
    assert(circle.getPerimeter() < 12.57);

    Rectangle rectangle = Rectangle(2.00, 4.00);
    assert(rectangle.getArea() == 8);
    assert(rectangle.getPerimeter() == 12);

    RightTriangle right_triangle = RightTriangle(2.00, 4.00);
    assert(right_triangle.getArea() == 4);
    assert(right_triangle.getPerimeter() < 10.473);

    Circle many_circle = Circle(99.00);
    assert(many_circle.getArea() < 30790.7497);
    assert(many_circle.getPerimeter() < 622.04);

    Rectangle many_and_one_rectangle = Rectangle(1.00, 99.00);
    assert(many_and_one_rectangle.getArea() == 99);
    assert(many_and_one_rectangle.getPerimeter() == 200);

    RightTriangle many_and_one_right_triangle = RightTriangle(1.00, 99.00);
    assert(many_and_one_right_triangle.getArea() == 49.5);
    assert(many_and_one_right_triangle.getPerimeter() < 199.01);

    Circle small_circle = Circle(0.01);
    assert(small_circle.getArea() < 3.14160E-4);
    assert(small_circle.getPerimeter() < 0.063);

    Rectangle small_rectangle = Rectangle(.01, .01);
    assert(small_rectangle.getArea() == 1E-4);
    assert(small_rectangle.getPerimeter() == 0.04);

    RightTriangle small_right_triangle = RightTriangle(0.01, 0.01);
    assert(small_right_triangle.getArea() == 5E-5);
    assert(small_right_triangle.getPerimeter() < 0.034143);

    Rectangle small_and_large_rectangle = Rectangle(.01, 100);
    assert(small_and_large_rectangle.getArea() == 1);
    assert(small_and_large_rectangle.getPerimeter() == 200.02);

    RightTriangle small_and_large_right_triangle = RightTriangle(0.01, 100);
    assert(small_and_large_right_triangle.getArea() == 0.5);
    assert(small_and_large_right_triangle.getPerimeter() < 200.0100006);

    Circle one_circle = Circle(1.00);
    assert(one_circle.getArea() < 3.1415927);
    assert(one_circle.getPerimeter() < 6.28320);

    Rectangle one_rectangle = Rectangle(1.00, 1.00);
    assert(one_rectangle.getArea() == 1);
    assert(one_rectangle.getPerimeter() == 4);

    RightTriangle one_right_triangle = RightTriangle(1.00, 1.00);
    assert(one_right_triangle.getArea() == 0.5);
    assert(one_right_triangle.getPerimeter() < 3.41422);

    Circle zero_circle = Circle(0.00);
    assert(zero_circle.getArea() == 0);
    assert(zero_circle.getPerimeter() == 0);

    Rectangle zero_rectangle = Rectangle(0.00, 0.00);
    assert(zero_rectangle.getArea() == 0);
    assert(zero_rectangle.getPerimeter() == 0);

    RightTriangle zero_right_triangle = RightTriangle(0.00, 0.00);
    assert(zero_right_triangle.getArea() == 0);
    assert(zero_right_triangle.getPerimeter() == 0);

    return 0;
}