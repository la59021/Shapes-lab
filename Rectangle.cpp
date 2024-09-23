#include "Rectangle.hpp"

Rectangle::Rectangle() {
    //ctor
}

double Rectangle::getArea(double width, double height) {
    return width*height;
}

double Rectangle::getPerimeter(double width, double height) {
    return 2*width + 2*height;
}
