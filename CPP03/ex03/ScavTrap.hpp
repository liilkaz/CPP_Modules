#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &scav);
	
	ScavTrap &operator=(const ScavTrap &scav);
	
	void guardGate();
	void attack(std::string const & target);
	

};

#endif