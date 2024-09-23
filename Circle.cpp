#include "Circle.hpp"

Circle::Circle()
{
    //ctor
}
double Circle::getArea(double radius) {
    return 3.14*radius*radius;
}
double Circle::getPerimeter(double radius) {
    return 2.0*radius*3.14;
}

//virtual double getAera() cont=0;
//
//virtual double getperimester() cont=0;
//virtual -shape() {}
