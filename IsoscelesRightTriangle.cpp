#include "IsoscelesRightTriangle.hpp"
using namespace std;

IsoscelesRightTriangle::IsoscelesRightTriangle(double w, double h) : RightTriangle(w, h) {
    width = w;
    height = h;
}

string IsoscelesRightTriangle::getName() {
    return "Isosceles Right Triangle";
}
