#include <iostream>
#include <cassert>
#include "circle.hpp"
#include "rectangle.hpp"
#include "righttriangle.hpp"
#include "isocelesrighttriangle.hpp"
#include "square.hpp"
#include "printareatoscreen.hpp"

using namespace std;

int main () {
    Circle circle = Circle(2.00);
    assert(circle.getArea() < 12.57);
    assert(circle.getPerimeter() < 12.56637062);
    assert(printareatoscreen(&circle) == "Circle with area: 12.5664");

    Circle zero_circle = Circle(0.00); 
    assert(zero_circle.getArea() == 0.0);
    assert(zero_circle.getPerimeter() == 0.0);
    assert(printareatoscreen(&zero_circle) == "Circle with area: 0");

    
    Rectangle rectangle = Rectangle(2.00, 4.00);
    assert(rectangle.getArea() == 8.00);
    assert(rectangle.getPerimeter() == 12.00);
    assert(printareatoscreen(&rectangle) == "Rectangle with area: 8");

    Rectangle zero_rectangle = Rectangle(0.00, 0.00);  
    assert(zero_rectangle.getArea() == 0.0);
    assert(zero_rectangle.getPerimeter() == 0.0);
    assert(printareatoscreen(&zero_rectangle) == "Rectangle with area: 0");

    
    RightTriangle right_triangle = RightTriangle(2.00, 4.00);
    assert(right_triangle.getArea() == 4.00);
    assert(right_triangle.getPerimeter() < 10.4722);
    assert(printareatoscreen(&right_triangle) == "Right Triangle with area: 4");

    RightTriangle zero_right_triangle = RightTriangle(0.00, 0.00);  
    assert(zero_right_triangle.getArea() == 0.0);
    assert(zero_right_triangle.getPerimeter() == 0.0);
    assert(printareatoscreen(&zero_right_triangle) == "Right Triangle with area: 0");

    
    IsocelesRightTriangle isoceles_right_triangle = IsocelesRightTriangle(1.00);
    assert(isoceles_right_triangle.getArea() == 0.5);
    assert(isoceles_right_triangle.getPerimeter() < 3.414213563);
    assert(printareatoscreen(&isoceles_right_triangle) == "Isosceles Right Triangle with area: 0.5");

    IsocelesRightTriangle zero_isoceles_right_triangle = IsocelesRightTriangle(0.00); 
    assert(zero_isoceles_right_triangle.getArea() == 0.0);
    assert(zero_isoceles_right_triangle.getPerimeter() == 0.0);
    assert(printareatoscreen(&zero_isoceles_right_triangle) == "Isosceles Right Triangle with area: 0");

   
    Square square = Square(1.00);
    assert(square.getArea() == 1.00);
    assert(square.getPerimeter() == 4.00);
    assert(printareatoscreen(&square) == "Square with area: 1");

    Square zero_square = Square(0.00); 
    assert(zero_square.getArea() == 0.0);
    assert(zero_square.getPerimeter() == 0.0);
    assert(printareatoscreen(&zero_square) == "Square with area: 0");


    Circle small_circle = Circle(0.01);  
    assert(small_circle.getArea() < 3.14160E-4);
    assert(small_circle.getPerimeter() < 0.063);
    assert(printareatoscreen(&small_circle) == "Circle with area: 0.000314159");

    Rectangle small_rectangle = Rectangle(0.01, 0.01); 
    assert(small_rectangle.getArea() == 1E-4);
    assert(small_rectangle.getPerimeter() == 0.04);
    assert(printareatoscreen(&small_rectangle) == "Rectangle with area: 0.0001");

    RightTriangle small_right_triangle = RightTriangle(0.01, 0.01); 
    assert(small_right_triangle.getArea() == 5E-5);
    assert(small_right_triangle.getPerimeter() < 0.034143);
    assert(printareatoscreen(&small_right_triangle) == "Right Triangle with area: 5e-005");

    IsocelesRightTriangle small_isoceles_right_triangle = IsocelesRightTriangle(0.001); 
    assert(small_isoceles_right_triangle.getArea() == 5E-7);
    assert(small_isoceles_right_triangle.getPerimeter() < 0.0034142137);
    assert(printareatoscreen(&small_isoceles_right_triangle) == "Isosceles Right Triangle with area: 5e-007");

    Square small_square = Square(0.001); 
    assert(small_square.getArea() == 1E-6);
    assert(small_square.getPerimeter() == 0.004);
    assert(printareatoscreen(&small_square) == "Square with area: 1e-006");

   
    std::cout << "All of the tests have Passed! Congrats!" << std::endl;
    return 0;
}