#ifndef __SHAPEFACTORY__
#define __SHAPEFACTORY__

#include "Shape.hpp"

class ShapeFactory {
    public:
        virtual Shape* createShape() = 0;
        virtual ~ShapeFactory(){
            
        }
    private:

};

#endif