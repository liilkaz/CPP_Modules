#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << name << "\033[0;31m" << " CKSHHHH PSHHHH - " << "\033[0m" << "[OHHHH NOOOOOOOO! I don't want to die]" << std::endl;
}

void Zombie::announce() {
	std::cout << name << "\033[0;33m" << " BraiiiiiiinnnzzzZ" << "\033[0m" << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}