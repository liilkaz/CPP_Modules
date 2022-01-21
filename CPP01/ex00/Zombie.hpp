#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{
	private:
	std::string name;

	public:
	void announce();

	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif