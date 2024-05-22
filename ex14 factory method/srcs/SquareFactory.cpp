#include "SquareFactory.hpp"
#include <iostream>
#include <string>

Shape SquareFactory::createShape()
{
    return Square;
}