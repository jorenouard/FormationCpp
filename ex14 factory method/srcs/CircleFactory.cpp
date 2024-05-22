#include "CircleFactory.hpp"
#include <iostream>
#include <string>

Shape CircleFactory::createShape()
{
    return new Circle();
}