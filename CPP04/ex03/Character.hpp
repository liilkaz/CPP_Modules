#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string name;
		AMateria *m[4];
	public:
		Character();
		Character (std::string name);
		Character (const Character &character);
		virtual ~Character();
		Character &operator=(const Character &character);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif