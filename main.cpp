#include <iostream>
#include "circle.hpp"

using namespace std;

int main () {
    Circle circle = Circle(2.00);
    cout << "Anticipated 12.57, Experimental: " << circle.getArea() << endl;
    cout << "Anticipated 12.57, Experimental: "  <<  circle.getPerimeter() << endl;

    return 0;
}