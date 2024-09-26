#ifndef SHAPE_HPP_INCLUDED
#define SHAPE_HPP_INCLUDED
#include <cmath>
#include <iostream>

class Shape {
    public:
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
        virtual std::string getName() = 0;
};

#endif // SHAPE_HPP_INCLUDED
