#include "Circle.hpp"
using namespace std;

Circle::Circle(double rad) {
    radius = rad;
}

double Circle::getArea() {
    return 3.14 * pow(radius, 2);
}

double Circle::getPerimeter() {
    return 2 * 3.14 * radius;
}

string Circle::getName() {
    return "Circle";
}
