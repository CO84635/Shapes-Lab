#include "shape.hpp"

using namespace std;

class RightTriangle : public Shape
{
private:
    double length{};
    double width{};
public:
    explicit RightTriangle(double length, double width);
    double getArea() override;
    double getPerimeter() override;
};