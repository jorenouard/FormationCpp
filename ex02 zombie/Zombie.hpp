#ifndef __ZOMBIE__
    #define __ZOMBIE__
    #include <string>

    class Zombie
    {
        public:
            Zombie(std::string nickName);
            ~Zombie();
            void announce();
            void setName(std::string name);
            std::string getName();

        private:
            std::string name = "default";
            std::string nickName;
    };

    Zombie* newZombie(std::string name);
    void randomChump(std::string name);
    Zombie* zombieHorde(int N, std::string name);

#endif