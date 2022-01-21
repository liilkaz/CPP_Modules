#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *dogs_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &dog);

		Dog &operator=(const Dog &dog);

		virtual const char *makeSound() const;
		Brain *getDogsBrain();
};

#endif