#include <Shape.hpp>


class RightTriangle : public Shape {
    public:
        RightTriangle();
        double getArea(double width, double height);
        double getPerimeter(double width, double height);

    private:
};
