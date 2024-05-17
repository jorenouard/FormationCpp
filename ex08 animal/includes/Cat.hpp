#ifndef __CAT__
#define __CAT__

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        ~Cat();

        const std::string getType() override;
        const std::string type;
        void makeSound() override;
            
};

#endif