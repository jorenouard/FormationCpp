#ifndef __ANIMAL__
#define __ANIMAL__
    #include <iostream>
    #include <string>

    class Animal{
        public:
            Animal();
            ~Animal();

            virtual const std::string getType() const;
            virtual void makeSound() const;

        private:
            std::string type;
    };

#endif