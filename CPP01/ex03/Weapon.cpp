#include "Weapon.hpp"

void Weapon::setType(std::string weapon) {
	this->weapon = weapon;
}

std::string Weapon::getType(){
	return weapon;
}

Weapon::Weapon(std::string weapon) {
	this->weapon = weapon;
}

Weapon::~Weapon(){}