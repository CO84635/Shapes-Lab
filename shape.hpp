#ifndef SHAPE_H
#define SHAPE_H

using namespace std;
class Shape 
{
public: 
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};
#endif // SHAPE_H