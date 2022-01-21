#include "Cat.hpp"

Cat::Cat() {
	std::cout << "\033[32m" << "CAT: Default constructor called" << "\033[0m" << std::endl;
	this->type = "Caaaat"; }

Cat::~Cat() {
	std::cout << "\033[32m" << "CAT: Destructor called" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &cat){
	std::cout << "\033[32m" << "CAT: Copy constructor called" << "\033[0m" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		this->type = cat.type;
	}
	return *this;
}

const char *Cat::makeSound() const { return "Meow"; }