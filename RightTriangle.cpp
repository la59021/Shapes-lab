#include "RightTriangle.hpp"
#include <cmath>

RightTriangle::RightTriangle() {
    //ctor
}

double getArea(double width, double height) {
    return .5*width*height;
}

double getPerimeter(double width, double height) {
    return width+height+(sqrt(width*width+height*height));
}
