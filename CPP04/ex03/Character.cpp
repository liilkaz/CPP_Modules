#include "Character.hpp"
#include "AMateria.hpp"

// Character::Character() : name("NAME") {}

Character::Character (std::string name) : name(name) {
	for (int i = 0; i < 4; i++) {
		m[i] = NULL;
	}
}

Character::~Character() {
	for(int i = 0; i < 4; i++)
	{
		if (this->m[i] != NULL)
		{
			delete m[i];
			m[i] = NULL;
		}
	}
}

Character::Character (const Character &character) {
	*this = character;
}

Character &Character::operator=(const Character &character) {
	if (this != &character) {
		this->name = character.name;
		for (int i = 0; i < 4; i++)
		{
			*m[i] = *character.m[i];
		}
}
	return *this;
}

std::string const &Character:: getName() const { return name;}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->m[i] == NULL) {
			this->m[i] = m;
		break; 
		}
	}
}

void Character::unequip(int idx) {
	if (idx >=0 && idx < 4) { // || ?
		m[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target) {
	if (idx >=0 && idx < 4) {
		m[idx]->use(target);
	}
}