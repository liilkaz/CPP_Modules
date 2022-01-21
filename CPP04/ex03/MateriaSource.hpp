#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include <iostream>
#include "IMateriaSource.hpp"
// #include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *m[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource &ms);
		MateriaSource &operator=(const MateriaSource &ms);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif