#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &wrong_cat);

		WrongCat &operator=(const WrongCat &wrong_cat);

		const char *makeSound() const;
};

#endif