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
    Rectangle rectange(1.5, 6.2);
    RightTriangle rightTriangle(1.4, 1.8);
    Square square(1.4);
    cout << "Circle:" << endl;
    cout << circle.getArea() << endl;
    cout << circle.getPerimeter() << endl;
    cout << "Rectangle:" << endl;
    cout << rectange.getArea() << endl;
    cout << rectange.getPerimeter() << endl;
    cout << "Right Triangle:" << endl;
    cout << rightTriangle.getArea() << endl;
    cout << rightTriangle.getPerimeter() << endl;
    cout << "Square:" << endl;
    cout << square.getArea() << endl;
    cout << square.getPerimeter() << endl;
    return 0;
}
