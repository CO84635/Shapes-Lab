#include "shape.hpp"

using namespace std;

class Rectangle : public Shape
{
private:
    double length{};
    double width{};

public:
    explicit Rectangle(double length, double radius);
    double getArea() override;
    double getPerimeter() override;
    
};