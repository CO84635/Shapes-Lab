#include "shape.hpp"

using namespace std;

class Circle : public Shape
{
private: 
    double radius{};

public:
    explicit Circle(double radius);
    double getArea() override;
    double getPerimeter() override;
};