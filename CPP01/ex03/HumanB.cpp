#include "HumanB.hpp"

void HumanB::attack() {
	if (!weapon) {
		Weapon hand("hands");
		this->weapon = &hand;
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
		weapon = NULL;
	}
	else 
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}