#include "circle.hpp"
#include "rectangle.hpp"
#include "righttriangle.hpp"
#include "isocelesrighttriangle.hpp"
#include "square.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

string printareatoscreen(Shape* s) {
    ostringstream oss;

    if (Circle* circle = dynamic_cast<Circle*>(s)) {
        oss << "Circle with area: " << circle->getArea();
    } else if (IsocelesRightTriangle* isoceles_right_triangle = dynamic_cast<IsocelesRightTriangle*>(s)) {
        oss << "Isosceles Right Triangle with area: " << isoceles_right_triangle->getArea();
    } else if (RightTriangle* right_triangle = dynamic_cast<RightTriangle*>(s)) {
        oss << "Right Triangle with area: " << right_triangle->getArea();
    } else if (Square* square = dynamic_cast<Square*>(s)) {
        oss << "Square with area: " << square->getArea();
    } else if (Rectangle* rectangle = dynamic_cast<Rectangle*>(s)) {
        oss << "Rectangle with area: " << rectangle->getArea();
    } else {
        oss << "Unknown shape.";
    }

    return oss.str();

}