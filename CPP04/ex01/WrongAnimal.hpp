#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
	protected:
		std::string wrong_type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string &wrong_type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &wrong_animal);

		WrongAnimal &operator=(const WrongAnimal &wrong_animal);

		const char *makeSound() const;

		void setType(std::string wrong_type);
		std::string getType() const;

};

#endif