#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &materia);
		AMateria &operator=(const AMateria &materia);

		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(class ICharacter& target);
};

#endif