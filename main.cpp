#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Shape {
    public:
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
};

class Circle : public Shape {
    public:
        Circle(double rad) {
            radius = rad;
        }
        double getArea() {
            return 3.14 * pow(radius, 2);
        }
        double getPerimeter() {
            return 2 * 3.14 * radius;
        }

    private:
        double radius;
};

class Rectangle : public Shape {
    public:
        Rectangle(double w, double h) {
            width = w;
            height = h;
        };
        double getArea() {
            return width * height;
        };
        double getPerimeter() {
            return 2 * (width + height);
        };

    private:
        int width;
        int height;

};

class RightTriangle : public Shape {
    public:
        RightTriangle(double w, double h) {
            width = w;
            height = h;
        };
        double getArea() {
            return 0.5 * width * height;
        };
        double getPerimeter() {
            return width + height + (sqrt(width * width + height * height));
        };

    private:
        double width;
        double height;
};


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
