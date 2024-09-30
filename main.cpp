#include <iostream>
#include <cassert>
#include "IncludeAllShapes.hpp"
using namespace std;

int main() {
    Circle circle(1.32);
    Rectangle rectange(1.5, 6.2);
    RightTriangle rightTriangle(1.4, 1.8);
    Square square(1.4);
    //IsocelesRightTriangle isocelesRightTriangle(1.5, 7.8);
    IncludeAllShapes includeAllShapes;
    includeAllShapes.printAreaToScreen(&circle);
    includeAllShapes.printAreaToScreen(&rectange);
    includeAllShapes.printAreaToScreen(&rightTriangle);
    includeAllShapes.printAreaToScreen(&square);
    //includeAllShapes.printAreaToScreen(&isocelesRightTriangle);
    return 0;
}
