#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED
#include "Shape.hpp"

class Rectangle : public Shape {
    public:
        Rectangle(double w, double h);
        double getArea();
        double getPerimeter();
        std::string getName();
        double width;
        double height;
};

#endif // RECTANGLE_HPP_INCLUDED
