#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	protected :
		std::string name;
		int hitpoints;
		int energy_points;
		int attack_damage;

	public :
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &cltr);
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap &operator=(const ClapTrap &cltr);

		void setName(std::string name);
		void setHitpoints(int hitpoints);
		void setEnergy_points(int energy_points);
		void setAttack_damage(int attack_damage);
		
		std::string getName() const;
		int getHitpoints();
		int getEnergy_points();
		int getAttack_damage();

		
};

#endif