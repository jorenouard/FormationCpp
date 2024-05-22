#ifndef __CIRCLEFACTORY__
#define __CIRCLEFACTORY__

    #include "ShapeFactory.hpp"
    #include "Circle.hpp"
    #include "Shape.hpp"

    class CircleFactory : public ShapeFactory {
        public:
            Shape* createShape() override;
        private:

    };

#endif