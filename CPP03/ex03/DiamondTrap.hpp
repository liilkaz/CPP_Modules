#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private :
		std::string name;
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &diamond);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &diamond);

		void whoAmI();
		using ScavTrap::attack; //???
};

#endif