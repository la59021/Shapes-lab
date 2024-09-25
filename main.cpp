#include <iostream>
#include <cassert>
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "RightTriangle.hpp"
using namespace std;

int main() {
    Circle circle(1.32);
    Rectangle rectange(1.5, 6.2);
    RightTriangle rightTriangle(1.4, 1.8);
    cout << circle.getArea() << endl;
    cout << circle.getPerimeter() << endl;
    cout << rectange.getArea() << endl;
    cout << rectange.getPerimeter() << endl;
    cout << rightTriangle.getArea() << endl;
    cout << rightTriangle.getPerimeter() << endl;
    return 0;
}
