#include "DiamondTrap.hpp"

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

	ClapTrap hendricks("Richard");
	// ClapTrap belson("Gavin");
	ScavTrap chugtai("Dinash");

	FragTrap bertram ("Gilfoyle");

	DiamondTrap dzan ("Jang");

	std::cout << std::endl;

	hendricks.attack(chugtai.getName());
	chugtai.takeDamage(hendricks.getAttack_damage());

	chugtai.attack(hendricks.getName());
	hendricks.takeDamage(chugtai.getAttack_damage());

	hendricks.beRepaired(5);
	chugtai.beRepaired(5);

	bertram.highFivesGuys();
	bertram.attack(dzan.getName());

	// chugtai.guardGate();
	// chugtai.attack(bertram.getName());
	// bertram.takeDamage(chugtai.getAttack_damage());
	// bertram.guardGate();
	// bertram.attack(chugtai.getName());
	// chugtai.takeDamage(bertram.getAttack_damage());
	// chugtai.beRepaired(5);
	// bertram.beRepaired(5);

	dzan.whoAmI();
	dzan.highFivesGuys();
	dzan.attack(hendricks.getName());
	

	std::cout << std::endl;
}
