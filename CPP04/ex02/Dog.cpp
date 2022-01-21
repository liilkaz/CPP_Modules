#include "Dog.hpp"

Dog::Dog() {
	std::cout << "\033[34m" << "DOG: Default constructor called" << "\033[0m" << std::endl;
	this->type = "Dooooog";
	this->dogs_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "\033[34m" << "DOG: Destructor called" << "\033[0m" << std::endl;
	delete this->dogs_brain;
}

Dog::Dog(const Dog &dog){
	std::cout << "\033[34m" << "DOG: Copy constructor called" << "\033[0m" << std::endl;
	this->dogs_brain = new Brain();
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->type = dog.type;
		*(this->dogs_brain) = *(dog.dogs_brain);
	}
	return *this;
}

const char *Dog::makeSound() const{ return "Woof"; }

Brain *Dog::getDogsBrain() {
	return dogs_brain;
}