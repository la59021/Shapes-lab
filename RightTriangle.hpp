#include "Shape.hpp"

class RightTriangle : public Shape {
    public:
        RightTriangle(double w, double h);
        double getArea();
        double getPerimeter();

    private:
        double width;
        double height;
};
