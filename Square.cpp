#include "Square.hpp"

Square::Square(double w) : Rectangle(w, w) {
    Rectangle(w, w);
    //super()
    width = w;
    height = w;
}
