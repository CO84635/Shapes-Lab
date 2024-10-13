#include <iostream>
#include <cassert>
#include "circle.hpp"
#include "rectangle.hpp"
#include "righttriangle.hpp"
#include "isocelesrighttriangle.hpp"
#include "square.hpp"

using namespace std;

int main () {
    cout << "hello";

    Circle circle = Circle(2.00);
    assert(circle.getArea() < 12.57);
    assert(circle.getPerimeter() < 12.56637062);

    Rectangle rectangle = Rectangle(2.00, 4.00);
    assert(rectangle.getArea() == 8.00);
    assert(rectangle.getPerimeter() == 12.00);

    RightTriangle right_triangle = RightTriangle(2.00, 4.00);
    assert(right_triangle.getArea() == 4.00);
    assert(right_triangle.getPerimeter() < 10.4722);

    Circle many_circle = Circle(99.00);
    assert(many_circle.getArea() < 30790.7497);
    assert(many_circle.getPerimeter() < 622.04);

    IsocelesRightTriangle many_isoceles_right_triangle = IsocelesRightTriangle(1000.00);
    assert(many_isoceles_right_triangle.getArea() == 500000);
    assert(many_isoceles_right_triangle.getPerimeter() < 3414.213563);

    Square many_square = Square(1000.00);
    assert(many_square.getArea() == 1000000.00);
    assert(many_square.getPerimeter() == 4000);

    Rectangle many_and_one_rectangle = Rectangle(1.00, 99.00);
    assert(many_and_one_rectangle.getArea() == 99.00);
    assert(many_and_one_rectangle.getPerimeter() == 200.00);

    RightTriangle many_and_one_right_triangle = RightTriangle(1.00, 99.00);
    assert(many_and_one_right_triangle.getArea() == 49.50);
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

    IsocelesRightTriangle small_isoceles_right_triangle = IsocelesRightTriangle(0.001);
    assert(small_isoceles_right_triangle.getArea() == 5E-7);
    assert(small_isoceles_right_triangle.getPerimeter() < 0.0034142137);

    Square small_square = Square(0.001);
    assert(small_square.getArea() == 1E-6);
    assert(small_square.getPerimeter() == 0.004);

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

    IsocelesRightTriangle isoceles_right_triangle = IsocelesRightTriangle(1.00);
    assert(isoceles_right_triangle.getArea() == 0.5);
    assert(isoceles_right_triangle.getPerimeter() < 3.414213563);

    Square square = Square(1.00);
    assert(square.getArea() == 1.00);
    assert(square.getPerimeter() == 4.00);

    Circle zero_circle = Circle(0.00);
    assert(zero_circle.getArea() == 0);
    assert(zero_circle.getPerimeter() == 0);

    Rectangle zero_rectangle = Rectangle(0.00, 0.00);
    assert(zero_rectangle.getArea() == 0);
    assert(zero_rectangle.getPerimeter() == 0);

    RightTriangle zero_right_triangle = RightTriangle(0.00, 0.00);
    assert(zero_right_triangle.getArea() == 0);
    assert(zero_right_triangle.getPerimeter() == 0);

    IsocelesRightTriangle zero_isoceles_right_triangle = IsocelesRightTriangle(0.0);
    assert(zero_isoceles_right_triangle.getArea() == 0.0);
    assert(zero_isoceles_right_triangle.getPerimeter() == 0.0);

    Square zero_square = Square(0.0);
    assert(zero_square.getArea() == 0.0);
    assert(zero_square.getPerimeter() == 0.0);

    std::cout << "All of the tests have Passed! Congrats!" << std::endl;
    return 0;
}
