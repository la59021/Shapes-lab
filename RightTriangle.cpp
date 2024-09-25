#include "RightTriangle.hpp"

RightTriangle::RightTriangle(double w, double h) {
    width = w;
    height = h;
}

double RightTriangle::getArea() {
    return 0.5 * width * height;
}
double RightTriangle::getPerimeter() {
    return width + height + (sqrt(width * width + height * height));
}
