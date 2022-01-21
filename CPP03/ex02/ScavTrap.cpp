#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "\033[36m" << "ScavTrap: Default constructor called" << "\033[0m" << std::endl;
	name = "Clapname";
	hitpoints = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[36m" << "ScavTrap: Destructor called" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) {
	std::cout << "\033[36m" << "ClapTrap: Copy constructor called" << "\033[0m" << std::endl;
	*this = scav;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "\033[36m" << "ScavTrap: (string) constructor called" << "\033[0m" << std::endl;
	// this->name = name;
	hitpoints = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	std::cout << "ScavTrap: Assignation operator called" << std::endl;
	if (this != &scav) {
		
		this->name = scav.name;
		hitpoints = scav.hitpoints;
		this->energy_points = scav.energy_points;
		this->attack_damage = scav.attack_damage;
	}
	return *this;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "\033[36m" << "ScavTrap: " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << "\033[0m" << std::endl;
}

void ScavTrap::guardGate() {
std::cout << "\033[36m" << "ScavTrap: " << name << " has enterred in Gate keeper mode" << "\033[0m" << std::endl;
}
