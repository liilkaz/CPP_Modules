#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string name, int energy_points);
		FragTrap(const FragTrap &frag);
		~FragTrap();
	
		FragTrap &operator=(const FragTrap &frag);

		void attack(std::string const & target);
		void highFivesGuys(void);

};

#endif