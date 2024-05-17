#ifndef __ANIMAL__
#define __ANIMAL__
    #include <iostream>
    #include <string>

    class Animal{
        public:
            Animal();
            ~Animal();

            virtual const std::string getType();
            virtual void makeSound();

        private:
            std::string type;
    };

#endif