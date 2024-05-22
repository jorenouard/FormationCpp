#ifndef __WEAPON__
#define __WEAPON__

    #include <string>

    class Weapon
    {
        public:
            Weapon(std::string name);
            const std::string &getType() const;
            void setType(std::string newType);

            Weapon(const Weapon &weapon);
            Weapon &operator=(const Weapon &weapon);

        private:
            std::string type;
            std::string name;
    };
    

#endif