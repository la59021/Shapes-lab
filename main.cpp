// 1.) Update your program with a new concrete class called Square. Square should inherit its behavior from the Rectangle class. You may or may not need to overwrite getArea() and getPerimeter().
// 2.) Update your program with a new concrete class called IsocelesRightTriangle. IsoscelesRightTriangle should inherit its behavior from the RightTriangle class. You may or may not need to overwrite getArea() and getPerimeter().
// 3.) Write a function called "void printAreaToScreen(Shape *s)" which takes a shape object and then prints out a nice message which includes the name and area of the shape. You should be able to use it with all of the shapes that you created!
// 4.) Test each of the classes in a main program via assert statements.
// 5.) Submit your code to GitHub and set up a Pull Request
// 6.) Have your partner review / approve your code.
// 7.) Merge in the changes.


#include <iostream>
#include <cassert>
#include "IncludeAllShapes.hpp"
using namespace std;

int main() {
    Circle circle(1.32);
    double circlePerimeter = 2 * 1.32 * 3.14;
    double circleArea = 3.14 * pow(1.32, 2);
    Rectangle rectangle(1.5, 6.2);
    double rectanglePerimeter = 2 * (1.5 + 6.2);
    double rectangleArea = 1.5 * 6.2;
    RightTriangle rightTriangle(1.4, 1.8);
    double rightTrianglePerimeter = 1.4 + 1.8 + sqrt(pow(1.4, 2) + pow(1.8, 2));
    double rightTriangleArea = 0.5 * (1.4 * 1.8);
    Square square(1.4);
    double squarePerimeter = 4 * 1.4;
    double squareArea = pow(1.4, 2);
//    IsocelesRightTriangle isocelesRightTriangle(1.5, 7.8);
//    double isocelesRightTrianglePerimeter = 2 * 1.32 * 3.14;
//    double isocelesRightTriangleArea = 3.14 * pow(1.32, 2);
//    IncludeAllShapes includeAllShapes;
//    includeAllShapes.printAreaToScreen(&circle);
//    includeAllShapes.printAreaToScreen(&rectangle);
//    includeAllShapes.printAreaToScreen(&rightTriangle);
//    includeAllShapes.printAreaToScreen(&square);
//    includeAllShapes.printAreaToScreen(&isocelesRightTriangle);cout << circle.getArea() << endl;
    assert(circle.getArea() == circleArea);
    assert(circle.getPerimeter() == circlePerimeter);
    assert(rectangle.getArea() == rectangleArea);
    assert(rectangle.getPerimeter() == rectanglePerimeter);
    assert(rightTriangle.getArea() == rightTriangleArea);
    assert(rightTriangle.getPerimeter() == rightTrianglePerimeter);
    assert(square.getArea() == squareArea);
    assert(square.getPerimeter() == squarePerimeter);
//    assert(isocelesRightTriangle.getArea() == isocelesRightTrianglePerimeter );
//    assert(isocelesRightTriangle.getPerimeter() == isocelesRightTrianglePerimeter);
    return 0;
}
