#ifndef __SQUAREFACTORY__
#define __SQUAREFACTORY__

    #include "ShapeFactory.hpp"
    #include "Square.hpp"
    #include "Shape.hpp"

    class SquareFactory : public ShapeFactory {
        public:
            Shape createShape();
        private:

    };

#endif