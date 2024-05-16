#ifndef __ZOMBIE__
    #define __ZOMBIE__
    #include <string>

    class Zombie
    {
        public:
            Zombie(std::string name);
            void announce(const std::string name);
            
        private:
            std::string name;
    };

#endif