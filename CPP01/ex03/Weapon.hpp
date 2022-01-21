#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon {
	private:
		std::string weapon;

	public:
		Weapon(std::string weapon);
		~Weapon();
		std::string getType();

		void setType(std::string weapon);
};

#endif