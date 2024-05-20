#ifndef __CAT__
#define __CAT__

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        ~Cat();

        const std::string getType() const override;
        const std::string type;
        void makeSound() const override;
            
};

#endif