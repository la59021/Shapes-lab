#include "Rectangle.hpp"
using namespace std;

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;

}

double Rectangle::getArea() {
    return width * height;
}

double Rectangle::getPerimeter() {
    return 2 * (width + height);
};

string Rectangle::getName() {
    return "Rectangle";
}
