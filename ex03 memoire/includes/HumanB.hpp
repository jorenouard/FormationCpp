#ifndef __HUMANB__
#define __HUMANB__    
    
    #include<string>
    #include "Weapon.hpp"

    class HumanB
    {
        public:
            HumanB(std::string name);
            HumanB(std::string name, Weapon weapon);
            void setWeapon(Weapon weapon);
            void attack();

        private:
            std::string name;
            Weapon weapon();
            std::string weaponType;
    };
#endif