#ifndef SHAPE_HPP_INCLUDED
#define SHAPE_HPP_INCLUDED
#include <cmath>

class Shape {
    public:
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
};

#endif // SHAPE_HPP_INCLUDED
