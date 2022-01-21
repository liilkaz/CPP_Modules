#include "Cure.hpp"

Cure::Cure() {type = "cure";}

Cure::~Cure() {}

Cure::Cure(const Cure &cure) {
	*this = cure;
}

Cure &Cure::operator=(const Cure &cure) {
	if (this != &cure) {
		this->type = cure.type;
	}
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << " heals " << target.getName() <<"’s wounds" << std::endl;
}
