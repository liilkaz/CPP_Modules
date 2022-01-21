#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	std::cout << "\033[32m" << "CAT: Default constructor called" << "\033[0m" << std::endl;
	this->type = "Caaaat"; 
	this->cats_brain = new Brain();}

Cat::~Cat() {
	std::cout << "\033[32m" << "CAT: Destructor called" << "\033[0m" << std::endl;
	delete this->cats_brain;
}

Cat::Cat(const Cat &cat){
	std::cout << "\033[32m" << "CAT: Copy constructor called" << "\033[0m" << std::endl;
	this->cats_brain = new Brain();
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		this->type = cat.type;
		*(this->cats_brain) = *(cat.cats_brain);
	}
	return *this;
}

const char *Cat::makeSound() const { return "Meow"; }

Brain *Cat::getCatsBrain() {
	return cats_brain;
}