#ifndef __DOG__
#define __DOG__

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        ~Dog();

        const std::string getType() override;
        const std::string type;
        void makeSound() override;
            
};

#endif