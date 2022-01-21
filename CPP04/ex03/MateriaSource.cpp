// #include "Ice.hpp"

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		m[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for(int i = 0; i < 4; i++)
	{
		if (this->m[i] != NULL)
		{
			delete m[i];
			m[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &ms) {
	*this = ms;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms) {
	if (this != &ms) {
		for (int i = 0; i < 4; i++)
		{
			*m[i] = *ms.m[i];
		}
}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->m[i] == NULL) {
			this->m[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (m[i]->getType() == type)
			return m[i]->clone();
	}
	return 0;
}
