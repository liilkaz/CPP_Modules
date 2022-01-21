#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat &cat);

		Cat &operator=(const Cat &cat);

		virtual const char *makeSound() const;
};

#endif