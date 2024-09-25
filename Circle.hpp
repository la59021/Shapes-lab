#include "Shape.hpp"

class Circle : public Shape {
    public:
        Circle(double rad);
        double getArea();
        double getPerimeter();

    private:
        double radius;
};
