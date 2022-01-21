#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
	ClapTrap hendricks("Richard");
	ClapTrap belson("Gavin");

	ScavTrap chugtai("Dinash")
	ScavTrap bertram ("Gilfoyle")
	
	std::cout << std::endl;

	hendricks.attack(belson.getName());
	belson.takeDamage(hendricks.getAttack_damage());
	belson.attack(hendricks.getName());
	hendricks.takeDamage(belson.getAttack_damage());
	hendricks.beRepaired(5);
	belson.beRepaired(5);

	std::cout << std::endl;
*/

int main() {
	// ClapTrap hendricks("Richard");
	// ScavTrap belson("Gavin");

	// std::cout << std::endl;
	// hendricks.attack(belson.getName());
	// belson.takeDamage(hendricks.getAttack_damage());
	// belson.attack(hendricks.getName());
	// hendricks.takeDamage(belson.getAttack_damage());
	// hendricks.beRepaired(5);
	// belson.beRepaired(5);
	// std::cout << std::endl;

	ScavTrap hendricks("Richard");
	ClapTrap belson("Gavin");

	ScavTrap chugtai("Dinash");
	ScavTrap bertram ("Gilfoyle");
	
	std::cout << std::endl;

	hendricks.attack(belson.getName());
	belson.takeDamage(hendricks.getAttack_damage());
	belson.attack(hendricks.getName());
	hendricks.takeDamage(belson.getAttack_damage());
	hendricks.beRepaired(5);
	belson.beRepaired(5);

	chugtai.guardGate();
	chugtai.attack(bertram.getName());
	bertram.takeDamage(chugtai.getAttack_damage());
	bertram.guardGate();
	bertram.attack(chugtai.getName());
	chugtai.takeDamage(bertram.getAttack_damage());
	chugtai.beRepaired(5);
	bertram.beRepaired(5);

	std::cout << std::endl;
}
