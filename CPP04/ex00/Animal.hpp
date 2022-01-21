#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string &type);
		virtual ~Animal();
		Animal(const Animal &animal);

		Animal &operator=(const Animal &animal);

		virtual const char *makeSound() const;

		void setType(std::string type);
		std::string getType() const;
};

#endif