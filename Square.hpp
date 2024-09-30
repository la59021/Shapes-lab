#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square : public Rectangle{
    public:
        Square(double w);
        std::string getName();
};

#endif // SQUARE_HPP
