#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
		ScavTrap (std::string name);
		~ScavTrap (void);

		void attack (const std::string& target) override;
        void guardGate();

	private:
		std::string name;
};

#endif