#include "Zombie.hpp"

int main(void) {
	Zombie *morty = newZombie("Morty");
	Zombie *rick = newZombie("Rick");
	Zombie *bob = newZombie("BOB");

	randomChump("Nilson");
	morty->announce();
	rick->announce();
	bob->announce();
	delete morty;
	delete bob;
	delete rick;
}