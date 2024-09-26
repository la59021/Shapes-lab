#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED
#include "Shape.hpp"

class Rectangle : public Shape {
    public:
        Rectangle(double w, double h);
        double getArea();
        double getPerimeter();
        double width;
        double height;

    private:


};

#endif // RECTANGLE_HPP_INCLUDED
