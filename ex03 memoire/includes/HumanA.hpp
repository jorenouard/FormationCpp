#ifndef __HUMANA__
#define __HUMANA__    
    
    #include<string>
    #include "Weapon.hpp"

    class HumanA
    {
        public:
            HumanA(std::string name, Weapon weapon);
            void attack();

        private:
            std::string name;
            Weapon weapon();
    };
#endif