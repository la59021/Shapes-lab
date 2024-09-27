#ifndef ISOSCELESRIGHTTRIANGLE_HPP
#define ISOSCELESRIGHTTRIANGLE_HPP
#include "RightTriangle.hpp"

class IsoscelesRightTriangle : public RightTriangle{
    public:
        IsoscelesRightTriangle(double w, double h);
        std::string getName();
};

#endif // SQUARE_HPP
