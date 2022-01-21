#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria() : type("...") {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &materia) {
	*this = materia;	
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria &AMateria::operator=(const AMateria &materia) {
	if (this != &materia) {
		this->type = materia.type;
	}
	return *this;
}


std::string const &AMateria:: getType() const {
	return type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
