#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() { //ScavTrap(name), FragTrap(name, ScavTrap::energy_points), name("name") {
	this->name = "Diamond_name";
	std::cout << "\033[37m" << "DiamondTrap: Default constructor called" << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) { //ScavTrap(name), FragTrap(name, ScavTrap::energy_points), name(name)  {
	this->name = name;
	std::cout << "\033[37m" << "DiamondTrap: (string) constructor called" << "\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond) {
	std::cout << "\033[37m" << "DiamondTrap: Copy constructor called" << "\033[0m" << std::endl;
	*this = diamond;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[37m" << "DiamondTrap: Destructor called" << "\033[0m" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond) {
	std::cout << "\033[37m" << "DiamondTrap: Assignation operator called" << "\033[0m" << std::endl;
	if (this != &diamond) {
		
		this->name = diamond.name;
		this->hitpoints = diamond.hitpoints;
		this->energy_points = diamond.energy_points;
		this->attack_damage = diamond.attack_damage;
	}
	return *this;
}

void DiamondTrap::whoAmI() {
	std::cout << "\033[37m" << "DiamondTrap name: " << this->name << "\033[33m" << " ClapTrap name: " <<  getName() << "\033[0m" << std::endl;
}
