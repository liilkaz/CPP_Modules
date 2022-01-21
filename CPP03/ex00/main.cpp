#include "ClapTrap.hpp"

int main() {
	ClapTrap player1("Richard");
	ClapTrap player2("Gavin");

	std::cout << std::endl;
	player1.attack(player2.getName());
	player2.takeDamage(player1.getAttack_damage());
	player2.attack(player1.getName());
	player1.takeDamage(player2.getAttack_damage());
	player1.beRepaired(5);
	player2.beRepaired(5);
	std::cout << std::endl;
}