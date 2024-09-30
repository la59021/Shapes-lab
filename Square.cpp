#include "Square.hpp"
using namespace std;

Square::Square(double w) : Rectangle(w, w) {
    width = w;
    height = w;
}

string Square::getName() {
    return "Square";
}
