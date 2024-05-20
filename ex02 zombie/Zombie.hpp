#ifndef __ZOMBIE__
    #define __ZOMBIE__
    #include <string>

    class Zombie
    {
        public:
            ~Zombie();
            void announce();
            void setName(std::string name);
            std::string getName();

        private:
            std::string name = "default";
    };

    Zombie* newZombie(std::string name);
    void randomChump(std::string name);
    Zombie* zombieHorde(int N, std::string name);

#endif