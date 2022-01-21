#include "Dog.hpp"

Dog::Dog() {
	std::cout << "\033[34m" << "DOG: Default constructor called" << "\033[0m" << std::endl;
	this->type = "Dooooog";
}

Dog::~Dog() {
	std::cout << "\033[34m" << "DOG: Destructor called" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &dog){
	std::cout << "\033[34m" << "DOG: Copy constructor called" << "\033[0m" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->type = dog.type;
	}
	return *this;
}

const char *Dog::makeSound() const{ return "Woof"; }