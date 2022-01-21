#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "\033[32m" << "FragTrap: Default constructor called" << "\033[0m" << std::endl;
	name = "Fragname";
	hitpoints = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "\033[32m" << "FragTrap: (string) constructor called" << "\033[0m" << std::endl;
	hitpoints = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &frag) {
	std::cout << "\033[32m" << "FragTrap: Copy constructor called" << "\033[0m" << std::endl;
	*this = frag;
}

FragTrap::~FragTrap() {
	std::cout << "\033[32m" << "FragTrap: Destructor called" << "\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag) {
	std::cout << "FragTrap: Assignation operator called" << std::endl;
	if (this != &frag) {
		
		this->name = frag.name;
		hitpoints = frag.hitpoints;
		this->energy_points = frag.energy_points;
		this->attack_damage = frag.attack_damage;
	}
	return *this;
}

void FragTrap::attack(std::string const & target) {
	std::cout << "\033[32m" << "FragTrap: " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << "\033[0m" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "\033[32m" << "FragTrap: High fives, guys!🖐🏻" << std::endl;
}
