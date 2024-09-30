#include <iostream>
#include "IncludeAllShapes.hpp"
using namespace std;

void IncludeAllShapes::printAreaToScreen(Shape *s) {
    string name = s -> getName();
    string area = to_string(s -> getArea());
    string perimeter = to_string(s -> getPerimeter());
    string line1 = name + ":";
    string line2 = "The area of the " + name + " is " + area;
    string line3 = "The perimeter of the " + name + " is " + perimeter;
    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
}
