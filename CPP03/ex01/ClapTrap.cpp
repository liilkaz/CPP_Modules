#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Clapname"), hitpoints(10), energy_points(10), attack_damage(0){
	std::cout << "\033[33m" << "ClapTrap: Default constructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitpoints(10), energy_points(10), attack_damage(0) {
	std::cout << "\033[33m" << "ClapTrap: (string) constructor called" << "\033[0m" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "\033[33m" << "ClapTrap: Destructor called" << "\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cltr) {
	std::cout << "\033[33m" << "ClapTrap: Copy constructor called" << "\033[0m" << std::endl;
	*this = cltr;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "\033[33m" << "ClapTrap: " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << "\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitpoints - amount < 0)
		attack_damage = 0;
	else
		hitpoints -= amount;
	std::cout << "\033[33m" << "ClapTrap: "<< name << " took " << amount << " point of damage" << "\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	hitpoints += amount;
	std::cout << "\033[33m" << "ClapTrap: " << name << " restored " << amount << " hitpoints" << "\033[0m" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cltr) {
	std::cout << "\033[33m" << "Assignation operator called" << "\033[0m" << std::endl;
	if (this != &cltr) {
		this->name = cltr.name;
		this->hitpoints = cltr.hitpoints;
		this->energy_points = cltr.energy_points;
		this->attack_damage = cltr.attack_damage;
	}
	return *this;
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}

void ClapTrap::setHitpoints(int hitpoints) {
	this->hitpoints = hitpoints;
}

void ClapTrap::setEnergy_points(int energy_points) {
	this->energy_points = energy_points;
}

void ClapTrap::setAttack_damage(int attack_damage) {
	this->attack_damage = attack_damage;
}

std::string ClapTrap::getName() const{
	return name;
}

int ClapTrap::getHitpoints() {
	return hitpoints;
}

int ClapTrap::getEnergy_points() {
	return energy_points;
}

int ClapTrap::getAttack_damage() {
	return attack_damage;
}
