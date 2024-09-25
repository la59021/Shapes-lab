#include "Shape.hpp"

class Rectangle : public Shape {
    public:
        Rectangle(double w, double h);
        double getArea();
        double getPerimeter();

    private:
        int width;
        int height;

};
