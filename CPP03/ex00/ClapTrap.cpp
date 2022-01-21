#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("name"), hitpoints(10), energy_points(10), attack_damage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitpoints(10), energy_points(10), attack_damage(0) {
	std::cout << "(string) constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cltr) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cltr;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitpoints - amount < 0)
		attack_damage = 0;
	else
		hitpoints -= amount;
	std::cout << name << " took " << amount << " point of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	hitpoints += amount;
	std::cout << name << " restored " << amount << " hitpoints" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cltr) {
	std::cout << "Assignation operator called" << std::endl;
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

std::string ClapTrap::getName() {
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
