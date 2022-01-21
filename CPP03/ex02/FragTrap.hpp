#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private: 

	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &frag);
		~FragTrap();
	
		FragTrap &operator=(const FragTrap &frag);

		void attack(std::string const & target);
		void highFivesGuys(void);

};

#endif