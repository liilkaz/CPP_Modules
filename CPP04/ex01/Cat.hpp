#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *cats_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &cat);

		Cat &operator=(const Cat &cat);

		virtual const char *makeSound() const;

		Brain *getCatsBrain();
};

#endif