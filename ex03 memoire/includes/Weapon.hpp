#ifndef __WEAPON__
#define __WEAPON__

    #include <string>

    class Weapon
    {
        public:
            const std::string *getType();
            void setType(std::string newType);

        private:
            const std::string type;
    };
    

#endif