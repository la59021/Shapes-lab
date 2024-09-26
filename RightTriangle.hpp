#include "Shape.hpp"

class RightTriangle : public Shape {
    public:
        RightTriangle(double w, double h);
        double getArea();
        double getPerimeter();
        std::string getName();

    private:
        double width;
        double height;
};
